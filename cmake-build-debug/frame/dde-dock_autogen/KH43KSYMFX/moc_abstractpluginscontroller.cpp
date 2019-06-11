/****************************************************************************
** Meta object code from reading C++ file 'abstractpluginscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/util/abstractpluginscontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractpluginscontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractPluginsController_t {
    QByteArrayData data[13];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractPluginsController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractPluginsController_t qt_meta_stringdata_AbstractPluginsController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AbstractPluginsController"
QT_MOC_LITERAL(1, 26, 11), // "startLoader"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "PluginLoader*"
QT_MOC_LITERAL(4, 53, 6), // "loader"
QT_MOC_LITERAL(5, 60, 18), // "displayModeChanged"
QT_MOC_LITERAL(6, 79, 15), // "positionChanged"
QT_MOC_LITERAL(7, 95, 10), // "loadPlugin"
QT_MOC_LITERAL(8, 106, 10), // "pluginFile"
QT_MOC_LITERAL(9, 117, 10), // "initPlugin"
QT_MOC_LITERAL(10, 128, 21), // "PluginsItemInterface*"
QT_MOC_LITERAL(11, 150, 9), // "interface"
QT_MOC_LITERAL(12, 160, 21) // "refreshPluginSettings"

    },
    "AbstractPluginsController\0startLoader\0"
    "\0PluginLoader*\0loader\0displayModeChanged\0"
    "positionChanged\0loadPlugin\0pluginFile\0"
    "initPlugin\0PluginsItemInterface*\0"
    "interface\0refreshPluginSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractPluginsController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,
       9,    1,   52,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void AbstractPluginsController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractPluginsController *_t = static_cast<AbstractPluginsController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startLoader((*reinterpret_cast< PluginLoader*(*)>(_a[1]))); break;
        case 1: _t->displayModeChanged(); break;
        case 2: _t->positionChanged(); break;
        case 3: _t->loadPlugin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->initPlugin((*reinterpret_cast< PluginsItemInterface*(*)>(_a[1]))); break;
        case 5: _t->refreshPluginSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PluginLoader* >(); break;
            }
            break;
        }
    }
}

const QMetaObject AbstractPluginsController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractPluginsController.data,
      qt_meta_data_AbstractPluginsController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractPluginsController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractPluginsController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractPluginsController.stringdata0))
        return static_cast<void*>(const_cast< AbstractPluginsController*>(this));
    if (!strcmp(_clname, "PluginProxyInterface"))
        return static_cast< PluginProxyInterface*>(const_cast< AbstractPluginsController*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractPluginsController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
