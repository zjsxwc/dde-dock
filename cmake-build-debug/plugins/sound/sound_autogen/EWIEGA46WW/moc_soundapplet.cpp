/****************************************************************************
** Meta object code from reading C++ file 'soundapplet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/sound/soundapplet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundapplet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SoundApplet_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundApplet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundApplet_t qt_meta_stringdata_SoundApplet = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SoundApplet"
QT_MOC_LITERAL(1, 12, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 18), // "defaultSinkChanged"
QT_MOC_LITERAL(5, 52, 9), // "DBusSink*"
QT_MOC_LITERAL(6, 62, 4), // "sink"
QT_MOC_LITERAL(7, 67, 15), // "onVolumeChanged"
QT_MOC_LITERAL(8, 83, 24), // "volumeSliderValueChanged"
QT_MOC_LITERAL(9, 108, 17), // "sinkInputsChanged"
QT_MOC_LITERAL(10, 126, 10), // "toggleMute"
QT_MOC_LITERAL(11, 137, 17) // "onPlaySoundEffect"

    },
    "SoundApplet\0volumeChanged\0\0value\0"
    "defaultSinkChanged\0DBusSink*\0sink\0"
    "onVolumeChanged\0volumeSliderValueChanged\0"
    "sinkInputsChanged\0toggleMute\0"
    "onPlaySoundEffect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundApplet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SoundApplet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoundApplet *_t = static_cast<SoundApplet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->volumeChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->defaultSinkChanged((*reinterpret_cast< DBusSink*(*)>(_a[1]))); break;
        case 2: _t->defaultSinkChanged(); break;
        case 3: _t->onVolumeChanged(); break;
        case 4: _t->volumeSliderValueChanged(); break;
        case 5: _t->sinkInputsChanged(); break;
        case 6: _t->toggleMute(); break;
        case 7: _t->onPlaySoundEffect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DBusSink* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SoundApplet::*_t)(const int ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundApplet::volumeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SoundApplet::*_t)(DBusSink * ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundApplet::defaultSinkChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SoundApplet::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_SoundApplet.data,
      qt_meta_data_SoundApplet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SoundApplet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundApplet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SoundApplet.stringdata0))
        return static_cast<void*>(const_cast< SoundApplet*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int SoundApplet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void SoundApplet::volumeChanged(const int _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< SoundApplet *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SoundApplet::defaultSinkChanged(DBusSink * _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< SoundApplet *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
