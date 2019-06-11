/****************************************************************************
** Meta object code from reading C++ file 'indicatortraywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/tray/indicatortraywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indicatortraywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IndicatorTrayWidget_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IndicatorTrayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IndicatorTrayWidget_t qt_meta_stringdata_IndicatorTrayWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "IndicatorTrayWidget"
QT_MOC_LITERAL(1, 20, 7), // "clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "uint8_t"
QT_MOC_LITERAL(4, 37, 13), // "setPixmapData"
QT_MOC_LITERAL(5, 51, 4), // "data"
QT_MOC_LITERAL(6, 56, 13), // "setPixmapPath"
QT_MOC_LITERAL(7, 70, 4), // "text"
QT_MOC_LITERAL(8, 75, 7) // "setText"

    },
    "IndicatorTrayWidget\0clicked\0\0uint8_t\0"
    "setPixmapData\0data\0setPixmapPath\0text\0"
    "setText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IndicatorTrayWidget[] = {

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
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x4a /* Public | isScriptable */,
       6,    1,   44,    2, 0x4a /* Public | isScriptable */,
       8,    1,   47,    2, 0x4a /* Public | isScriptable */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void IndicatorTrayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IndicatorTrayWidget *_t = static_cast<IndicatorTrayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->setPixmapData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->setPixmapPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IndicatorTrayWidget::*_t)(uint8_t , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IndicatorTrayWidget::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject IndicatorTrayWidget::staticMetaObject = {
    { &AbstractTrayWidget::staticMetaObject, qt_meta_stringdata_IndicatorTrayWidget.data,
      qt_meta_data_IndicatorTrayWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IndicatorTrayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IndicatorTrayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IndicatorTrayWidget.stringdata0))
        return static_cast<void*>(const_cast< IndicatorTrayWidget*>(this));
    return AbstractTrayWidget::qt_metacast(_clname);
}

int IndicatorTrayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTrayWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void IndicatorTrayWidget::clicked(uint8_t _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
