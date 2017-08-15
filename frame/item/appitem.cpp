#include "appitem.h"

#include "util/themeappicon.h"
#include "util/imagefactory.h"
#include "xcb/xcb_misc.h"
#include <QX11Info>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <QMenu>
#include <QPainter>
#include <QDrag>
#include <QMouseEvent>
#include <QApplication>
#include <QHBoxLayout>
#include <QGraphicsScene>
#include <QGraphicsItemAnimation>
#include <QTimeLine>
#include <QJsonObject>

#define APP_DRAG_THRESHOLD      20

const static qreal Frames[] = { 0, 0.327013, 0.987033, 1.77584, 2.61157, 3.45043, 4.26461, 5.03411, 5.74306, 6.37782, 6.92583, 7.37484, 7.71245, 7.92557, 8, 7.86164, 7.43184, 6.69344, 5.64142, 4.2916, 2.68986, 0.91694, -0.91694, -2.68986, -4.2916, -5.64142, -6.69344, -7.43184, -7.86164, -8, -7.86164, -7.43184, -6.69344, -5.64142, -4.2916, -2.68986, -0.91694, 0.91694, 2.68986, 4.2916, 5.64142, 6.69344, 7.43184, 7.86164, 8, 7.93082, 7.71592, 7.34672, 6.82071, 6.1458, 5.34493, 4.45847, 3.54153, 2.65507, 1.8542, 1.17929, 0.653279, 0.28408, 0.0691776, 0 };

int AppItem::IconBaseSize;
QPoint AppItem::MousePressPos;

AppItem::AppItem(const QDBusObjectPath &entry, QWidget *parent)
    : DockItem(parent),
      m_appNameTips(new QLabel(this)),
      m_appPreviewTips(new PreviewContainer(this)),
      m_itemEntry(new DBusDockEntry("com.deepin.dde.daemon.Dock", entry.path(),QDBusConnection::sessionBus(), this)),
      m_refreshIconTimer(new QTimer(this)),

      m_itemView(new QGraphicsView(this)),
      m_itemScene(new QGraphicsScene(this)),

      m_draging(false),

      m_smallIcon(QPixmap()),
      m_largeIcon(QPixmap()),

      m_horizontalIndicator(QPixmap(":/indicator/resources/indicator.png")),
      m_verticalIndicator(QPixmap(":/indicator/resources/indicator_ver.png")),
      m_activeHorizontalIndicator(QPixmap(":/indicator/resources/indicator_active.png")),
      m_activeVerticalIndicator(QPixmap(":/indicator/resources/indicator_active_ver.png")),
      m_updateIconGeometryTimer(new QTimer(this)),

      m_smallWatcher(new QFutureWatcher<QPixmap>(this)),
      m_largeWatcher(new QFutureWatcher<QPixmap>(this)),
      m_dbusDock(new DBusDock("com.deepin.dde.daemon.Dock", "/com/deepin/dde/daemon/Dock", QDBusConnection::sessionBus(), this)),
      m_actionMenu(new QMenu(this))
{
    QHBoxLayout *centralLayout = new QHBoxLayout;
    centralLayout->addWidget(m_itemView);
    centralLayout->setMargin(0);
    centralLayout->setSpacing(0);

    setAccessibleName(m_itemEntry->name());
    setAcceptDrops(true);
//    setMouseTracking(true);
    setLayout(centralLayout);

    m_itemView->setScene(m_itemScene);
    m_itemView->setAlignment(Qt::AlignCenter);
    m_itemView->setVisible(false);
    m_itemView->setFrameStyle(QFrame::NoFrame);
    m_itemView->setContentsMargins(0, 0, 0, 0);
    m_itemView->setRenderHints(QPainter::SmoothPixmapTransform);
    m_itemView->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    m_itemView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_itemView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    m_id = m_itemEntry->id();
    m_active = m_itemEntry->isActive();

    m_appNameTips->setObjectName(m_itemEntry->name());
    m_appNameTips->setAccessibleName(m_itemEntry->name() + "-tips");
    m_appNameTips->setVisible(false);
    m_appNameTips->setStyleSheet("color:white;"
                                 "padding:0px 3px;");

    m_updateIconGeometryTimer->setInterval(500);
    m_updateIconGeometryTimer->setSingleShot(true);

    m_refreshIconTimer->setInterval(200);
    m_refreshIconTimer->setSingleShot(true);

    m_appPreviewTips->setVisible(false);

    connect(m_itemEntry, &DBusDockEntry::IsActiveChanged, this, &AppItem::activeChanged);
    connect(m_itemEntry, &DBusDockEntry::WindowTitlesChanged, this, &AppItem::updateTitle, Qt::QueuedConnection);
    connect(m_itemEntry, &DBusDockEntry::IconChanged, this, &AppItem::refershIcon);
    connect(m_itemEntry, &DBusDockEntry::IsActiveChanged, this, static_cast<void (AppItem::*)()>(&AppItem::update));

    connect(m_updateIconGeometryTimer, &QTimer::timeout, this, &AppItem::updateWindowIconGeometries, Qt::QueuedConnection);
    connect(m_refreshIconTimer, &QTimer::timeout, this, &AppItem::refreshIconInteral, Qt::QueuedConnection);

    connect(m_appPreviewTips, &PreviewContainer::requestActivateWindow, this, &AppItem::requestActivateWindow, Qt::QueuedConnection);
    connect(m_appPreviewTips, &PreviewContainer::requestPreviewWindow, this, &AppItem::requestPreviewWindow, Qt::QueuedConnection);
    connect(m_appPreviewTips, &PreviewContainer::requestCancelPreview, this, &AppItem::requestCancelPreview, Qt::QueuedConnection);
    connect(m_appPreviewTips, &PreviewContainer::requestHidePreview, this, &AppItem::hidePopup, Qt::QueuedConnection);
    connect(m_appPreviewTips, &PreviewContainer::requestCheckWindows, m_itemEntry, &DBusDockEntry::Check);

    connect(m_actionMenu, &QMenu::triggered, this, &AppItem::onMenuTriggered);

    updateTitle();
    refershIcon();
}

AppItem::~AppItem()
{
    m_appNameTips->deleteLater();
    m_appPreviewTips->deleteLater();
}

const QString AppItem::appId() const
{
    return m_id;
}

// Update _NET_WM_ICON_GEOMETRY property for windows that every item
// that manages, so that WM can do proper animations for specific
// window behaviors like minimization.
void AppItem::updateWindowIconGeometries()
{
    const QRect r(mapToGlobal(QPoint(0, 0)),
                  mapToGlobal(QPoint(width(),height())));
    auto *xcb_misc = XcbMisc::instance();

    for (auto it(m_titles.cbegin()); it != m_titles.cend(); ++it)
        xcb_misc->set_window_icon_geometry(it.key(), r);
}

void AppItem::setIconBaseSize(const int size)
{
    IconBaseSize = size;
}

int AppItem::iconBaseSize()
{
    return IconBaseSize;
}

int AppItem::itemBaseWidth()
{
    if (DockDisplayMode == Dock::Fashion)
        return itemBaseHeight() * 1.1;
    else
        return itemBaseHeight() * 1.4;
}

void AppItem::moveEvent(QMoveEvent *e)
{
    DockItem::moveEvent(e);

    m_updateIconGeometryTimer->start();
}

int AppItem::itemBaseHeight()
{
    if (DockDisplayMode == Efficient)
        return IconBaseSize * 1.2;
    else
        return IconBaseSize * 1.5;
}

void AppItem::paintEvent(QPaintEvent *e)
{
    DockItem::paintEvent(e);

    if (m_draging || m_itemView->isVisible())
        return;

    QPainter painter(this);
    if (!painter.isActive())
        return;
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform, true);

    const QRectF itemRect = rect();

    // draw background
    QRectF backgroundRect = itemRect;
    if (DockDisplayMode == Efficient)
    {
        switch (DockPosition)
        {
        case Top:
        case Bottom:
//            backgroundRect = itemRect;//.marginsRemoved(QMargins(2, 0, 2, 0));
//            backgroundRect = itemRect.marginsRemoved(QMargins(0, 1, 0, 1));
        case Left:
        case Right:
            backgroundRect = itemRect.marginsRemoved(QMargins(1, 1, 1, 1));
//            backgroundRect = itemRect.marginsRemoved(QMargins(1, 0, 1, 0));
        }
    }

    if (DockDisplayMode == Efficient)
    {
        if (m_active)
        {
            painter.fillRect(backgroundRect, QColor(44, 167, 248, 255 * 0.3));

            const int activeLineWidth = itemRect.height() > 50 ? 4 : 2;
            QRectF activeRect = backgroundRect;
            switch (DockPosition)
            {
            case Top:       activeRect.setBottom(activeRect.top() + activeLineWidth);   break;
            case Bottom:    activeRect.setTop(activeRect.bottom() - activeLineWidth);   break;
            case Left:      activeRect.setRight(activeRect.left() + activeLineWidth);   break;
            case Right:     activeRect.setLeft(activeRect.right() - activeLineWidth);   break;
            }

            painter.fillRect(activeRect, QColor(44, 167, 248, 255));
        }
        else if (!m_titles.isEmpty())
            painter.fillRect(backgroundRect, QColor(255, 255, 255, 255 * 0.2));
    //    else
    //        painter.fillRect(backgroundRect, Qt::gray);
    }
    else
    {
        if (!m_titles.isEmpty())
        {
            QPoint p;
            QPixmap pixmap;
            QPixmap activePixmap;
            switch (DockPosition)
            {
            case Top:
                pixmap = m_horizontalIndicator;
                activePixmap = m_activeHorizontalIndicator;
                p.setX((itemRect.width() - pixmap.width()) / 2);
                p.setY(1);
                break;
            case Bottom:
                pixmap = m_horizontalIndicator;
                activePixmap = m_activeHorizontalIndicator;
                p.setX((itemRect.width() - pixmap.width()) / 2);
                p.setY(itemRect.height() - pixmap.height() - 1);
                break;
            case Left:
                pixmap = m_verticalIndicator;
                activePixmap = m_activeVerticalIndicator;
                p.setX(1);
                p.setY((itemRect.height() - pixmap.height()) / 2);
                break;
            case Right:
                pixmap = m_verticalIndicator;
                activePixmap = m_activeVerticalIndicator;
                p.setX(itemRect.width() - pixmap.width() - 1);
                p.setY((itemRect.height() - pixmap.height()) / 2);
                break;
            }

            if (m_active)
                painter.drawPixmap(p, activePixmap);
            else
                painter.drawPixmap(p, pixmap);
        }
    }

    // icon
    const QPixmap pixmap = DockDisplayMode == Efficient ? m_smallIcon : m_largeIcon;
    if (pixmap.isNull())
        return;

    // icon pos
    const QPointF iconPos = itemRect.center() - QRectF(pixmap.rect()).center();

    // draw ligher/normal icon
    if (!m_hover)
        painter.drawPixmap(iconPos, pixmap);
    else
        painter.drawPixmap(iconPos, ImageFactory::lighterEffect(pixmap));
}

void AppItem::mouseReleaseEvent(QMouseEvent *e)
{
    if (e->button() == Qt::MiddleButton) {
        m_itemEntry->NewInstance(QX11Info::getTimestamp());
    } else if (e->button() == Qt::LeftButton) {

        m_itemEntry->Activate(QX11Info::getTimestamp());

        if (!m_titles.isEmpty())
            return;

        // start launching effects
        m_itemScene->clear();
        const QRect r = rect();
        const QPixmap icon = DockDisplayMode == Efficient ? m_smallIcon : m_largeIcon;
        QGraphicsPixmapItem *item = m_itemScene->addPixmap(icon);
        item->setTransformationMode(Qt::SmoothTransformation);
        item->setPos(r.center() - icon.rect().center());
        m_itemView->setSceneRect(r);
//        m_itemView->setSceneRect((r.width() - icon.width()) / 2, (r.height() - icon.height()) / 2, r.width(), r.height());

        QTimeLine *tl = new QTimeLine;
        tl->setDuration(1200);
        tl->setFrameRange(0, 60);
        tl->setLoopCount(1);
        tl->setEasingCurve(QEasingCurve::Linear);
        tl->setStartFrame(0);
        tl->start();

        QGraphicsItemAnimation *ani = new QGraphicsItemAnimation;
        ani->setItem(item);
        ani->setTimeLine(tl);

        const int px = -icon.rect().center().x();
        const int py = -icon.rect().center().y() - 18;
        const QPoint pos = r.center() + QPoint(0, 18);
        for (int i(0); i != 60; ++i)
        {
            ani->setPosAt(i / 60.0, pos);
            ani->setTranslationAt(i / 60.0, px, py);
            ani->setRotationAt(i / 60.0, Frames[i]);
        }

        connect(tl, &QTimeLine::finished, tl, &QTimeLine::deleteLater);
        connect(tl, &QTimeLine::finished, ani, &QGraphicsItemAnimation::deleteLater);
        connect(tl, &QTimeLine::finished, m_itemScene, &QGraphicsScene::clear);
        connect(tl, &QTimeLine::finished, m_itemView, &QGraphicsView::hide);

        m_itemView->setVisible(true);
    }
}

void AppItem::mousePressEvent(QMouseEvent *e)
{
    m_updateIconGeometryTimer->stop();
    hidePopup();

    if (e->button() == Qt::RightButton)
    {
        if (perfectIconRect().contains(e->pos()))
        {
            m_actionMenu->hide();
            return;
        } else {
            return QWidget::mousePressEvent(e);
        }
    }

    if (e->button() == Qt::LeftButton)
        MousePressPos = e->pos();
}

void AppItem::mouseMoveEvent(QMouseEvent *e)
{
    e->accept();

    // handle preview
//    if (e->buttons() == Qt::NoButton)
//        return showPreview();

    // handle drag
    if (e->buttons() != Qt::LeftButton)
        return;

    const QPoint pos = e->pos();
    if (!rect().contains(pos))
        return;

    const QPoint distance = pos - MousePressPos;
    if (distance.manhattanLength() > APP_DRAG_THRESHOLD)
        return startDrag();
}

void AppItem::wheelEvent(QWheelEvent *e)
{
    QWidget::wheelEvent(e);

    m_itemEntry->PresentWindows();
}

void AppItem::resizeEvent(QResizeEvent *e)
{
    DockItem::resizeEvent(e);

    refershIcon();
}

void AppItem::dragEnterEvent(QDragEnterEvent *e)
{
    // ignore drag from panel
    if (e->source())
        return;

    // ignore request dock event
    if (e->mimeData()->formats().contains("RequestDock"))
        return e->ignore();

    e->accept();
}

void AppItem::dragMoveEvent(QDragMoveEvent *e)
{
    DockItem::dragMoveEvent(e);

    if (m_titles.isEmpty())
        return;

    if (!PopupWindow->isVisible() || PopupWindow->getContent() != m_appPreviewTips)
        showPreview();
}

void AppItem::dropEvent(QDropEvent *e)
{
    QStringList uriList;
    for (auto uri : e->mimeData()->urls()) {
        uriList << uri.toEncoded();
    }

    qDebug() << "accept drop event with URIs: " << uriList;
    m_itemEntry->HandleDragDrop(QX11Info::getTimestamp(), uriList);
}

void AppItem::contextMenuEvent(QContextMenuEvent *event)
{
    Q_UNUSED(event);

    for (QAction *action : m_actionMenu->actions())
        action->deleteLater();
    m_actionMenu->clear();

    if (m_titles.count() == 0) {
        QAction *newWindow = new QAction("新建实例", this);

        const bool isLock = m_itemEntry->isDocked();
        QAction *lock = new QAction(isLock ? "取消驻留" : "驻留", this);

        QJsonObject obj;

        obj["data"] = "new";
        newWindow->setData(obj);
        obj["data"] = "lock";
        lock->setData(obj);

        m_actionMenu->addAction(newWindow);
        m_actionMenu->addAction(lock);

    } else if (m_titles.count() == 1) {
        QAction *newWindow = new QAction("新建实例", this);

        const bool isLock = m_itemEntry->isDocked();
        QAction *lock = new QAction(isLock ? "取消驻留" : "驻留", this);
        QAction* minWindow = new QAction("最小化", this);
        QAction* maxWindow = new QAction("最大化", this);
        QAction* moveWindow = new QAction("移动", this);
        QAction* closeWindow = new QAction("关闭", this);
        QAction* onTopWindow = new QAction("置顶", this);

        QJsonObject obj;
        obj.insert("id", QString::number(m_titles.keys().first()));

        obj["data"] = "new";
        newWindow->setData(obj);
        obj["data"] = "min";
        minWindow->setData(obj);
        obj["data"] = "max";
        maxWindow->setData(obj);
        obj["data"] = "move";
        moveWindow->setData(obj);
        obj["data"] = "close";
        closeWindow->setData(obj);
        obj["data"] = "top";
        onTopWindow->setData(obj);
        obj["data"] = "lock";
        lock->setData(obj);

        QList<QAction*> list;
        list << newWindow << minWindow << maxWindow << moveWindow << closeWindow << onTopWindow << lock;

        m_actionMenu->addActions(list);
    } else {
        QAction *newWindow = new QAction("新建实例", this);
        const bool isLock = m_itemEntry->isDocked();
        QAction *lock = new QAction(isLock ? "取消驻留" : "驻留", this);

        QJsonObject obj;
        m_actionMenu->addAction(newWindow);
        obj["data"] = "new";
        newWindow->setData(obj);

        for (int i(0); i != m_titles.count(); ++i) {
            QAction* minWindow = new QAction("最小化", this);
            QAction* maxWindow = new QAction("最大化", this);
            QAction* moveWindow = new QAction("移动", this);
            QAction* closeWindow = new QAction("关闭", this);
            QAction* onTopWindow = new QAction("置顶", this);

            obj.insert("id", QString::number(m_titles.keys().at(i)));

            obj["data"] = "min";
            minWindow->setData(obj);
            obj["data"] = "max";
            maxWindow->setData(obj);
            obj["data"] = "move";
            moveWindow->setData(obj);
            obj["data"] = "close";
            closeWindow->setData(obj);
            obj["data"] = "top";
            onTopWindow->setData(obj);
            obj["data"] = "lock";
            lock->setData(obj);

            QList<QAction*> list;
            list << minWindow << maxWindow << moveWindow << closeWindow << onTopWindow;

            QMenu * menu = new QMenu(m_titles.values().at(i));
            menu->addActions(list);
            m_actionMenu->addMenu(menu);
        }
        m_actionMenu->addAction(lock);
    }

    m_actionMenu->exec(QCursor::pos());
}

void AppItem::showHoverTips()
{
    if (!m_titles.isEmpty())
        return showPreview();

    DockItem::showHoverTips();
}

void AppItem::invokedMenuItem(const QString &itemId, const bool checked)
{
    Q_UNUSED(checked);

    m_itemEntry->HandleMenuItem(QX11Info::getTimestamp(), itemId);
}

const QString AppItem::contextMenu() const
{
    return m_itemEntry->menu();
}

QWidget *AppItem::popupTips()
{
    if (m_draging)
        return nullptr;

    if (!m_titles.isEmpty())
    {
        const quint32 currentWindow = m_itemEntry->currentWindow();
        Q_ASSERT(m_titles.contains(currentWindow));
        m_appNameTips->setText(m_titles[currentWindow]);
    } else {
        m_appNameTips->setText(m_itemEntry->name());
    }

    return m_appNameTips;
}

void AppItem::startDrag()
{
    m_draging = true;
    update();

    const QPixmap dragPix = DockDisplayMode == Dock::Fashion ? m_largeIcon : m_smallIcon;

    QDrag *drag = new QDrag(this);
    drag->setPixmap(dragPix);
    drag->setHotSpot(dragPix.rect().center());
    drag->setMimeData(new QMimeData);

    emit dragStarted();
    const Qt::DropAction result = drag->exec(Qt::MoveAction);
    Q_UNUSED(result);

    // drag out of dock panel
    if (!drag->target())
        m_itemEntry->RequestUndock();

    m_draging = false;
    setVisible(true);
    update();
}

void AppItem::updateTitle()
{
    m_titles = m_itemEntry->windowTitles();
    m_appPreviewTips->setWindowInfos(m_titles);
    m_updateIconGeometryTimer->start();

    update();
}

void AppItem::refershIcon()
{
    m_refreshIconTimer->start();
}

void AppItem::refreshIconInteral()
{
    Q_ASSERT(sender() == m_refreshIconTimer);

    const QString icon = m_itemEntry->icon();
    const int iconSize = qMin(width(), height());

    if (DockDisplayMode == Efficient)
    {
        m_smallIcon = ThemeAppIcon::getIcon(icon, iconSize * 0.7);
        m_largeIcon = ThemeAppIcon::getIcon(icon, iconSize * 0.9);
    } else {
        m_smallIcon = ThemeAppIcon::getIcon(icon, iconSize * 0.6);
        m_largeIcon = ThemeAppIcon::getIcon(icon, iconSize * 0.8);
    }

    update();

    m_updateIconGeometryTimer->start();
}

void AppItem::activeChanged()
{
    m_active = m_itemEntry->isActive();
}

void AppItem::showPreview()
{
    if (m_titles.isEmpty())
        return;

    // test cursor position
//    const QRect r = rect();
//    const QPoint p = mapFromGlobal(QCursor::pos());

//    switch (DockPosition)
//    {
//    case Top:       if (p.y() != r.top())       return;     break;
//    case Left:      if (p.x() != r.left())      return;     break;
//    case Right:     if (p.x() != r.right())     return;     break;
//    case Bottom:    if (p.y() != r.bottom())    return;     break;
//    default:        return;
//    }

    m_appPreviewTips->setWindowInfos(m_titles);
    m_appPreviewTips->updateSnapshots();
    m_appPreviewTips->updateLayoutDirection(DockPosition);

    showPopupWindow(m_appPreviewTips, true);
}

void AppItem::onMenuTriggered(QAction *action)
{
    const QJsonObject &obj = action->data().toJsonObject();
    const QString &data = obj["data"].toString();
    const int id = obj["id"].toString().toInt();

    if (data == "new")
        m_itemEntry->NewInstance(QX11Info::getTimestamp());

    if (data == "min")
        m_dbusDock->MinimizeWindow(id);

    if (data == "max")
        m_dbusDock->MaximizeWindow(id);

    if (data == "close")
        m_dbusDock->CloseWindow(id);

    if (data == "lock") {
        const bool isLock = m_itemEntry->isDocked();
        isLock ? m_itemEntry->RequestUndock() : m_itemEntry->RequestDock();
    }

    if (data == "top")
        m_dbusDock->MakeWindowAbove(id);

    if (data == "move")
        m_dbusDock->MoveWindow(id);
}

