/****************************************************************************
** Meta object code from reading C++ file 'mainpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/panel/mainpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainPanel_t {
    QByteArrayData data[24];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainPanel_t qt_meta_stringdata_MainPanel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MainPanel"
QT_MOC_LITERAL(1, 10, 21), // "requestWindowAutoHide"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "autoHide"
QT_MOC_LITERAL(4, 42, 27), // "requestRefershWindowVisible"
QT_MOC_LITERAL(5, 70, 15), // "geometryChanged"
QT_MOC_LITERAL(6, 86, 14), // "adjustItemSize"
QT_MOC_LITERAL(7, 101, 12), // "itemInserted"
QT_MOC_LITERAL(8, 114, 5), // "index"
QT_MOC_LITERAL(9, 120, 9), // "DockItem*"
QT_MOC_LITERAL(10, 130, 4), // "item"
QT_MOC_LITERAL(11, 135, 11), // "itemRemoved"
QT_MOC_LITERAL(12, 147, 9), // "itemMoved"
QT_MOC_LITERAL(13, 157, 15), // "itemDragStarted"
QT_MOC_LITERAL(14, 173, 11), // "itemDropped"
QT_MOC_LITERAL(15, 185, 10), // "destnation"
QT_MOC_LITERAL(16, 196, 9), // "dropPoint"
QT_MOC_LITERAL(17, 206, 14), // "handleDragMove"
QT_MOC_LITERAL(18, 221, 15), // "QDragMoveEvent*"
QT_MOC_LITERAL(19, 237, 1), // "e"
QT_MOC_LITERAL(20, 239, 8), // "isFilter"
QT_MOC_LITERAL(21, 248, 21), // "checkMouseReallyLeave"
QT_MOC_LITERAL(22, 270, 11), // "displayMode"
QT_MOC_LITERAL(23, 282, 8) // "position"

    },
    "MainPanel\0requestWindowAutoHide\0\0"
    "autoHide\0requestRefershWindowVisible\0"
    "geometryChanged\0adjustItemSize\0"
    "itemInserted\0index\0DockItem*\0item\0"
    "itemRemoved\0itemMoved\0itemDragStarted\0"
    "itemDropped\0destnation\0dropPoint\0"
    "handleDragMove\0QDragMoveEvent*\0e\0"
    "isFilter\0checkMouseReallyLeave\0"
    "displayMode\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   74,    2, 0x08 /* Private */,
       7,    2,   75,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    2,   83,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    2,   89,    2, 0x08 /* Private */,
      17,    2,   94,    2, 0x08 /* Private */,
      21,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QPoint,   15,   16,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Bool,   19,   20,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::Int, 0x00095001,
      23, QMetaType::Int, 0x00095001,

       0        // eod
};

void MainPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainPanel *_t = static_cast<MainPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestWindowAutoHide((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->requestRefershWindowVisible(); break;
        case 2: _t->geometryChanged(); break;
        case 3: _t->adjustItemSize(); break;
        case 4: _t->itemInserted((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< DockItem*(*)>(_a[2]))); break;
        case 5: _t->itemRemoved((*reinterpret_cast< DockItem*(*)>(_a[1]))); break;
        case 6: _t->itemMoved((*reinterpret_cast< DockItem*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->itemDragStarted(); break;
        case 8: _t->itemDropped((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 9: _t->handleDragMove((*reinterpret_cast< QDragMoveEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->checkMouseReallyLeave(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainPanel::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainPanel::requestWindowAutoHide)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainPanel::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainPanel::requestRefershWindowVisible)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainPanel::geometryChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MainPanel *_t = static_cast<MainPanel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->displayMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->position(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MainPanel::staticMetaObject = {
    { &DBlurEffectWidget::staticMetaObject, qt_meta_stringdata_MainPanel.data,
      qt_meta_data_MainPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainPanel.stringdata0))
        return static_cast<void*>(const_cast< MainPanel*>(this));
    return DBlurEffectWidget::qt_metacast(_clname);
}

int MainPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBlurEffectWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainPanel::requestWindowAutoHide(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MainPanel *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainPanel::requestRefershWindowVisible()const
{
    QMetaObject::activate(const_cast< MainPanel *>(this), &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainPanel::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
