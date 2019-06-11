/****************************************************************************
** Meta object code from reading C++ file 'fashiontrayitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/tray/fashiontray/fashiontrayitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fashiontrayitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FashionTrayItem_t {
    QByteArrayData data[20];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FashionTrayItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FashionTrayItem_t qt_meta_stringdata_FashionTrayItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FashionTrayItem"
QT_MOC_LITERAL(1, 16, 15), // "onExpandChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "expand"
QT_MOC_LITERAL(4, 40, 18), // "setSuggestIconSize"
QT_MOC_LITERAL(5, 59, 4), // "size"
QT_MOC_LITERAL(6, 64, 20), // "setRightSplitVisible"
QT_MOC_LITERAL(7, 85, 7), // "visible"
QT_MOC_LITERAL(8, 93, 23), // "onPluginSettingsChanged"
QT_MOC_LITERAL(9, 117, 25), // "onWrapperAttentionChanged"
QT_MOC_LITERAL(10, 143, 25), // "FashionTrayWidgetWrapper*"
QT_MOC_LITERAL(11, 169, 7), // "wrapper"
QT_MOC_LITERAL(12, 177, 9), // "attention"
QT_MOC_LITERAL(13, 187, 31), // "attentionWrapperToNormalWrapper"
QT_MOC_LITERAL(14, 219, 31), // "normalWrapperToAttentionWrapper"
QT_MOC_LITERAL(15, 251, 13), // "requestResize"
QT_MOC_LITERAL(16, 265, 28), // "refreshHoldContainerPosition"
QT_MOC_LITERAL(17, 294, 24), // "onRequireDraggingWrapper"
QT_MOC_LITERAL(18, 319, 31), // "onContainerDraggingStateChanged"
QT_MOC_LITERAL(19, 351, 8) // "dragging"

    },
    "FashionTrayItem\0onExpandChanged\0\0"
    "expand\0setSuggestIconSize\0size\0"
    "setRightSplitVisible\0visible\0"
    "onPluginSettingsChanged\0"
    "onWrapperAttentionChanged\0"
    "FashionTrayWidgetWrapper*\0wrapper\0"
    "attention\0attentionWrapperToNormalWrapper\0"
    "normalWrapperToAttentionWrapper\0"
    "requestResize\0refreshHoldContainerPosition\0"
    "onRequireDraggingWrapper\0"
    "onContainerDraggingStateChanged\0"
    "dragging"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FashionTrayItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    1,   72,    2, 0x0a /* Public */,
       6,    1,   75,    2, 0x0a /* Public */,
       8,    0,   78,    2, 0x0a /* Public */,
       9,    2,   79,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,
      17,    0,   90,    2, 0x08 /* Private */,
      18,    2,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QSize,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   11,   19,

       0        // eod
};

void FashionTrayItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FashionTrayItem *_t = static_cast<FashionTrayItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onExpandChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->setSuggestIconSize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 2: _t->setRightSplitVisible((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->onPluginSettingsChanged(); break;
        case 4: _t->onWrapperAttentionChanged((*reinterpret_cast< FashionTrayWidgetWrapper*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 5: _t->attentionWrapperToNormalWrapper(); break;
        case 6: _t->normalWrapperToAttentionWrapper((*reinterpret_cast< FashionTrayWidgetWrapper*(*)>(_a[1]))); break;
        case 7: _t->requestResize(); break;
        case 8: _t->refreshHoldContainerPosition(); break;
        case 9: _t->onRequireDraggingWrapper(); break;
        case 10: _t->onContainerDraggingStateChanged((*reinterpret_cast< FashionTrayWidgetWrapper*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FashionTrayWidgetWrapper* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FashionTrayWidgetWrapper* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FashionTrayWidgetWrapper* >(); break;
            }
            break;
        }
    }
}

const QMetaObject FashionTrayItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FashionTrayItem.data,
      qt_meta_data_FashionTrayItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FashionTrayItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FashionTrayItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FashionTrayItem.stringdata0))
        return static_cast<void*>(const_cast< FashionTrayItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int FashionTrayItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
