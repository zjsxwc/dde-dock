/****************************************************************************
** Meta object code from reading C++ file 'abstractcontainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/tray/fashiontray/containers/abstractcontainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractContainer_t {
    QByteArrayData data[13];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractContainer_t qt_meta_stringdata_AbstractContainer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AbstractContainer"
QT_MOC_LITERAL(1, 18, 16), // "attentionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 25), // "FashionTrayWidgetWrapper*"
QT_MOC_LITERAL(4, 62, 7), // "wrapper"
QT_MOC_LITERAL(5, 70, 9), // "attention"
QT_MOC_LITERAL(6, 80, 22), // "requestDraggingWrapper"
QT_MOC_LITERAL(7, 103, 20), // "draggingStateChanged"
QT_MOC_LITERAL(8, 124, 8), // "dragging"
QT_MOC_LITERAL(9, 133, 26), // "onWrapperAttentionhChanged"
QT_MOC_LITERAL(10, 160, 18), // "onWrapperDragStart"
QT_MOC_LITERAL(11, 179, 17), // "onWrapperDragStop"
QT_MOC_LITERAL(12, 197, 32) // "onWrapperRequestSwapWithDragging"

    },
    "AbstractContainer\0attentionChanged\0\0"
    "FashionTrayWidgetWrapper*\0wrapper\0"
    "attention\0requestDraggingWrapper\0"
    "draggingStateChanged\0dragging\0"
    "onWrapperAttentionhChanged\0"
    "onWrapperDragStart\0onWrapperDragStop\0"
    "onWrapperRequestSwapWithDragging"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,
       7,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AbstractContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractContainer *_t = static_cast<AbstractContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attentionChanged((*reinterpret_cast< FashionTrayWidgetWrapper*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 1: _t->requestDraggingWrapper(); break;
        case 2: _t->draggingStateChanged((*reinterpret_cast< FashionTrayWidgetWrapper*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 3: _t->onWrapperAttentionhChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->onWrapperDragStart(); break;
        case 5: _t->onWrapperDragStop(); break;
        case 6: _t->onWrapperRequestSwapWithDragging(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FashionTrayWidgetWrapper* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FashionTrayWidgetWrapper* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractContainer::*_t)(FashionTrayWidgetWrapper * , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractContainer::attentionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractContainer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractContainer::requestDraggingWrapper)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractContainer::*_t)(FashionTrayWidgetWrapper * , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractContainer::draggingStateChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AbstractContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AbstractContainer.data,
      qt_meta_data_AbstractContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractContainer.stringdata0))
        return static_cast<void*>(const_cast< AbstractContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int AbstractContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AbstractContainer::attentionChanged(FashionTrayWidgetWrapper * _t1, const bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractContainer::requestDraggingWrapper()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AbstractContainer::draggingStateChanged(FashionTrayWidgetWrapper * _t1, const bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
