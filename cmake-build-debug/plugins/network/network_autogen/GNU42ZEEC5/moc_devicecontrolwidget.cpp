/****************************************************************************
** Meta object code from reading C++ file 'devicecontrolwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/network/item/applet/devicecontrolwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicecontrolwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeviceControlWidget_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceControlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceControlWidget_t qt_meta_stringdata_DeviceControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DeviceControlWidget"
QT_MOC_LITERAL(1, 20, 19), // "enableButtonToggled"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "enable"
QT_MOC_LITERAL(4, 48, 14), // "requestRefresh"
QT_MOC_LITERAL(5, 63, 14) // "refreshNetwork"

    },
    "DeviceControlWidget\0enableButtonToggled\0"
    "\0enable\0requestRefresh\0refreshNetwork"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceControlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DeviceControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceControlWidget *_t = static_cast<DeviceControlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableButtonToggled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->requestRefresh(); break;
        case 2: _t->refreshNetwork(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeviceControlWidget::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControlWidget::enableButtonToggled)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeviceControlWidget::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControlWidget::requestRefresh)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DeviceControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DeviceControlWidget.data,
      qt_meta_data_DeviceControlWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeviceControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceControlWidget.stringdata0))
        return static_cast<void*>(const_cast< DeviceControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DeviceControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DeviceControlWidget::enableButtonToggled(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DeviceControlWidget *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceControlWidget::requestRefresh()const
{
    QMetaObject::activate(const_cast< DeviceControlWidget *>(this), &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
