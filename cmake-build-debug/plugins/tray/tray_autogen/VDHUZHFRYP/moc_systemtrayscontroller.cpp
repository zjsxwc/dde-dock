/****************************************************************************
** Meta object code from reading C++ file 'systemtrayscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/tray/system-trays/systemtrayscontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemtrayscontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SystemTraysController_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemTraysController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemTraysController_t qt_meta_stringdata_SystemTraysController = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SystemTraysController"
QT_MOC_LITERAL(1, 22, 15), // "pluginItemAdded"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "itemKey"
QT_MOC_LITERAL(4, 47, 19), // "AbstractTrayWidget*"
QT_MOC_LITERAL(5, 67, 10), // "pluginItem"
QT_MOC_LITERAL(6, 78, 17), // "pluginItemRemoved"
QT_MOC_LITERAL(7, 96, 17) // "pluginItemUpdated"

    },
    "SystemTraysController\0pluginItemAdded\0"
    "\0itemKey\0AbstractTrayWidget*\0pluginItem\0"
    "pluginItemRemoved\0pluginItemUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemTraysController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    2,   34,    2, 0x06 /* Public */,
       7,    2,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void SystemTraysController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemTraysController *_t = static_cast<SystemTraysController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginItemAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AbstractTrayWidget*(*)>(_a[2]))); break;
        case 1: _t->pluginItemRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AbstractTrayWidget*(*)>(_a[2]))); break;
        case 2: _t->pluginItemUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AbstractTrayWidget*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractTrayWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractTrayWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractTrayWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SystemTraysController::*_t)(const QString & , AbstractTrayWidget * ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemTraysController::pluginItemAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SystemTraysController::*_t)(const QString & , AbstractTrayWidget * ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemTraysController::pluginItemRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SystemTraysController::*_t)(const QString & , AbstractTrayWidget * ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemTraysController::pluginItemUpdated)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SystemTraysController::staticMetaObject = {
    { &AbstractPluginsController::staticMetaObject, qt_meta_stringdata_SystemTraysController.data,
      qt_meta_data_SystemTraysController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SystemTraysController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTraysController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTraysController.stringdata0))
        return static_cast<void*>(const_cast< SystemTraysController*>(this));
    return AbstractPluginsController::qt_metacast(_clname);
}

int SystemTraysController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPluginsController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SystemTraysController::pluginItemAdded(const QString & _t1, AbstractTrayWidget * _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< SystemTraysController *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemTraysController::pluginItemRemoved(const QString & _t1, AbstractTrayWidget * _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< SystemTraysController *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemTraysController::pluginItemUpdated(const QString & _t1, AbstractTrayWidget * _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< SystemTraysController *>(this), &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
