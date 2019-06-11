/****************************************************************************
** Meta object code from reading C++ file 'dbusmenumanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/dbus/dbusmenumanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusmenumanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusMenuManager_t {
    QByteArrayData data[7];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusMenuManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusMenuManager_t qt_meta_stringdata_DBusMenuManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DBusMenuManager"
QT_MOC_LITERAL(1, 16, 12), // "RegisterMenu"
QT_MOC_LITERAL(2, 29, 34), // "QDBusPendingReply<QDBusObject..."
QT_MOC_LITERAL(3, 64, 0), // ""
QT_MOC_LITERAL(4, 65, 14), // "UnregisterMenu"
QT_MOC_LITERAL(5, 80, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(6, 100, 14) // "menuObjectPath"

    },
    "DBusMenuManager\0RegisterMenu\0"
    "QDBusPendingReply<QDBusObjectPath>\0\0"
    "UnregisterMenu\0QDBusPendingReply<>\0"
    "menuObjectPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusMenuManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    3, 0x0a /* Public */,
       4,    1,   25,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 5, QMetaType::QString,    6,

       0        // eod
};

void DBusMenuManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusMenuManager *_t = static_cast<DBusMenuManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QDBusPendingReply<QDBusObjectPath> _r = _t->RegisterMenu();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 1: { QDBusPendingReply<> _r = _t->UnregisterMenu((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject DBusMenuManager::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusMenuManager.data,
      qt_meta_data_DBusMenuManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusMenuManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusMenuManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusMenuManager.stringdata0))
        return static_cast<void*>(const_cast< DBusMenuManager*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusMenuManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
