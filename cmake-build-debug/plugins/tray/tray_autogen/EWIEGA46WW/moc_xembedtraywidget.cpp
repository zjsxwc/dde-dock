/****************************************************************************
** Meta object code from reading C++ file 'xembedtraywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/tray/xembedtraywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xembedtraywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XEmbedTrayWidget_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XEmbedTrayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XEmbedTrayWidget_t qt_meta_stringdata_XEmbedTrayWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "XEmbedTrayWidget"
QT_MOC_LITERAL(1, 17, 20), // "setX11PassMouseEvent"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "pass"
QT_MOC_LITERAL(4, 44, 14), // "setWindowOnTop"
QT_MOC_LITERAL(5, 59, 3), // "top"
QT_MOC_LITERAL(6, 63, 11) // "isBadWindow"

    },
    "XEmbedTrayWidget\0setX11PassMouseEvent\0"
    "\0pass\0setWindowOnTop\0top\0isBadWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XEmbedTrayWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Bool,

       0        // eod
};

void XEmbedTrayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XEmbedTrayWidget *_t = static_cast<XEmbedTrayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setX11PassMouseEvent((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->setWindowOnTop((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->isBadWindow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject XEmbedTrayWidget::staticMetaObject = {
    { &AbstractTrayWidget::staticMetaObject, qt_meta_stringdata_XEmbedTrayWidget.data,
      qt_meta_data_XEmbedTrayWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XEmbedTrayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XEmbedTrayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XEmbedTrayWidget.stringdata0))
        return static_cast<void*>(const_cast< XEmbedTrayWidget*>(this));
    return AbstractTrayWidget::qt_metacast(_clname);
}

int XEmbedTrayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTrayWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
