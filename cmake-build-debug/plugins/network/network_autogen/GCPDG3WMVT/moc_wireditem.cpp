/****************************************************************************
** Meta object code from reading C++ file 'wireditem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/network/item/wireditem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wireditem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WiredItem_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WiredItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WiredItem_t qt_meta_stringdata_WiredItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WiredItem"
QT_MOC_LITERAL(1, 10, 11), // "refreshIcon"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "reloadIcon"
QT_MOC_LITERAL(4, 34, 18), // "deviceStateChanged"
QT_MOC_LITERAL(5, 53, 11) // "refreshTips"

    },
    "WiredItem\0refreshIcon\0\0reloadIcon\0"
    "deviceStateChanged\0refreshTips"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WiredItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WiredItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WiredItem *_t = static_cast<WiredItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshIcon(); break;
        case 1: _t->reloadIcon(); break;
        case 2: _t->deviceStateChanged(); break;
        case 3: _t->refreshTips(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WiredItem::staticMetaObject = {
    { &DeviceItem::staticMetaObject, qt_meta_stringdata_WiredItem.data,
      qt_meta_data_WiredItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WiredItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WiredItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WiredItem.stringdata0))
        return static_cast<void*>(const_cast< WiredItem*>(this));
    return DeviceItem::qt_metacast(_clname);
}

int WiredItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
