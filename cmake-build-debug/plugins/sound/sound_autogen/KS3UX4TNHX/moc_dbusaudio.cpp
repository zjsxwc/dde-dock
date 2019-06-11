/****************************************************************************
** Meta object code from reading C++ file 'dbusaudio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/sound/dbus/dbusaudio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusaudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusAudio_t {
    QByteArrayData data[25];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusAudio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusAudio_t qt_meta_stringdata_DBusAudio = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DBusAudio"
QT_MOC_LITERAL(1, 10, 12), // "CardsChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "DefaultSinkChanged"
QT_MOC_LITERAL(4, 43, 20), // "DefaultSourceChanged"
QT_MOC_LITERAL(5, 64, 18), // "MaxUIVolumeChanged"
QT_MOC_LITERAL(6, 83, 17), // "SinkInputsChanged"
QT_MOC_LITERAL(7, 101, 19), // "__propertyChanged__"
QT_MOC_LITERAL(8, 121, 12), // "QDBusMessage"
QT_MOC_LITERAL(9, 134, 3), // "msg"
QT_MOC_LITERAL(10, 138, 5), // "Reset"
QT_MOC_LITERAL(11, 144, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(12, 164, 14), // "SetDefaultSink"
QT_MOC_LITERAL(13, 179, 3), // "in0"
QT_MOC_LITERAL(14, 183, 16), // "SetDefaultSource"
QT_MOC_LITERAL(15, 200, 7), // "SetPort"
QT_MOC_LITERAL(16, 208, 3), // "in1"
QT_MOC_LITERAL(17, 212, 3), // "in2"
QT_MOC_LITERAL(18, 216, 5), // "Cards"
QT_MOC_LITERAL(19, 222, 11), // "DefaultSink"
QT_MOC_LITERAL(20, 234, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(21, 250, 13), // "DefaultSource"
QT_MOC_LITERAL(22, 264, 11), // "MaxUIVolume"
QT_MOC_LITERAL(23, 276, 10), // "SinkInputs"
QT_MOC_LITERAL(24, 287, 22) // "QList<QDBusObjectPath>"

    },
    "DBusAudio\0CardsChanged\0\0DefaultSinkChanged\0"
    "DefaultSourceChanged\0MaxUIVolumeChanged\0"
    "SinkInputsChanged\0__propertyChanged__\0"
    "QDBusMessage\0msg\0Reset\0QDBusPendingReply<>\0"
    "SetDefaultSink\0in0\0SetDefaultSource\0"
    "SetPort\0in1\0in2\0Cards\0DefaultSink\0"
    "QDBusObjectPath\0DefaultSource\0MaxUIVolume\0"
    "SinkInputs\0QList<QDBusObjectPath>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusAudio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   69,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x0a /* Public */,
      12,    1,   73,    2, 0x0a /* Public */,
      14,    1,   76,    2, 0x0a /* Public */,
      15,    3,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    0x80000000 | 11,
    0x80000000 | 11, QMetaType::QString,   13,
    0x80000000 | 11, QMetaType::QString,   13,
    0x80000000 | 11, QMetaType::UInt, QMetaType::QString, QMetaType::Int,   13,   16,   17,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00495001,
      19, 0x80000000 | 20, 0x00495009,
      21, 0x80000000 | 20, 0x00495009,
      22, QMetaType::Double, 0x00495001,
      23, 0x80000000 | 24, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void DBusAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusAudio *_t = static_cast<DBusAudio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CardsChanged(); break;
        case 1: _t->DefaultSinkChanged(); break;
        case 2: _t->DefaultSourceChanged(); break;
        case 3: _t->MaxUIVolumeChanged(); break;
        case 4: _t->SinkInputsChanged(); break;
        case 5: _t->__propertyChanged__((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 6: { QDBusPendingReply<> _r = _t->Reset();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<> _r = _t->SetDefaultSink((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<> _r = _t->SetDefaultSource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 9: { QDBusPendingReply<> _r = _t->SetPort((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
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
            typedef void (DBusAudio::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusAudio::CardsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DBusAudio::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusAudio::DefaultSinkChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DBusAudio::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusAudio::DefaultSourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DBusAudio::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusAudio::MaxUIVolumeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DBusAudio::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusAudio::SinkInputsChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDBusObjectPath> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DBusAudio *_t = static_cast<DBusAudio *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->cards(); break;
        case 1: *reinterpret_cast< QDBusObjectPath*>(_v) = _t->defaultSink(); break;
        case 2: *reinterpret_cast< QDBusObjectPath*>(_v) = _t->defaultSource(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->maxUIVolume(); break;
        case 4: *reinterpret_cast< QList<QDBusObjectPath>*>(_v) = _t->sinkInputs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DBusAudio::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_DBusAudio.data,
      qt_meta_data_DBusAudio,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusAudio.stringdata0))
        return static_cast<void*>(const_cast< DBusAudio*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DBusAudio::CardsChanged()const
{
    QMetaObject::activate(const_cast< DBusAudio *>(this), &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DBusAudio::DefaultSinkChanged()const
{
    QMetaObject::activate(const_cast< DBusAudio *>(this), &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DBusAudio::DefaultSourceChanged()const
{
    QMetaObject::activate(const_cast< DBusAudio *>(this), &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DBusAudio::MaxUIVolumeChanged()const
{
    QMetaObject::activate(const_cast< DBusAudio *>(this), &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DBusAudio::SinkInputsChanged()const
{
    QMetaObject::activate(const_cast< DBusAudio *>(this), &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
