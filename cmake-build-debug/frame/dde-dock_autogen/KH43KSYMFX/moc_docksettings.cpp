/****************************************************************************
** Meta object code from reading C++ file 'docksettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/util/docksettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docksettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WhiteMenu_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WhiteMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WhiteMenu_t qt_meta_stringdata_WhiteMenu = {
    {
QT_MOC_LITERAL(0, 0, 9) // "WhiteMenu"

    },
    "WhiteMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WhiteMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WhiteMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WhiteMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_WhiteMenu.data,
      qt_meta_data_WhiteMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WhiteMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WhiteMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WhiteMenu.stringdata0))
        return static_cast<void*>(const_cast< WhiteMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int WhiteMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DockSettings_t {
    QByteArrayData data[31];
    char stringdata0[479];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockSettings_t qt_meta_stringdata_DockSettings = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DockSettings"
QT_MOC_LITERAL(1, 13, 11), // "dataChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "positionChanged"
QT_MOC_LITERAL(4, 42, 8), // "Position"
QT_MOC_LITERAL(5, 51, 12), // "prevPosition"
QT_MOC_LITERAL(6, 64, 15), // "autoHideChanged"
QT_MOC_LITERAL(7, 80, 8), // "autoHide"
QT_MOC_LITERAL(8, 89, 18), // "displayModeChanegd"
QT_MOC_LITERAL(9, 108, 20), // "windowVisibleChanged"
QT_MOC_LITERAL(10, 129, 21), // "windowHideModeChanged"
QT_MOC_LITERAL(11, 151, 21), // "windowGeometryChanged"
QT_MOC_LITERAL(12, 173, 14), // "opacityChanged"
QT_MOC_LITERAL(13, 188, 5), // "value"
QT_MOC_LITERAL(14, 194, 14), // "updateGeometry"
QT_MOC_LITERAL(15, 209, 11), // "setAutoHide"
QT_MOC_LITERAL(16, 221, 17), // "menuActionClicked"
QT_MOC_LITERAL(17, 239, 8), // "QAction*"
QT_MOC_LITERAL(18, 248, 6), // "action"
QT_MOC_LITERAL(19, 255, 17), // "onPositionChanged"
QT_MOC_LITERAL(20, 273, 15), // "iconSizeChanged"
QT_MOC_LITERAL(21, 289, 20), // "onDisplayModeChanged"
QT_MOC_LITERAL(22, 310, 15), // "hideModeChanged"
QT_MOC_LITERAL(23, 326, 16), // "hideStateChanged"
QT_MOC_LITERAL(24, 343, 20), // "dockItemCountChanged"
QT_MOC_LITERAL(25, 364, 20), // "primaryScreenChanged"
QT_MOC_LITERAL(26, 385, 21), // "resetFrontendGeometry"
QT_MOC_LITERAL(27, 407, 20), // "updateForbidPostions"
QT_MOC_LITERAL(28, 428, 16), // "onOpacityChanged"
QT_MOC_LITERAL(29, 445, 24), // "onFashionTraySizeChanged"
QT_MOC_LITERAL(30, 470, 8) // "traySize"

    },
    "DockSettings\0dataChanged\0\0positionChanged\0"
    "Position\0prevPosition\0autoHideChanged\0"
    "autoHide\0displayModeChanegd\0"
    "windowVisibleChanged\0windowHideModeChanged\0"
    "windowGeometryChanged\0opacityChanged\0"
    "value\0updateGeometry\0setAutoHide\0"
    "menuActionClicked\0QAction*\0action\0"
    "onPositionChanged\0iconSizeChanged\0"
    "onDisplayModeChanged\0hideModeChanged\0"
    "hideStateChanged\0dockItemCountChanged\0"
    "primaryScreenChanged\0resetFrontendGeometry\0"
    "updateForbidPostions\0onOpacityChanged\0"
    "onFashionTraySizeChanged\0traySize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    1,  125,    2, 0x06 /* Public */,
       6,    1,  128,    2, 0x06 /* Public */,
       8,    0,  131,    2, 0x06 /* Public */,
       9,    0,  132,    2, 0x06 /* Public */,
      10,    0,  133,    2, 0x06 /* Public */,
      11,    0,  134,    2, 0x06 /* Public */,
      12,    1,  135,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  138,    2, 0x0a /* Public */,
      15,    1,  139,    2, 0x0a /* Public */,
      16,    1,  142,    2, 0x08 /* Private */,
      19,    0,  145,    2, 0x08 /* Private */,
      20,    0,  146,    2, 0x08 /* Private */,
      21,    0,  147,    2, 0x08 /* Private */,
      22,    0,  148,    2, 0x08 /* Private */,
      23,    0,  149,    2, 0x08 /* Private */,
      24,    0,  150,    2, 0x08 /* Private */,
      25,    0,  151,    2, 0x08 /* Private */,
      26,    0,  152,    2, 0x08 /* Private */,
      27,    0,  153,    2, 0x08 /* Private */,
      28,    1,  154,    2, 0x08 /* Private */,
      29,    1,  157,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::QSize,   30,

       0        // eod
};

void DockSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DockSettings *_t = static_cast<DockSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->positionChanged((*reinterpret_cast< const Position(*)>(_a[1]))); break;
        case 2: _t->autoHideChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->displayModeChanegd(); break;
        case 4: _t->windowVisibleChanged(); break;
        case 5: _t->windowHideModeChanged(); break;
        case 6: _t->windowGeometryChanged(); break;
        case 7: _t->opacityChanged((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 8: _t->updateGeometry(); break;
        case 9: _t->setAutoHide((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->menuActionClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->onPositionChanged(); break;
        case 12: _t->iconSizeChanged(); break;
        case 13: _t->onDisplayModeChanged(); break;
        case 14: _t->hideModeChanged(); break;
        case 15: _t->hideStateChanged(); break;
        case 16: _t->dockItemCountChanged(); break;
        case 17: _t->primaryScreenChanged(); break;
        case 18: _t->resetFrontendGeometry(); break;
        case 19: _t->updateForbidPostions(); break;
        case 20: _t->onOpacityChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 21: _t->onFashionTraySizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DockSettings::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockSettings::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DockSettings::*_t)(const Position ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockSettings::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DockSettings::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockSettings::autoHideChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DockSettings::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockSettings::displayModeChanegd)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DockSettings::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockSettings::windowVisibleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DockSettings::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockSettings::windowHideModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DockSettings::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockSettings::windowGeometryChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DockSettings::*_t)(const quint8 ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockSettings::opacityChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject DockSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DockSettings.data,
      qt_meta_data_DockSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DockSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DockSettings.stringdata0))
        return static_cast<void*>(const_cast< DockSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int DockSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void DockSettings::dataChanged()const
{
    QMetaObject::activate(const_cast< DockSettings *>(this), &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DockSettings::positionChanged(const Position _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DockSettings *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockSettings::autoHideChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DockSettings *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockSettings::displayModeChanegd()const
{
    QMetaObject::activate(const_cast< DockSettings *>(this), &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DockSettings::windowVisibleChanged()const
{
    QMetaObject::activate(const_cast< DockSettings *>(this), &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void DockSettings::windowHideModeChanged()const
{
    QMetaObject::activate(const_cast< DockSettings *>(this), &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void DockSettings::windowGeometryChanged()const
{
    QMetaObject::activate(const_cast< DockSettings *>(this), &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void DockSettings::opacityChanged(const quint8 _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DockSettings *>(this), &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
