/****************************************************************************
** Meta object code from reading C++ file 'dbussink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/sound/dbus/dbussink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbussink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusSink_t {
    QByteArrayData data[40];
    char stringdata0[482];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusSink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusSink_t qt_meta_stringdata_DBusSink = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DBusSink"
QT_MOC_LITERAL(1, 9, 14), // "BalanceChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "BaseVolumeChanged"
QT_MOC_LITERAL(4, 43, 18), // "DescriptionChanged"
QT_MOC_LITERAL(5, 62, 11), // "FadeChanged"
QT_MOC_LITERAL(6, 74, 11), // "MuteChanged"
QT_MOC_LITERAL(7, 86, 11), // "NameChanged"
QT_MOC_LITERAL(8, 98, 21), // "SupportBalanceChanged"
QT_MOC_LITERAL(9, 120, 18), // "SupportFadeChanged"
QT_MOC_LITERAL(10, 139, 13), // "VolumeChanged"
QT_MOC_LITERAL(11, 153, 19), // "__propertyChanged__"
QT_MOC_LITERAL(12, 173, 12), // "QDBusMessage"
QT_MOC_LITERAL(13, 186, 3), // "msg"
QT_MOC_LITERAL(14, 190, 8), // "GetMeter"
QT_MOC_LITERAL(15, 199, 34), // "QDBusPendingReply<QDBusObject..."
QT_MOC_LITERAL(16, 234, 10), // "SetBalance"
QT_MOC_LITERAL(17, 245, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(18, 265, 3), // "in0"
QT_MOC_LITERAL(19, 269, 3), // "in1"
QT_MOC_LITERAL(20, 273, 7), // "SetFade"
QT_MOC_LITERAL(21, 281, 7), // "SetMute"
QT_MOC_LITERAL(22, 289, 13), // "SetMuteQueued"
QT_MOC_LITERAL(23, 303, 7), // "SetPort"
QT_MOC_LITERAL(24, 311, 9), // "SetVolume"
QT_MOC_LITERAL(25, 321, 6), // "volume"
QT_MOC_LITERAL(26, 328, 8), // "feedBack"
QT_MOC_LITERAL(27, 337, 15), // "SetVolumeQueued"
QT_MOC_LITERAL(28, 353, 21), // "onPendingCallFinished"
QT_MOC_LITERAL(29, 375, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(30, 400, 1), // "w"
QT_MOC_LITERAL(31, 402, 7), // "Balance"
QT_MOC_LITERAL(32, 410, 10), // "BaseVolume"
QT_MOC_LITERAL(33, 421, 11), // "Description"
QT_MOC_LITERAL(34, 433, 4), // "Fade"
QT_MOC_LITERAL(35, 438, 4), // "Mute"
QT_MOC_LITERAL(36, 443, 4), // "Name"
QT_MOC_LITERAL(37, 448, 14), // "SupportBalance"
QT_MOC_LITERAL(38, 463, 11), // "SupportFade"
QT_MOC_LITERAL(39, 475, 6) // "Volume"

    },
    "DBusSink\0BalanceChanged\0\0BaseVolumeChanged\0"
    "DescriptionChanged\0FadeChanged\0"
    "MuteChanged\0NameChanged\0SupportBalanceChanged\0"
    "SupportFadeChanged\0VolumeChanged\0"
    "__propertyChanged__\0QDBusMessage\0msg\0"
    "GetMeter\0QDBusPendingReply<QDBusObjectPath>\0"
    "SetBalance\0QDBusPendingReply<>\0in0\0"
    "in1\0SetFade\0SetMute\0SetMuteQueued\0"
    "SetPort\0SetVolume\0volume\0feedBack\0"
    "SetVolumeQueued\0onPendingCallFinished\0"
    "QDBusPendingCallWatcher*\0w\0Balance\0"
    "BaseVolume\0Description\0Fade\0Mute\0Name\0"
    "SupportBalance\0SupportFade\0Volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusSink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       9,  152, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,
       8,    0,  115,    2, 0x06 /* Public */,
       9,    0,  116,    2, 0x06 /* Public */,
      10,    0,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  118,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x0a /* Public */,
      16,    2,  122,    2, 0x0a /* Public */,
      20,    1,  127,    2, 0x0a /* Public */,
      21,    1,  130,    2, 0x0a /* Public */,
      22,    1,  133,    2, 0x0a /* Public */,
      23,    1,  136,    2, 0x0a /* Public */,
      24,    2,  139,    2, 0x0a /* Public */,
      27,    2,  144,    2, 0x0a /* Public */,
      28,    1,  149,    2, 0x08 /* Private */,

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
    0x80000000 | 17, QMetaType::Double, QMetaType::Bool,   18,   19,
    0x80000000 | 17, QMetaType::Double,   18,
    0x80000000 | 17, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    0x80000000 | 17, QMetaType::QString,   18,
    0x80000000 | 17, QMetaType::Double, QMetaType::Bool,   25,   26,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   25,   26,
    QMetaType::Void, 0x80000000 | 29,   30,

 // properties: name, type, flags
      31, QMetaType::Double, 0x00495001,
      32, QMetaType::Double, 0x00495001,
      33, QMetaType::QString, 0x00495001,
      34, QMetaType::Double, 0x00495001,
      35, QMetaType::Bool, 0x00495001,
      36, QMetaType::QString, 0x00495001,
      37, QMetaType::Bool, 0x00495001,
      38, QMetaType::Bool, 0x00495001,
      39, QMetaType::Double, 0x00495001,

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

void DBusSink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusSink *_t = static_cast<DBusSink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BalanceChanged(); break;
        case 1: _t->BaseVolumeChanged(); break;
        case 2: _t->DescriptionChanged(); break;
        case 3: _t->FadeChanged(); break;
        case 4: _t->MuteChanged(); break;
        case 5: _t->NameChanged(); break;
        case 6: _t->SupportBalanceChanged(); break;
        case 7: _t->SupportFadeChanged(); break;
        case 8: _t->VolumeChanged(); break;
        case 9: _t->__propertyChanged__((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 10: { QDBusPendingReply<QDBusObjectPath> _r = _t->GetMeter();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<> _r = _t->SetBalance((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<> _r = _t->SetFade((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<> _r = _t->SetMute((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 14: _t->SetMuteQueued((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: { QDBusPendingReply<> _r = _t->SetPort((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 16: { QDBusPendingReply<> _r = _t->SetVolume((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 17: _t->SetVolumeQueued((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->onPendingCallFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
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
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::BalanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::BaseVolumeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::DescriptionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::FadeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::MuteChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::NameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::SupportBalanceChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::SupportFadeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DBusSink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSink::VolumeChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DBusSink *_t = static_cast<DBusSink *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->balance(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->baseVolume(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->fade(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->mute(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->supportBalance(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->supportFade(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DBusSink::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusSink.data,
      qt_meta_data_DBusSink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusSink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusSink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusSink.stringdata0))
        return static_cast<void*>(const_cast< DBusSink*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusSink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
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
void DBusSink::BalanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DBusSink::BaseVolumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DBusSink::DescriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DBusSink::FadeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DBusSink::MuteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void DBusSink::NameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void DBusSink::SupportBalanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void DBusSink::SupportFadeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void DBusSink::VolumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
