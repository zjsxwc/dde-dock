/****************************************************************************
** Meta object code from reading C++ file 'dbusadaptors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/keyboard-layout/dbusadaptors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusadaptors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusAdaptors_t {
    QByteArrayData data[20];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusAdaptors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusAdaptors_t qt_meta_stringdata_DBusAdaptors = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DBusAdaptors"
QT_MOC_LITERAL(1, 13, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 29, 23), // "com.deepin.dde.Keyboard"
QT_MOC_LITERAL(3, 53, 13), // "layoutChanged"
QT_MOC_LITERAL(4, 67, 0), // ""
QT_MOC_LITERAL(5, 68, 4), // "text"
QT_MOC_LITERAL(6, 73, 9), // "onClicked"
QT_MOC_LITERAL(7, 83, 6), // "button"
QT_MOC_LITERAL(8, 90, 1), // "x"
QT_MOC_LITERAL(9, 92, 1), // "y"
QT_MOC_LITERAL(10, 94, 22), // "onCurrentLayoutChanged"
QT_MOC_LITERAL(11, 117, 5), // "value"
QT_MOC_LITERAL(12, 123, 23), // "onUserLayoutListChanged"
QT_MOC_LITERAL(13, 147, 17), // "initAllLayoutList"
QT_MOC_LITERAL(14, 165, 11), // "refreshMenu"
QT_MOC_LITERAL(15, 177, 20), // "refreshMenuSelection"
QT_MOC_LITERAL(16, 198, 21), // "handleActionTriggered"
QT_MOC_LITERAL(17, 220, 8), // "QAction*"
QT_MOC_LITERAL(18, 229, 6), // "action"
QT_MOC_LITERAL(19, 236, 6) // "layout"

    },
    "DBusAdaptors\0D-Bus Interface\0"
    "com.deepin.dde.Keyboard\0layoutChanged\0"
    "\0text\0onClicked\0button\0x\0y\0"
    "onCurrentLayoutChanged\0value\0"
    "onUserLayoutListChanged\0initAllLayoutList\0"
    "refreshMenu\0refreshMenuSelection\0"
    "handleActionTriggered\0QAction*\0action\0"
    "layout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusAdaptors[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   56,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   59,    4, 0x0a /* Public */,
      10,    1,   66,    4, 0x08 /* Private */,
      12,    1,   69,    4, 0x08 /* Private */,
      13,    0,   72,    4, 0x08 /* Private */,
      14,    0,   73,    4, 0x08 /* Private */,
      15,    0,   74,    4, 0x08 /* Private */,
      16,    1,   75,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void DBusAdaptors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusAdaptors *_t = static_cast<DBusAdaptors *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->onCurrentLayoutChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onUserLayoutListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->initAllLayoutList(); break;
        case 5: _t->refreshMenu(); break;
        case 6: _t->refreshMenuSelection(); break;
        case 7: _t->handleActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DBusAdaptors::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusAdaptors::layoutChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DBusAdaptors *_t = static_cast<DBusAdaptors *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->layout(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DBusAdaptors::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_DBusAdaptors.data,
      qt_meta_data_DBusAdaptors,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusAdaptors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusAdaptors::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusAdaptors.stringdata0))
        return static_cast<void*>(const_cast< DBusAdaptors*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int DBusAdaptors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void DBusAdaptors::layoutChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
