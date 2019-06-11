/****************************************************************************
** Meta object code from reading C++ file 'wirelesslist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/network/item/applet/wirelesslist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wirelesslist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WirelessList_t {
    QByteArrayData data[31];
    char stringdata0[414];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WirelessList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WirelessList_t qt_meta_stringdata_WirelessList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WirelessList"
QT_MOC_LITERAL(1, 13, 22), // "requestSetDeviceEnable"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "path"
QT_MOC_LITERAL(4, 42, 6), // "enable"
QT_MOC_LITERAL(5, 49, 15), // "requestActiveAP"
QT_MOC_LITERAL(6, 65, 7), // "devPath"
QT_MOC_LITERAL(7, 73, 6), // "apPath"
QT_MOC_LITERAL(8, 80, 4), // "uuid"
QT_MOC_LITERAL(9, 85, 17), // "requestDeactiveAP"
QT_MOC_LITERAL(10, 103, 19), // "requestWirelessScan"
QT_MOC_LITERAL(11, 123, 23), // "requestSetAppletVisible"
QT_MOC_LITERAL(12, 147, 7), // "visible"
QT_MOC_LITERAL(13, 155, 13), // "setDeviceInfo"
QT_MOC_LITERAL(14, 169, 5), // "index"
QT_MOC_LITERAL(15, 175, 10), // "loadAPList"
QT_MOC_LITERAL(16, 186, 7), // "APAdded"
QT_MOC_LITERAL(17, 194, 6), // "apInfo"
QT_MOC_LITERAL(18, 201, 9), // "APRemoved"
QT_MOC_LITERAL(19, 211, 19), // "APPropertiesChanged"
QT_MOC_LITERAL(20, 231, 12), // "updateAPList"
QT_MOC_LITERAL(21, 244, 20), // "onEnableButtonToggle"
QT_MOC_LITERAL(22, 265, 21), // "onDeviceEnableChanged"
QT_MOC_LITERAL(23, 287, 10), // "activateAP"
QT_MOC_LITERAL(24, 298, 4), // "ssid"
QT_MOC_LITERAL(25, 303, 10), // "deactiveAP"
QT_MOC_LITERAL(26, 314, 18), // "updateIndicatorPos"
QT_MOC_LITERAL(27, 333, 29), // "onActiveConnectionInfoChanged"
QT_MOC_LITERAL(28, 363, 18), // "onActivateApFailed"
QT_MOC_LITERAL(29, 382, 23), // "onHotspotEnabledChanged"
QT_MOC_LITERAL(30, 406, 7) // "enabled"

    },
    "WirelessList\0requestSetDeviceEnable\0"
    "\0path\0enable\0requestActiveAP\0devPath\0"
    "apPath\0uuid\0requestDeactiveAP\0"
    "requestWirelessScan\0requestSetAppletVisible\0"
    "visible\0setDeviceInfo\0index\0loadAPList\0"
    "APAdded\0apInfo\0APRemoved\0APPropertiesChanged\0"
    "updateAPList\0onEnableButtonToggle\0"
    "onDeviceEnableChanged\0activateAP\0ssid\0"
    "deactiveAP\0updateIndicatorPos\0"
    "onActiveConnectionInfoChanged\0"
    "onActivateApFailed\0onHotspotEnabledChanged\0"
    "enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WirelessList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,
       5,    3,  114,    2, 0x06 /* Public */,
       9,    1,  121,    2, 0x06 /* Public */,
      10,    0,  124,    2, 0x06 /* Public */,
      11,    1,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  128,    2, 0x0a /* Public */,
      15,    0,  131,    2, 0x08 /* Private */,
      16,    1,  132,    2, 0x08 /* Private */,
      18,    1,  135,    2, 0x08 /* Private */,
      19,    1,  138,    2, 0x08 /* Private */,
      20,    0,  141,    2, 0x08 /* Private */,
      21,    1,  142,    2, 0x08 /* Private */,
      22,    1,  145,    2, 0x08 /* Private */,
      23,    2,  148,    2, 0x08 /* Private */,
      25,    0,  153,    2, 0x08 /* Private */,
      26,    0,  154,    2, 0x08 /* Private */,
      27,    0,  155,    2, 0x08 /* Private */,
      28,    2,  156,    2, 0x08 /* Private */,
      29,    1,  161,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   17,
    QMetaType::Void, QMetaType::QJsonObject,   17,
    QMetaType::Void, QMetaType::QJsonObject,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Bool,   30,

       0        // eod
};

void WirelessList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WirelessList *_t = static_cast<WirelessList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestSetDeviceEnable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 1: _t->requestActiveAP((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->requestDeactiveAP((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->requestWirelessScan(); break;
        case 4: _t->requestSetAppletVisible((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->setDeviceInfo((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->loadAPList(); break;
        case 7: _t->APAdded((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 8: _t->APRemoved((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 9: _t->APPropertiesChanged((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 10: _t->updateAPList(); break;
        case 11: _t->onEnableButtonToggle((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->onDeviceEnableChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 13: _t->activateAP((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->deactiveAP(); break;
        case 15: _t->updateIndicatorPos(); break;
        case 16: _t->onActiveConnectionInfoChanged(); break;
        case 17: _t->onActivateApFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->onHotspotEnabledChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WirelessList::*_t)(const QString & , const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessList::requestSetDeviceEnable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WirelessList::*_t)(const QString & , const QString & , const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessList::requestActiveAP)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WirelessList::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessList::requestDeactiveAP)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WirelessList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessList::requestWirelessScan)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WirelessList::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessList::requestSetAppletVisible)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject WirelessList::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_WirelessList.data,
      qt_meta_data_WirelessList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WirelessList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WirelessList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WirelessList.stringdata0))
        return static_cast<void*>(const_cast< WirelessList*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int WirelessList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void WirelessList::requestSetDeviceEnable(const QString & _t1, const bool _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< WirelessList *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WirelessList::requestActiveAP(const QString & _t1, const QString & _t2, const QString & _t3)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< WirelessList *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WirelessList::requestDeactiveAP(const QString & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< WirelessList *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WirelessList::requestWirelessScan()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void WirelessList::requestSetAppletVisible(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< WirelessList *>(this), &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
