/****************************************************************************
** Meta object code from reading C++ file 'sounditem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/sound/sounditem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sounditem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SoundItem_t {
    QByteArrayData data[8];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundItem_t qt_meta_stringdata_SoundItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SoundItem"
QT_MOC_LITERAL(1, 10, 18), // "requestContextMenu"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "refreshTips"
QT_MOC_LITERAL(4, 42, 5), // "force"
QT_MOC_LITERAL(5, 48, 11), // "sinkChanged"
QT_MOC_LITERAL(6, 60, 9), // "DBusSink*"
QT_MOC_LITERAL(7, 70, 4) // "sink"

    },
    "SoundItem\0requestContextMenu\0\0refreshTips\0"
    "force\0sinkChanged\0DBusSink*\0sink"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       3,    0,   38,    2, 0x28 /* Private | MethodCloned */,
       5,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SoundItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoundItem *_t = static_cast<SoundItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestContextMenu(); break;
        case 1: _t->refreshTips((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->refreshTips(); break;
        case 3: _t->sinkChanged((*reinterpret_cast< DBusSink*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (SoundItem::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundItem::requestContextMenu)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SoundItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SoundItem.data,
      qt_meta_data_SoundItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SoundItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SoundItem.stringdata0))
        return static_cast<void*>(const_cast< SoundItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int SoundItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void SoundItem::requestContextMenu()const
{
    QMetaObject::activate(const_cast< SoundItem *>(this), &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
