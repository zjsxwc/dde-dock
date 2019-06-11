/****************************************************************************
** Meta object code from reading C++ file 'appitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/item/appitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AppItem_t {
    QByteArrayData data[19];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppItem_t qt_meta_stringdata_AppItem = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AppItem"
QT_MOC_LITERAL(1, 8, 21), // "requestActivateWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "WId"
QT_MOC_LITERAL(4, 35, 3), // "wid"
QT_MOC_LITERAL(5, 39, 20), // "requestPreviewWindow"
QT_MOC_LITERAL(6, 60, 20), // "requestCancelPreview"
QT_MOC_LITERAL(7, 81, 9), // "dragReady"
QT_MOC_LITERAL(8, 91, 8), // "QWidget*"
QT_MOC_LITERAL(9, 100, 10), // "dragWidget"
QT_MOC_LITERAL(10, 111, 17), // "updateWindowInfos"
QT_MOC_LITERAL(11, 129, 13), // "WindowInfoMap"
QT_MOC_LITERAL(12, 143, 4), // "info"
QT_MOC_LITERAL(13, 148, 11), // "refershIcon"
QT_MOC_LITERAL(14, 160, 13), // "activeChanged"
QT_MOC_LITERAL(15, 174, 11), // "showPreview"
QT_MOC_LITERAL(16, 186, 15), // "playSwingEffect"
QT_MOC_LITERAL(17, 202, 15), // "stopSwingEffect"
QT_MOC_LITERAL(18, 218, 20) // "checkAttentionEffect"

    },
    "AppItem\0requestActivateWindow\0\0WId\0"
    "wid\0requestPreviewWindow\0requestCancelPreview\0"
    "dragReady\0QWidget*\0dragWidget\0"
    "updateWindowInfos\0WindowInfoMap\0info\0"
    "refershIcon\0activeChanged\0showPreview\0"
    "playSwingEffect\0stopSwingEffect\0"
    "checkAttentionEffect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   79,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,
      17,    0,   86,    2, 0x08 /* Private */,
      18,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AppItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppItem *_t = static_cast<AppItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestActivateWindow((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 1: _t->requestPreviewWindow((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 2: _t->requestCancelPreview(); break;
        case 3: _t->dragReady((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->updateWindowInfos((*reinterpret_cast< const WindowInfoMap(*)>(_a[1]))); break;
        case 5: _t->refershIcon(); break;
        case 6: _t->activeChanged(); break;
        case 7: _t->showPreview(); break;
        case 8: _t->playSwingEffect(); break;
        case 9: _t->stopSwingEffect(); break;
        case 10: _t->checkAttentionEffect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WindowInfoMap >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AppItem::*_t)(const WId ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppItem::requestActivateWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AppItem::*_t)(const WId ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppItem::requestPreviewWindow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AppItem::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppItem::requestCancelPreview)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AppItem::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppItem::dragReady)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject AppItem::staticMetaObject = {
    { &DockItem::staticMetaObject, qt_meta_stringdata_AppItem.data,
      qt_meta_data_AppItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AppItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AppItem.stringdata0))
        return static_cast<void*>(const_cast< AppItem*>(this));
    return DockItem::qt_metacast(_clname);
}

int AppItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockItem::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AppItem::requestActivateWindow(const WId _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AppItem *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppItem::requestPreviewWindow(const WId _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AppItem *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AppItem::requestCancelPreview()const
{
    QMetaObject::activate(const_cast< AppItem *>(this), &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void AppItem::dragReady(QWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
