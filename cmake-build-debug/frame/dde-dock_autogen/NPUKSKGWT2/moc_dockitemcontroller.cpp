/****************************************************************************
** Meta object code from reading C++ file 'dockitemcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/controller/dockitemcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockitemcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DockItemController_t {
    QByteArrayData data[28];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockItemController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockItemController_t qt_meta_stringdata_DockItemController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DockItemController"
QT_MOC_LITERAL(1, 19, 12), // "itemInserted"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 9), // "DockItem*"
QT_MOC_LITERAL(5, 49, 4), // "item"
QT_MOC_LITERAL(6, 54, 11), // "itemRemoved"
QT_MOC_LITERAL(7, 66, 9), // "itemMoved"
QT_MOC_LITERAL(8, 76, 11), // "itemManaged"
QT_MOC_LITERAL(9, 88, 11), // "itemUpdated"
QT_MOC_LITERAL(10, 100, 22), // "fashionTraySizeChanged"
QT_MOC_LITERAL(11, 123, 8), // "traySize"
QT_MOC_LITERAL(12, 132, 16), // "refershItemsIcon"
QT_MOC_LITERAL(13, 149, 15), // "sortPluginItems"
QT_MOC_LITERAL(14, 165, 25), // "updatePluginsItemOrderKey"
QT_MOC_LITERAL(15, 191, 8), // "itemMove"
QT_MOC_LITERAL(16, 200, 14), // "DockItem*const"
QT_MOC_LITERAL(17, 215, 8), // "moveItem"
QT_MOC_LITERAL(18, 224, 11), // "replaceItem"
QT_MOC_LITERAL(19, 236, 24), // "itemDroppedIntoContainer"
QT_MOC_LITERAL(20, 261, 24), // "itemDragOutFromContainer"
QT_MOC_LITERAL(21, 286, 20), // "placeholderItemAdded"
QT_MOC_LITERAL(22, 307, 16), // "PlaceholderItem*"
QT_MOC_LITERAL(23, 324, 8), // "position"
QT_MOC_LITERAL(24, 333, 21), // "placeholderItemDocked"
QT_MOC_LITERAL(25, 355, 10), // "appDesktop"
QT_MOC_LITERAL(26, 366, 22), // "placeholderItemRemoved"
QT_MOC_LITERAL(27, 389, 28) // "refreshFSTItemSpliterVisible"

    },
    "DockItemController\0itemInserted\0\0index\0"
    "DockItem*\0item\0itemRemoved\0itemMoved\0"
    "itemManaged\0itemUpdated\0fashionTraySizeChanged\0"
    "traySize\0refershItemsIcon\0sortPluginItems\0"
    "updatePluginsItemOrderKey\0itemMove\0"
    "DockItem*const\0moveItem\0replaceItem\0"
    "itemDroppedIntoContainer\0"
    "itemDragOutFromContainer\0placeholderItemAdded\0"
    "PlaceholderItem*\0position\0"
    "placeholderItemDocked\0appDesktop\0"
    "placeholderItemRemoved\0"
    "refreshFSTItemSpliterVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockItemController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       6,    1,   99,    2, 0x06 /* Public */,
       7,    2,  102,    2, 0x06 /* Public */,
       8,    1,  107,    2, 0x06 /* Public */,
       9,    1,  110,    2, 0x06 /* Public */,
      10,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  116,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    0,  118,    2, 0x0a /* Public */,
      15,    2,  119,    2, 0x0a /* Public */,
      19,    1,  124,    2, 0x0a /* Public */,
      20,    1,  127,    2, 0x0a /* Public */,
      21,    2,  130,    2, 0x0a /* Public */,
      24,    2,  135,    2, 0x0a /* Public */,
      26,    1,  140,    2, 0x0a /* Public */,
      27,    0,  143,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QSize,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, 0x80000000 | 16,    5,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 4,    5,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,   25,   23,
    QMetaType::Void, 0x80000000 | 22,    5,
    QMetaType::Void,

       0        // eod
};

void DockItemController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DockItemController *_t = static_cast<DockItemController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemInserted((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< DockItem*(*)>(_a[2]))); break;
        case 1: _t->itemRemoved((*reinterpret_cast< DockItem*(*)>(_a[1]))); break;
        case 2: _t->itemMoved((*reinterpret_cast< DockItem*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->itemManaged((*reinterpret_cast< DockItem*(*)>(_a[1]))); break;
        case 4: _t->itemUpdated((*reinterpret_cast< DockItem*(*)>(_a[1]))); break;
        case 5: _t->fashionTraySizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 6: _t->refershItemsIcon(); break;
        case 7: _t->sortPluginItems(); break;
        case 8: _t->updatePluginsItemOrderKey(); break;
        case 9: _t->itemMove((*reinterpret_cast< DockItem*const(*)>(_a[1])),(*reinterpret_cast< DockItem*const(*)>(_a[2]))); break;
        case 10: _t->itemDroppedIntoContainer((*reinterpret_cast< DockItem*const(*)>(_a[1]))); break;
        case 11: _t->itemDragOutFromContainer((*reinterpret_cast< DockItem*const(*)>(_a[1]))); break;
        case 12: _t->placeholderItemAdded((*reinterpret_cast< PlaceholderItem*(*)>(_a[1])),(*reinterpret_cast< DockItem*(*)>(_a[2]))); break;
        case 13: _t->placeholderItemDocked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< DockItem*(*)>(_a[2]))); break;
        case 14: _t->placeholderItemRemoved((*reinterpret_cast< PlaceholderItem*(*)>(_a[1]))); break;
        case 15: _t->refreshFSTItemSpliterVisible(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlaceholderItem* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DockItem* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlaceholderItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DockItemController::*_t)(const int , DockItem * ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItemController::itemInserted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DockItemController::*_t)(DockItem * ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItemController::itemRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DockItemController::*_t)(DockItem * , const int ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItemController::itemMoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DockItemController::*_t)(DockItem * ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItemController::itemManaged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DockItemController::*_t)(DockItem * ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItemController::itemUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DockItemController::*_t)(const QSize & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DockItemController::fashionTraySizeChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject DockItemController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DockItemController.data,
      qt_meta_data_DockItemController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DockItemController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockItemController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DockItemController.stringdata0))
        return static_cast<void*>(const_cast< DockItemController*>(this));
    return QObject::qt_metacast(_clname);
}

int DockItemController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void DockItemController::itemInserted(const int _t1, DockItem * _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< DockItemController *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockItemController::itemRemoved(DockItem * _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DockItemController *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockItemController::itemMoved(DockItem * _t1, const int _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< DockItemController *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockItemController::itemManaged(DockItem * _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DockItemController *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DockItemController::itemUpdated(DockItem * _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DockItemController *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DockItemController::fashionTraySizeChanged(const QSize & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DockItemController *>(this), &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
