/****************************************************************************
** Meta object code from reading C++ file 'dbustraymanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/tray/dbus/dbustraymanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbustraymanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusTrayManager_t {
    QByteArrayData data[22];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusTrayManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusTrayManager_t qt_meta_stringdata_DBusTrayManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DBusTrayManager"
QT_MOC_LITERAL(1, 16, 5), // "Added"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "in0"
QT_MOC_LITERAL(4, 27, 7), // "Changed"
QT_MOC_LITERAL(5, 35, 6), // "Inited"
QT_MOC_LITERAL(6, 42, 7), // "Removed"
QT_MOC_LITERAL(7, 50, 16), // "TrayIconsChanged"
QT_MOC_LITERAL(8, 67, 19), // "__propertyChanged__"
QT_MOC_LITERAL(9, 87, 12), // "QDBusMessage"
QT_MOC_LITERAL(10, 100, 3), // "msg"
QT_MOC_LITERAL(11, 104, 18), // "EnableNotification"
QT_MOC_LITERAL(12, 123, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(13, 143, 3), // "in1"
QT_MOC_LITERAL(14, 147, 7), // "GetName"
QT_MOC_LITERAL(15, 155, 26), // "QDBusPendingReply<QString>"
QT_MOC_LITERAL(16, 182, 6), // "Manage"
QT_MOC_LITERAL(17, 189, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(18, 213, 12), // "RetryManager"
QT_MOC_LITERAL(19, 226, 8), // "Unmanage"
QT_MOC_LITERAL(20, 235, 9), // "TrayIcons"
QT_MOC_LITERAL(21, 245, 8) // "TrayList"

    },
    "DBusTrayManager\0Added\0\0in0\0Changed\0"
    "Inited\0Removed\0TrayIconsChanged\0"
    "__propertyChanged__\0QDBusMessage\0msg\0"
    "EnableNotification\0QDBusPendingReply<>\0"
    "in1\0GetName\0QDBusPendingReply<QString>\0"
    "Manage\0QDBusPendingReply<bool>\0"
    "RetryManager\0Unmanage\0TrayIcons\0"
    "TrayList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusTrayManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    0,   75,    2, 0x06 /* Public */,
       6,    1,   76,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   80,    2, 0x08 /* Private */,
      11,    2,   83,    2, 0x0a /* Public */,
      14,    1,   88,    2, 0x0a /* Public */,
      16,    0,   91,    2, 0x0a /* Public */,
      18,    0,   92,    2, 0x0a /* Public */,
      19,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 12, QMetaType::UInt, QMetaType::Bool,    3,   13,
    0x80000000 | 15, QMetaType::UInt,    3,
    0x80000000 | 17,
    0x80000000 | 12,
    0x80000000 | 17,

 // properties: name, type, flags
      20, 0x80000000 | 21, 0x00495009,

 // properties: notify_signal_id
       4,

       0        // eod
};

void DBusTrayManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusTrayManager *_t = static_cast<DBusTrayManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Added((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->Inited(); break;
        case 3: _t->Removed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->TrayIconsChanged(); break;
        case 5: _t->__propertyChanged__((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 6: { QDBusPendingReply<> _r = _t->EnableNotification((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<QString> _r = _t->GetName((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<bool> _r = _t->Manage();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 9: { QDBusPendingReply<> _r = _t->RetryManager();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<bool> _r = _t->Unmanage();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
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
            typedef void (DBusTrayManager::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusTrayManager::Added)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DBusTrayManager::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusTrayManager::Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DBusTrayManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusTrayManager::Inited)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DBusTrayManager::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusTrayManager::Removed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DBusTrayManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusTrayManager::TrayIconsChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DBusTrayManager *_t = static_cast<DBusTrayManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TrayList*>(_v) = _t->trayIcons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DBusTrayManager::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusTrayManager.data,
      qt_meta_data_DBusTrayManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusTrayManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusTrayManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusTrayManager.stringdata0))
        return static_cast<void*>(const_cast< DBusTrayManager*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusTrayManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DBusTrayManager::Added(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusTrayManager::Changed(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DBusTrayManager::Inited()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DBusTrayManager::Removed(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DBusTrayManager::TrayIconsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
