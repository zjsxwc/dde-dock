/****************************************************************************
** Meta object code from reading C++ file 'statusnotifierwatcher_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/dbus/sni/statusnotifierwatcher_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifierwatcher_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StatusNotifierWatcherInterface_t {
    QByteArrayData data[14];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusNotifierWatcherInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusNotifierWatcherInterface_t qt_meta_stringdata_StatusNotifierWatcherInterface = {
    {
QT_MOC_LITERAL(0, 0, 30), // "StatusNotifierWatcherInterface"
QT_MOC_LITERAL(1, 31, 28), // "StatusNotifierHostRegistered"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 30), // "StatusNotifierHostUnregistered"
QT_MOC_LITERAL(4, 92, 28), // "StatusNotifierItemRegistered"
QT_MOC_LITERAL(5, 121, 3), // "in0"
QT_MOC_LITERAL(6, 125, 30), // "StatusNotifierItemUnregistered"
QT_MOC_LITERAL(7, 156, 26), // "RegisterStatusNotifierHost"
QT_MOC_LITERAL(8, 183, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(9, 203, 7), // "service"
QT_MOC_LITERAL(10, 211, 26), // "RegisterStatusNotifierItem"
QT_MOC_LITERAL(11, 238, 30), // "IsStatusNotifierHostRegistered"
QT_MOC_LITERAL(12, 269, 15), // "ProtocolVersion"
QT_MOC_LITERAL(13, 285, 29) // "RegisteredStatusNotifierItems"

    },
    "StatusNotifierWatcherInterface\0"
    "StatusNotifierHostRegistered\0\0"
    "StatusNotifierHostUnregistered\0"
    "StatusNotifierItemRegistered\0in0\0"
    "StatusNotifierItemUnregistered\0"
    "RegisterStatusNotifierHost\0"
    "QDBusPendingReply<>\0service\0"
    "RegisterStatusNotifierItem\0"
    "IsStatusNotifierHostRegistered\0"
    "ProtocolVersion\0RegisteredStatusNotifierItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusNotifierWatcherInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   52,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    0x80000000 | 8, QMetaType::QString,    9,
    0x80000000 | 8, QMetaType::QString,    9,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00095001,
      12, QMetaType::Int, 0x00095001,
      13, QMetaType::QStringList, 0x00095001,

       0        // eod
};

void StatusNotifierWatcherInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StatusNotifierWatcherInterface *_t = static_cast<StatusNotifierWatcherInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StatusNotifierHostRegistered(); break;
        case 1: _t->StatusNotifierHostUnregistered(); break;
        case 2: _t->StatusNotifierItemRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->StatusNotifierItemUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { QDBusPendingReply<> _r = _t->RegisterStatusNotifierHost((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<> _r = _t->RegisterStatusNotifierItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StatusNotifierWatcherInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StatusNotifierWatcherInterface::StatusNotifierHostRegistered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StatusNotifierWatcherInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StatusNotifierWatcherInterface::StatusNotifierHostUnregistered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StatusNotifierWatcherInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StatusNotifierWatcherInterface::StatusNotifierItemRegistered)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (StatusNotifierWatcherInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StatusNotifierWatcherInterface::StatusNotifierItemUnregistered)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StatusNotifierWatcherInterface *_t = static_cast<StatusNotifierWatcherInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isStatusNotifierHostRegistered(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->protocolVersion(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->registeredStatusNotifierItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StatusNotifierWatcherInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_StatusNotifierWatcherInterface.data,
      qt_meta_data_StatusNotifierWatcherInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StatusNotifierWatcherInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifierWatcherInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StatusNotifierWatcherInterface.stringdata0))
        return static_cast<void*>(const_cast< StatusNotifierWatcherInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int StatusNotifierWatcherInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StatusNotifierWatcherInterface::StatusNotifierHostRegistered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StatusNotifierWatcherInterface::StatusNotifierHostUnregistered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void StatusNotifierWatcherInterface::StatusNotifierItemRegistered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StatusNotifierWatcherInterface::StatusNotifierItemUnregistered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
