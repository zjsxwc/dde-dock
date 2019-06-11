/****************************************************************************
** Meta object code from reading C++ file 'dockitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/item/dockitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DockItem_t {
    QByteArrayData data[16];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockItem_t qt_meta_stringdata_DockItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DockItem"
QT_MOC_LITERAL(1, 9, 11), // "dragStarted"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "itemDropped"
QT_MOC_LITERAL(4, 34, 11), // "destination"
QT_MOC_LITERAL(5, 46, 9), // "dropPoint"
QT_MOC_LITERAL(6, 56, 21), // "requestWindowAutoHide"
QT_MOC_LITERAL(7, 78, 8), // "autoHide"
QT_MOC_LITERAL(8, 87, 27), // "requestRefreshWindowVisible"
QT_MOC_LITERAL(9, 115, 11), // "refershIcon"
QT_MOC_LITERAL(10, 127, 15), // "showPopupApplet"
QT_MOC_LITERAL(11, 143, 13), // "QWidget*const"
QT_MOC_LITERAL(12, 157, 6), // "applet"
QT_MOC_LITERAL(13, 164, 9), // "hidePopup"
QT_MOC_LITERAL(14, 174, 15), // "showContextMenu"
QT_MOC_LITERAL(15, 190, 21) // "onContextMenuAccepted"

    },
    "DockItem\0dragStarted\0\0itemDropped\0"
    "destination\0dropPoint\0requestWindowAutoHide\0"
    "autoHide\0requestRefreshWindowVisible\0"
    "refershIcon\0showPopupApplet\0QWidget*const\0"
    "applet\0hidePopup\0showContextMenu\0"
    "onContextMenuAccepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    2,   60,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   69,    2, 0x0a /* Public */,
      10,    1,   70,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x0a /* Public */,
      14,    0,   74,    2, 0x09 /* Protected */,
      15,    0,   75,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QPoint,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DockItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DockItem *_t = static_cast<DockItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dragStarted(); break;
        case 1: _t->itemDropped((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 2: _t->requestWindowAutoHide((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->requestRefreshWindowVisible(); break;
        case 4: _t->refershIcon(); break;
        case 5: _t->showPopupApplet((*reinterpret_cast< QWidget*const(*)>(_a[1]))); break;
        case 6: _t->hidePopup(); break;
        case 7: _t->showContextMenu(); break;
        case 8: _t->onContextMenuAccepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DockItem::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItem::dragStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DockItem::*_t)(QObject * , const QPoint & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItem::itemDropped)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DockItem::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItem::requestWindowAutoHide)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DockItem::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItem::requestRefreshWindowVisible)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject DockItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DockItem.data,
      qt_meta_data_DockItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DockItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DockItem.stringdata0))
        return static_cast<void*>(const_cast< DockItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int DockItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DockItem::dragStarted()const
{
    QMetaObject::activate(const_cast< DockItem *>(this), &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DockItem::itemDropped(QObject * _t1, const QPoint & _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< DockItem *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockItem::requestWindowAutoHide(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DockItem *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockItem::requestRefreshWindowVisible()const
{
    QMetaObject::activate(const_cast< DockItem *>(this), &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
