/****************************************************************************
** Meta object code from reading C++ file 'abstracttraywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/tray/abstracttraywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstracttraywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractTrayWidget_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractTrayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractTrayWidget_t qt_meta_stringdata_AbstractTrayWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AbstractTrayWidget"
QT_MOC_LITERAL(1, 19, 11), // "iconChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "clicked"
QT_MOC_LITERAL(4, 40, 13), // "needAttention"
QT_MOC_LITERAL(5, 54, 21), // "requestWindowAutoHide"
QT_MOC_LITERAL(6, 76, 8), // "autoHide"
QT_MOC_LITERAL(7, 85, 27) // "requestRefershWindowVisible"

    },
    "AbstractTrayWidget\0iconChanged\0\0clicked\0"
    "needAttention\0requestWindowAutoHide\0"
    "autoHide\0requestRefershWindowVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractTrayWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    0,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void AbstractTrayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractTrayWidget *_t = static_cast<AbstractTrayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconChanged(); break;
        case 1: _t->clicked(); break;
        case 2: _t->needAttention(); break;
        case 3: _t->requestWindowAutoHide((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->requestRefershWindowVisible(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractTrayWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTrayWidget::iconChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractTrayWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTrayWidget::clicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractTrayWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTrayWidget::needAttention)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AbstractTrayWidget::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTrayWidget::requestWindowAutoHide)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AbstractTrayWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTrayWidget::requestRefershWindowVisible)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject AbstractTrayWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AbstractTrayWidget.data,
      qt_meta_data_AbstractTrayWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractTrayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractTrayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractTrayWidget.stringdata0))
        return static_cast<void*>(const_cast< AbstractTrayWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AbstractTrayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AbstractTrayWidget::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AbstractTrayWidget::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AbstractTrayWidget::needAttention()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void AbstractTrayWidget::requestWindowAutoHide(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AbstractTrayWidget::requestRefershWindowVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
