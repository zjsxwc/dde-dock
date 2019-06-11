/****************************************************************************
** Meta object code from reading C++ file 'dbusdockadaptors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/dbus/dbusdockadaptors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusdockadaptors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusDockAdaptors_t {
    QByteArrayData data[8];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusDockAdaptors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusDockAdaptors_t qt_meta_stringdata_DBusDockAdaptors = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DBusDockAdaptors"
QT_MOC_LITERAL(1, 17, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 33, 19), // "com.deepin.dde.Dock"
QT_MOC_LITERAL(3, 53, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 73, 213), // "  <interface name=\"com.deepi..."
QT_MOC_LITERAL(5, 270, 15), // "geometryChanged"
QT_MOC_LITERAL(6, 286, 0), // ""
QT_MOC_LITERAL(7, 287, 8) // "geometry"

    },
    "DBusDockAdaptors\0D-Bus Interface\0"
    "com.deepin.dde.Dock\0D-Bus Introspection\0"
    "  <interface name=\"com.deepin.dde.Dock\">\n    <property access=\"rea"
    "d\" type=\"(iiii)\" name=\"geometry\"/>\n    <signal name=\"geometryCh"
    "anged\"><arg name=\"geometry\" type=\"(iiii)\"/></signal>  </interface"
    ">\n\0"
    "geometryChanged\0\0geometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusDockAdaptors[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       1,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   23,    6, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    7,

 // properties: name, type, flags
       7, QMetaType::QRect, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void DBusDockAdaptors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusDockAdaptors *_t = static_cast<DBusDockAdaptors *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->geometryChanged((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DBusDockAdaptors::*_t)(QRect );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDockAdaptors::geometryChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DBusDockAdaptors *_t = static_cast<DBusDockAdaptors *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DBusDockAdaptors::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_DBusDockAdaptors.data,
      qt_meta_data_DBusDockAdaptors,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusDockAdaptors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusDockAdaptors::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusDockAdaptors.stringdata0))
        return static_cast<void*>(const_cast< DBusDockAdaptors*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int DBusDockAdaptors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void DBusDockAdaptors::geometryChanged(QRect _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
