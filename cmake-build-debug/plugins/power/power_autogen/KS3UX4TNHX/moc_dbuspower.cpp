/****************************************************************************
** Meta object code from reading C++ file 'dbuspower.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/power/dbus/dbuspower.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbuspower.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusPower_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusPower_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusPower_t qt_meta_stringdata_DBusPower = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DBusPower"
QT_MOC_LITERAL(1, 10, 16), // "OnBatteryChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 24), // "BatteryPercentageChanged"
QT_MOC_LITERAL(4, 53, 19), // "BatteryStateChanged"
QT_MOC_LITERAL(5, 73, 19), // "__propertyChanged__"
QT_MOC_LITERAL(6, 93, 12), // "QDBusMessage"
QT_MOC_LITERAL(7, 106, 3), // "msg"
QT_MOC_LITERAL(8, 110, 9), // "OnBattery"
QT_MOC_LITERAL(9, 120, 17), // "BatteryPercentage"
QT_MOC_LITERAL(10, 138, 20), // "BatteryPercentageMap"
QT_MOC_LITERAL(11, 159, 12), // "BatteryState"
QT_MOC_LITERAL(12, 172, 15) // "BatteryStateMap"

    },
    "DBusPower\0OnBatteryChanged\0\0"
    "BatteryPercentageChanged\0BatteryStateChanged\0"
    "__propertyChanged__\0QDBusMessage\0msg\0"
    "OnBattery\0BatteryPercentage\0"
    "BatteryPercentageMap\0BatteryState\0"
    "BatteryStateMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusPower[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495001,
       9, 0x80000000 | 10, 0x00495009,
      11, 0x80000000 | 12, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void DBusPower::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusPower *_t = static_cast<DBusPower *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBatteryChanged(); break;
        case 1: _t->BatteryPercentageChanged(); break;
        case 2: _t->BatteryStateChanged(); break;
        case 3: _t->__propertyChanged__((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (DBusPower::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusPower::OnBatteryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DBusPower::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusPower::BatteryPercentageChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DBusPower::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusPower::BatteryStateChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BatteryPercentageMap >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BatteryStateMap >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DBusPower *_t = static_cast<DBusPower *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->onBattery(); break;
        case 1: *reinterpret_cast< BatteryPercentageMap*>(_v) = _t->batteryPercentage(); break;
        case 2: *reinterpret_cast< BatteryStateMap*>(_v) = _t->batteryState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DBusPower::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusPower.data,
      qt_meta_data_DBusPower,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusPower::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusPower::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusPower.stringdata0))
        return static_cast<void*>(const_cast< DBusPower*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusPower::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
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
void DBusPower::OnBatteryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DBusPower::BatteryPercentageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DBusPower::BatteryStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
