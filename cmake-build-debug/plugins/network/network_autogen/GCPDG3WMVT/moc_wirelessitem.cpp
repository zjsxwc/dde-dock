/****************************************************************************
** Meta object code from reading C++ file 'wirelessitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/network/item/wirelessitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wirelessitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WirelessItem_t {
    QByteArrayData data[27];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WirelessItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WirelessItem_t qt_meta_stringdata_WirelessItem = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WirelessItem"
QT_MOC_LITERAL(1, 13, 15), // "requestActiveAP"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "devPath"
QT_MOC_LITERAL(4, 38, 6), // "apPath"
QT_MOC_LITERAL(5, 45, 4), // "uuid"
QT_MOC_LITERAL(6, 50, 17), // "requestDeactiveAP"
QT_MOC_LITERAL(7, 68, 23), // "requestSetAppletVisible"
QT_MOC_LITERAL(8, 92, 7), // "visible"
QT_MOC_LITERAL(9, 100, 10), // "feedSecret"
QT_MOC_LITERAL(10, 111, 14), // "connectionPath"
QT_MOC_LITERAL(11, 126, 11), // "settingName"
QT_MOC_LITERAL(12, 138, 8), // "password"
QT_MOC_LITERAL(13, 147, 11), // "autoConnect"
QT_MOC_LITERAL(14, 159, 12), // "cancelSecret"
QT_MOC_LITERAL(15, 172, 19), // "queryActiveConnInfo"
QT_MOC_LITERAL(16, 192, 19), // "requestWirelessScan"
QT_MOC_LITERAL(17, 212, 14), // "createApConfig"
QT_MOC_LITERAL(18, 227, 22), // "queryConnectionSession"
QT_MOC_LITERAL(19, 250, 13), // "setDeviceInfo"
QT_MOC_LITERAL(20, 264, 5), // "index"
QT_MOC_LITERAL(21, 270, 4), // "init"
QT_MOC_LITERAL(22, 275, 12), // "adjustHeight"
QT_MOC_LITERAL(23, 288, 11), // "refreshIcon"
QT_MOC_LITERAL(24, 300, 11), // "refreshTips"
QT_MOC_LITERAL(25, 312, 18), // "deviceStateChanged"
QT_MOC_LITERAL(26, 331, 16) // "onRefreshTimeout"

    },
    "WirelessItem\0requestActiveAP\0\0devPath\0"
    "apPath\0uuid\0requestDeactiveAP\0"
    "requestSetAppletVisible\0visible\0"
    "feedSecret\0connectionPath\0settingName\0"
    "password\0autoConnect\0cancelSecret\0"
    "queryActiveConnInfo\0requestWirelessScan\0"
    "createApConfig\0queryConnectionSession\0"
    "setDeviceInfo\0index\0init\0adjustHeight\0"
    "refreshIcon\0refreshTips\0deviceStateChanged\0"
    "onRefreshTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WirelessItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   94,    2, 0x06 /* Public */,
       6,    1,  101,    2, 0x06 /* Public */,
       7,    1,  104,    2, 0x06 /* Public */,
       9,    4,  107,    2, 0x06 /* Public */,
      14,    2,  116,    2, 0x06 /* Public */,
      15,    0,  121,    2, 0x06 /* Public */,
      16,    0,  122,    2, 0x06 /* Public */,
      17,    2,  123,    2, 0x06 /* Public */,
      18,    2,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  133,    2, 0x0a /* Public */,
      21,    0,  136,    2, 0x08 /* Private */,
      22,    0,  137,    2, 0x08 /* Private */,
      23,    0,  138,    2, 0x08 /* Private */,
      24,    0,  139,    2, 0x08 /* Private */,
      25,    0,  140,    2, 0x08 /* Private */,
      26,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WirelessItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WirelessItem *_t = static_cast<WirelessItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestActiveAP((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->requestDeactiveAP((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->requestSetAppletVisible((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->feedSecret((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4]))); break;
        case 4: _t->cancelSecret((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->queryActiveConnInfo(); break;
        case 6: _t->requestWirelessScan(); break;
        case 7: _t->createApConfig((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->queryConnectionSession((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->setDeviceInfo((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->init(); break;
        case 11: _t->adjustHeight(); break;
        case 12: _t->refreshIcon(); break;
        case 13: _t->refreshTips(); break;
        case 14: _t->deviceStateChanged(); break;
        case 15: _t->onRefreshTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WirelessItem::*_t)(const QString & , const QString & , const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::requestActiveAP)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WirelessItem::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::requestDeactiveAP)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WirelessItem::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::requestSetAppletVisible)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WirelessItem::*_t)(const QString & , const QString & , const QString & , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::feedSecret)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WirelessItem::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::cancelSecret)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WirelessItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::queryActiveConnInfo)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WirelessItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::requestWirelessScan)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WirelessItem::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::createApConfig)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WirelessItem::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessItem::queryConnectionSession)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject WirelessItem::staticMetaObject = {
    { &DeviceItem::staticMetaObject, qt_meta_stringdata_WirelessItem.data,
      qt_meta_data_WirelessItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WirelessItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WirelessItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WirelessItem.stringdata0))
        return static_cast<void*>(const_cast< WirelessItem*>(this));
    return DeviceItem::qt_metacast(_clname);
}

int WirelessItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void WirelessItem::requestActiveAP(const QString & _t1, const QString & _t2, const QString & _t3)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< WirelessItem *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WirelessItem::requestDeactiveAP(const QString & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< WirelessItem *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WirelessItem::requestSetAppletVisible(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< WirelessItem *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WirelessItem::feedSecret(const QString & _t1, const QString & _t2, const QString & _t3, const bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WirelessItem::cancelSecret(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WirelessItem::queryActiveConnInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void WirelessItem::requestWirelessScan()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void WirelessItem::createApConfig(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WirelessItem::queryConnectionSession(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
