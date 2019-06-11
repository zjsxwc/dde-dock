/****************************************************************************
** Meta object code from reading C++ file 'dbusmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../frame/dbus/dbusmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusMenu_t {
    QByteArrayData data[14];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusMenu_t qt_meta_stringdata_DBusMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DBusMenu"
QT_MOC_LITERAL(1, 9, 11), // "ItemInvoked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "itemId"
QT_MOC_LITERAL(4, 29, 7), // "checked"
QT_MOC_LITERAL(5, 37, 16), // "MenuUnregistered"
QT_MOC_LITERAL(6, 54, 15), // "SetItemActivity"
QT_MOC_LITERAL(7, 70, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(8, 90, 8), // "isActive"
QT_MOC_LITERAL(9, 99, 14), // "SetItemChecked"
QT_MOC_LITERAL(10, 114, 11), // "SetItemText"
QT_MOC_LITERAL(11, 126, 4), // "text"
QT_MOC_LITERAL(12, 131, 8), // "ShowMenu"
QT_MOC_LITERAL(13, 140, 15) // "menuJsonContent"

    },
    "DBusMenu\0ItemInvoked\0\0itemId\0checked\0"
    "MenuUnregistered\0SetItemActivity\0"
    "QDBusPendingReply<>\0isActive\0"
    "SetItemChecked\0SetItemText\0text\0"
    "ShowMenu\0menuJsonContent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   50,    2, 0x0a /* Public */,
       9,    2,   55,    2, 0x0a /* Public */,
      10,    2,   60,    2, 0x0a /* Public */,
      12,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 7, QMetaType::QString, QMetaType::Bool,    3,    8,
    0x80000000 | 7, QMetaType::QString, QMetaType::Bool,    3,    4,
    0x80000000 | 7, QMetaType::QString, QMetaType::QString,    3,   11,
    0x80000000 | 7, QMetaType::QString,   13,

       0        // eod
};

void DBusMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusMenu *_t = static_cast<DBusMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ItemInvoked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->MenuUnregistered(); break;
        case 2: { QDBusPendingReply<> _r = _t->SetItemActivity((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = _t->SetItemChecked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<> _r = _t->SetItemText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<> _r = _t->ShowMenu((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DBusMenu::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusMenu::ItemInvoked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DBusMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusMenu::MenuUnregistered)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DBusMenu::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusMenu.data,
      qt_meta_data_DBusMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusMenu.stringdata0))
        return static_cast<void*>(const_cast< DBusMenu*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void DBusMenu::ItemInvoked(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusMenu::MenuUnregistered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
