/****************************************************************************
** Meta object code from reading C++ file 'dbussinkinput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/sound/dbus/dbussinkinput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbussinkinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusSinkInput_t {
    QByteArrayData data[35];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusSinkInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusSinkInput_t qt_meta_stringdata_DBusSinkInput = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DBusSinkInput"
QT_MOC_LITERAL(1, 14, 14), // "BalanceChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "FadeChanged"
QT_MOC_LITERAL(4, 42, 11), // "IconChanged"
QT_MOC_LITERAL(5, 54, 11), // "MuteChanged"
QT_MOC_LITERAL(6, 66, 11), // "NameChanged"
QT_MOC_LITERAL(7, 78, 21), // "SupportBalanceChanged"
QT_MOC_LITERAL(8, 100, 18), // "SupportFadeChanged"
QT_MOC_LITERAL(9, 119, 13), // "VolumeChanged"
QT_MOC_LITERAL(10, 133, 19), // "__propertyChanged__"
QT_MOC_LITERAL(11, 153, 12), // "QDBusMessage"
QT_MOC_LITERAL(12, 166, 3), // "msg"
QT_MOC_LITERAL(13, 170, 10), // "SetBalance"
QT_MOC_LITERAL(14, 181, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(15, 201, 3), // "in0"
QT_MOC_LITERAL(16, 205, 3), // "in1"
QT_MOC_LITERAL(17, 209, 7), // "SetFade"
QT_MOC_LITERAL(18, 217, 7), // "SetMute"
QT_MOC_LITERAL(19, 225, 13), // "SetMuteQueued"
QT_MOC_LITERAL(20, 239, 9), // "SetVolume"
QT_MOC_LITERAL(21, 249, 6), // "volume"
QT_MOC_LITERAL(22, 256, 8), // "feedBack"
QT_MOC_LITERAL(23, 265, 15), // "SetVolumeQueued"
QT_MOC_LITERAL(24, 281, 21), // "onPendingCallFinished"
QT_MOC_LITERAL(25, 303, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(26, 328, 1), // "w"
QT_MOC_LITERAL(27, 330, 7), // "Balance"
QT_MOC_LITERAL(28, 338, 4), // "Fade"
QT_MOC_LITERAL(29, 343, 4), // "Icon"
QT_MOC_LITERAL(30, 348, 4), // "Mute"
QT_MOC_LITERAL(31, 353, 4), // "Name"
QT_MOC_LITERAL(32, 358, 14), // "SupportBalance"
QT_MOC_LITERAL(33, 373, 11), // "SupportFade"
QT_MOC_LITERAL(34, 385, 6) // "Volume"

    },
    "DBusSinkInput\0BalanceChanged\0\0FadeChanged\0"
    "IconChanged\0MuteChanged\0NameChanged\0"
    "SupportBalanceChanged\0SupportFadeChanged\0"
    "VolumeChanged\0__propertyChanged__\0"
    "QDBusMessage\0msg\0SetBalance\0"
    "QDBusPendingReply<>\0in0\0in1\0SetFade\0"
    "SetMute\0SetMuteQueued\0SetVolume\0volume\0"
    "feedBack\0SetVolumeQueued\0onPendingCallFinished\0"
    "QDBusPendingCallWatcher*\0w\0Balance\0"
    "Fade\0Icon\0Mute\0Name\0SupportBalance\0"
    "SupportFade\0Volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusSinkInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       8,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,
       9,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  102,    2, 0x08 /* Private */,
      13,    2,  105,    2, 0x0a /* Public */,
      17,    1,  110,    2, 0x0a /* Public */,
      18,    1,  113,    2, 0x0a /* Public */,
      19,    1,  116,    2, 0x0a /* Public */,
      20,    2,  119,    2, 0x0a /* Public */,
      23,    2,  124,    2, 0x0a /* Public */,
      24,    1,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    0x80000000 | 14, QMetaType::Double, QMetaType::Bool,   15,   16,
    0x80000000 | 14, QMetaType::Double,   15,
    0x80000000 | 14, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    0x80000000 | 14, QMetaType::Double, QMetaType::Bool,   21,   22,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   21,   22,
    QMetaType::Void, 0x80000000 | 25,   26,

 // properties: name, type, flags
      27, QMetaType::Double, 0x00495001,
      28, QMetaType::Double, 0x00495001,
      29, QMetaType::QString, 0x00495001,
      30, QMetaType::Bool, 0x00495001,
      31, QMetaType::QString, 0x00495001,
      32, QMetaType::Bool, 0x00495001,
      33, QMetaType::Bool, 0x00495001,
      34, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void DBusSinkInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusSinkInput *_t = static_cast<DBusSinkInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BalanceChanged(); break;
        case 1: _t->FadeChanged(); break;
        case 2: _t->IconChanged(); break;
        case 3: _t->MuteChanged(); break;
        case 4: _t->NameChanged(); break;
        case 5: _t->SupportBalanceChanged(); break;
        case 6: _t->SupportFadeChanged(); break;
        case 7: _t->VolumeChanged(); break;
        case 8: _t->__propertyChanged__((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 9: { QDBusPendingReply<> _r = _t->SetBalance((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<> _r = _t->SetFade((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<> _r = _t->SetMute((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 12: _t->SetMuteQueued((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: { QDBusPendingReply<> _r = _t->SetVolume((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 14: _t->SetVolumeQueued((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->onPendingCallFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 15:
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
            typedef void (DBusSinkInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSinkInput::BalanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DBusSinkInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSinkInput::FadeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DBusSinkInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSinkInput::IconChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DBusSinkInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSinkInput::MuteChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DBusSinkInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSinkInput::NameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DBusSinkInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSinkInput::SupportBalanceChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DBusSinkInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSinkInput::SupportFadeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DBusSinkInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusSinkInput::VolumeChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DBusSinkInput *_t = static_cast<DBusSinkInput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->balance(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->fade(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->icon(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->mute(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->supportBalance(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->supportFade(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DBusSinkInput::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusSinkInput.data,
      qt_meta_data_DBusSinkInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusSinkInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusSinkInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusSinkInput.stringdata0))
        return static_cast<void*>(const_cast< DBusSinkInput*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusSinkInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DBusSinkInput::BalanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DBusSinkInput::FadeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DBusSinkInput::IconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DBusSinkInput::MuteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DBusSinkInput::NameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void DBusSinkInput::SupportBalanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void DBusSinkInput::SupportFadeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void DBusSinkInput::VolumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
