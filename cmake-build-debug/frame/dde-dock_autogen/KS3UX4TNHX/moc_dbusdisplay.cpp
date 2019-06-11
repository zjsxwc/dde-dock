/****************************************************************************
** Meta object code from reading C++ file 'dbusdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/dbus/dbusdisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusDisplay_t {
    QByteArrayData data[46];
    char stringdata0[652];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusDisplay_t qt_meta_stringdata_DBusDisplay = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DBusDisplay"
QT_MOC_LITERAL(1, 12, 17), // "BrightnessChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "BuiltinOutputChanged"
QT_MOC_LITERAL(4, 52, 18), // "DisplayModeChanged"
QT_MOC_LITERAL(5, 71, 17), // "HasChangedChanged"
QT_MOC_LITERAL(6, 89, 15), // "MonitorsChanged"
QT_MOC_LITERAL(7, 105, 14), // "PrimaryChanged"
QT_MOC_LITERAL(8, 120, 18), // "PrimaryRectChanged"
QT_MOC_LITERAL(9, 139, 19), // "ScreenHeightChanged"
QT_MOC_LITERAL(10, 159, 18), // "ScreenWidthChanged"
QT_MOC_LITERAL(11, 178, 19), // "__propertyChanged__"
QT_MOC_LITERAL(12, 198, 12), // "QDBusMessage"
QT_MOC_LITERAL(13, 211, 3), // "msg"
QT_MOC_LITERAL(14, 215, 5), // "Apply"
QT_MOC_LITERAL(15, 221, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(16, 241, 20), // "AssociateTouchScreen"
QT_MOC_LITERAL(17, 262, 3), // "in0"
QT_MOC_LITERAL(18, 266, 3), // "in1"
QT_MOC_LITERAL(19, 270, 16), // "ChangeBrightness"
QT_MOC_LITERAL(20, 287, 11), // "JoinMonitor"
QT_MOC_LITERAL(21, 299, 20), // "QueryCurrentPlanName"
QT_MOC_LITERAL(22, 320, 26), // "QDBusPendingReply<QString>"
QT_MOC_LITERAL(23, 347, 18), // "QueryOutputFeature"
QT_MOC_LITERAL(24, 366, 22), // "QDBusPendingReply<int>"
QT_MOC_LITERAL(25, 389, 5), // "Reset"
QT_MOC_LITERAL(26, 395, 15), // "ResetBrightness"
QT_MOC_LITERAL(27, 411, 12), // "ResetChanges"
QT_MOC_LITERAL(28, 424, 11), // "SaveChanges"
QT_MOC_LITERAL(29, 436, 13), // "SetBrightness"
QT_MOC_LITERAL(30, 450, 10), // "SetPrimary"
QT_MOC_LITERAL(31, 461, 12), // "SplitMonitor"
QT_MOC_LITERAL(32, 474, 10), // "SwitchMode"
QT_MOC_LITERAL(33, 485, 10), // "Brightness"
QT_MOC_LITERAL(34, 496, 13), // "BrightnessMap"
QT_MOC_LITERAL(35, 510, 13), // "BuiltinOutput"
QT_MOC_LITERAL(36, 524, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(37, 540, 11), // "DisplayMode"
QT_MOC_LITERAL(38, 552, 10), // "HasChanged"
QT_MOC_LITERAL(39, 563, 8), // "Monitors"
QT_MOC_LITERAL(40, 572, 22), // "QList<QDBusObjectPath>"
QT_MOC_LITERAL(41, 595, 7), // "Primary"
QT_MOC_LITERAL(42, 603, 11), // "PrimaryRect"
QT_MOC_LITERAL(43, 615, 11), // "DisplayRect"
QT_MOC_LITERAL(44, 627, 12), // "ScreenHeight"
QT_MOC_LITERAL(45, 640, 11) // "ScreenWidth"

    },
    "DBusDisplay\0BrightnessChanged\0\0"
    "BuiltinOutputChanged\0DisplayModeChanged\0"
    "HasChangedChanged\0MonitorsChanged\0"
    "PrimaryChanged\0PrimaryRectChanged\0"
    "ScreenHeightChanged\0ScreenWidthChanged\0"
    "__propertyChanged__\0QDBusMessage\0msg\0"
    "Apply\0QDBusPendingReply<>\0"
    "AssociateTouchScreen\0in0\0in1\0"
    "ChangeBrightness\0JoinMonitor\0"
    "QueryCurrentPlanName\0QDBusPendingReply<QString>\0"
    "QueryOutputFeature\0QDBusPendingReply<int>\0"
    "Reset\0ResetBrightness\0ResetChanges\0"
    "SaveChanges\0SetBrightness\0SetPrimary\0"
    "SplitMonitor\0SwitchMode\0Brightness\0"
    "BrightnessMap\0BuiltinOutput\0QDBusObjectPath\0"
    "DisplayMode\0HasChanged\0Monitors\0"
    "QList<QDBusObjectPath>\0Primary\0"
    "PrimaryRect\0DisplayRect\0ScreenHeight\0"
    "ScreenWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       9,  188, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x06 /* Public */,
       3,    0,  135,    2, 0x06 /* Public */,
       4,    0,  136,    2, 0x06 /* Public */,
       5,    0,  137,    2, 0x06 /* Public */,
       6,    0,  138,    2, 0x06 /* Public */,
       7,    0,  139,    2, 0x06 /* Public */,
       8,    0,  140,    2, 0x06 /* Public */,
       9,    0,  141,    2, 0x06 /* Public */,
      10,    0,  142,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  143,    2, 0x08 /* Private */,
      14,    0,  146,    2, 0x0a /* Public */,
      16,    2,  147,    2, 0x0a /* Public */,
      19,    2,  152,    2, 0x0a /* Public */,
      20,    2,  157,    2, 0x0a /* Public */,
      21,    0,  162,    2, 0x0a /* Public */,
      23,    1,  163,    2, 0x0a /* Public */,
      25,    0,  166,    2, 0x0a /* Public */,
      26,    1,  167,    2, 0x0a /* Public */,
      27,    0,  170,    2, 0x0a /* Public */,
      28,    0,  171,    2, 0x0a /* Public */,
      29,    2,  172,    2, 0x0a /* Public */,
      30,    1,  177,    2, 0x0a /* Public */,
      31,    1,  180,    2, 0x0a /* Public */,
      32,    2,  183,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    0x80000000 | 15,
    0x80000000 | 15, QMetaType::QString, QMetaType::QString,   17,   18,
    0x80000000 | 15, QMetaType::QString, QMetaType::Double,   17,   18,
    0x80000000 | 15, QMetaType::QString, QMetaType::QString,   17,   18,
    0x80000000 | 22,
    0x80000000 | 24, QMetaType::QString,   17,
    0x80000000 | 15,
    0x80000000 | 15, QMetaType::QString,   17,
    0x80000000 | 15,
    0x80000000 | 15,
    0x80000000 | 15, QMetaType::QString, QMetaType::Double,   17,   18,
    0x80000000 | 15, QMetaType::QString,   17,
    0x80000000 | 15, QMetaType::QString,   17,
    0x80000000 | 15, QMetaType::Short, QMetaType::QString,   17,   18,

 // properties: name, type, flags
      33, 0x80000000 | 34, 0x00495009,
      35, 0x80000000 | 36, 0x00495009,
      37, QMetaType::Short, 0x00495001,
      38, QMetaType::Bool, 0x00495001,
      39, 0x80000000 | 40, 0x00495009,
      41, QMetaType::QString, 0x00495001,
      42, 0x80000000 | 43, 0x00495009,
      44, QMetaType::UShort, 0x00495001,
      45, QMetaType::UShort, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

       0        // eod
};

void DBusDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusDisplay *_t = static_cast<DBusDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BrightnessChanged(); break;
        case 1: _t->BuiltinOutputChanged(); break;
        case 2: _t->DisplayModeChanged(); break;
        case 3: _t->HasChangedChanged(); break;
        case 4: _t->MonitorsChanged(); break;
        case 5: _t->PrimaryChanged(); break;
        case 6: _t->PrimaryRectChanged(); break;
        case 7: _t->ScreenHeightChanged(); break;
        case 8: _t->ScreenWidthChanged(); break;
        case 9: _t->__propertyChanged__((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 10: { QDBusPendingReply<> _r = _t->Apply();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<> _r = _t->AssociateTouchScreen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<> _r = _t->ChangeBrightness((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<> _r = _t->JoinMonitor((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 14: { QDBusPendingReply<QString> _r = _t->QueryCurrentPlanName();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 15: { QDBusPendingReply<int> _r = _t->QueryOutputFeature((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<int>*>(_a[0]) = _r; }  break;
        case 16: { QDBusPendingReply<> _r = _t->Reset();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 17: { QDBusPendingReply<> _r = _t->ResetBrightness((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 18: { QDBusPendingReply<> _r = _t->ResetChanges();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 19: { QDBusPendingReply<> _r = _t->SaveChanges();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 20: { QDBusPendingReply<> _r = _t->SetBrightness((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 21: { QDBusPendingReply<> _r = _t->SetPrimary((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 22: { QDBusPendingReply<> _r = _t->SplitMonitor((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 23: { QDBusPendingReply<> _r = _t->SwitchMode((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
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
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::BrightnessChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::BuiltinOutputChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::DisplayModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::HasChangedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::MonitorsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::PrimaryChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::PrimaryRectChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::ScreenHeightChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DBusDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusDisplay::ScreenWidthChanged)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DisplayRect >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDBusObjectPath> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DBusDisplay *_t = static_cast<DBusDisplay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< BrightnessMap*>(_v) = _t->brightness(); break;
        case 1: *reinterpret_cast< QDBusObjectPath*>(_v) = _t->builtinOutput(); break;
        case 2: *reinterpret_cast< short*>(_v) = _t->displayMode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasChanged(); break;
        case 4: *reinterpret_cast< QList<QDBusObjectPath>*>(_v) = _t->monitors(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->primary(); break;
        case 6: *reinterpret_cast< DisplayRect*>(_v) = _t->primaryRawRect(); break;
        case 7: *reinterpret_cast< ushort*>(_v) = _t->screenRawHeight(); break;
        case 8: *reinterpret_cast< ushort*>(_v) = _t->screenRawWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DBusDisplay::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusDisplay.data,
      qt_meta_data_DBusDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusDisplay.stringdata0))
        return static_cast<void*>(const_cast< DBusDisplay*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DBusDisplay::BrightnessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DBusDisplay::BuiltinOutputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DBusDisplay::DisplayModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DBusDisplay::HasChangedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DBusDisplay::MonitorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void DBusDisplay::PrimaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void DBusDisplay::PrimaryRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void DBusDisplay::ScreenHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void DBusDisplay::ScreenWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
