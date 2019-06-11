/****************************************************************************
** Meta object code from reading C++ file 'popupcontrolwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/trash/popupcontrolwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'popupcontrolwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PopupControlWidget_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PopupControlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PopupControlWidget_t qt_meta_stringdata_PopupControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PopupControlWidget"
QT_MOC_LITERAL(1, 19, 12), // "emptyChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "empty"
QT_MOC_LITERAL(4, 39, 15), // "openTrashFloder"
QT_MOC_LITERAL(5, 55, 16), // "clearTrashFloder"
QT_MOC_LITERAL(6, 72, 18) // "trashStatusChanged"

    },
    "PopupControlWidget\0emptyChanged\0\0empty\0"
    "openTrashFloder\0clearTrashFloder\0"
    "trashStatusChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PopupControlWidget[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PopupControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PopupControlWidget *_t = static_cast<PopupControlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emptyChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->openTrashFloder(); break;
        case 2: _t->clearTrashFloder(); break;
        case 3: _t->trashStatusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PopupControlWidget::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PopupControlWidget::emptyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PopupControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PopupControlWidget.data,
      qt_meta_data_PopupControlWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PopupControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PopupControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PopupControlWidget.stringdata0))
        return static_cast<void*>(const_cast< PopupControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PopupControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PopupControlWidget::emptyChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< PopupControlWidget *>(this), &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
