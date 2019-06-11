/****************************************************************************
** Meta object code from reading C++ file 'dbusclientmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/dbus/dbusclientmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusclientmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusClientManager_t {
    QByteArrayData data[13];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusClientManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusClientManager_t qt_meta_stringdata_DBusClientManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DBusClientManager"
QT_MOC_LITERAL(1, 18, 19), // "ActiveWindowChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "activeWinId"
QT_MOC_LITERAL(4, 51, 19), // "__propertyChanged__"
QT_MOC_LITERAL(5, 71, 12), // "QDBusMessage"
QT_MOC_LITERAL(6, 84, 3), // "msg"
QT_MOC_LITERAL(7, 88, 14), // "ActivateWindow"
QT_MOC_LITERAL(8, 103, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(9, 127, 3), // "in0"
QT_MOC_LITERAL(10, 131, 11), // "CloseWindow"
QT_MOC_LITERAL(11, 143, 19), // "CurrentActiveWindow"
QT_MOC_LITERAL(12, 163, 23) // "QDBusPendingReply<uint>"

    },
    "DBusClientManager\0ActiveWindowChanged\0"
    "\0activeWinId\0__propertyChanged__\0"
    "QDBusMessage\0msg\0ActivateWindow\0"
    "QDBusPendingReply<bool>\0in0\0CloseWindow\0"
    "CurrentActiveWindow\0QDBusPendingReply<uint>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusClientManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x0a /* Public */,
      10,    1,   48,    2, 0x0a /* Public */,
      11,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 8, QMetaType::UInt,    9,
    0x80000000 | 8, QMetaType::UInt,    9,
    0x80000000 | 12,

       0        // eod
};

void DBusClientManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusClientManager *_t = static_cast<DBusClientManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ActiveWindowChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->__propertyChanged__((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 2: { QDBusPendingReply<bool> _r = _t->ActivateWindow((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<bool> _r = _t->CloseWindow((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<uint> _r = _t->CurrentActiveWindow();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DBusClientManager::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusClientManager::ActiveWindowChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DBusClientManager::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusClientManager.data,
      qt_meta_data_DBusClientManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusClientManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusClientManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusClientManager.stringdata0))
        return static_cast<void*>(const_cast< DBusClientManager*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusClientManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DBusClientManager::ActiveWindowChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
