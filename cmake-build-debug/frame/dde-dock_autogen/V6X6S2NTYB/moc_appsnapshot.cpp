/****************************************************************************
** Meta object code from reading C++ file 'appsnapshot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/item/components/appsnapshot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appsnapshot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AppSnapshot_t {
    QByteArrayData data[13];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppSnapshot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppSnapshot_t qt_meta_stringdata_AppSnapshot = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AppSnapshot"
QT_MOC_LITERAL(1, 12, 7), // "entered"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "WId"
QT_MOC_LITERAL(4, 25, 3), // "wid"
QT_MOC_LITERAL(5, 29, 7), // "clicked"
QT_MOC_LITERAL(6, 37, 18), // "requestCheckWindow"
QT_MOC_LITERAL(7, 56, 13), // "fetchSnapshot"
QT_MOC_LITERAL(8, 70, 11), // "closeWindow"
QT_MOC_LITERAL(9, 82, 16), // "compositeChanged"
QT_MOC_LITERAL(10, 99, 13), // "setWindowInfo"
QT_MOC_LITERAL(11, 113, 10), // "WindowInfo"
QT_MOC_LITERAL(12, 124, 4) // "info"

    },
    "AppSnapshot\0entered\0\0WId\0wid\0clicked\0"
    "requestCheckWindow\0fetchSnapshot\0"
    "closeWindow\0compositeChanged\0setWindowInfo\0"
    "WindowInfo\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppSnapshot[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       6,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void AppSnapshot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppSnapshot *_t = static_cast<AppSnapshot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entered((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 1: _t->clicked((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 2: _t->requestCheckWindow(); break;
        case 3: _t->fetchSnapshot(); break;
        case 4: _t->closeWindow(); break;
        case 5: _t->compositeChanged(); break;
        case 6: _t->setWindowInfo((*reinterpret_cast< const WindowInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WindowInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AppSnapshot::*_t)(const WId ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppSnapshot::entered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AppSnapshot::*_t)(const WId ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppSnapshot::clicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AppSnapshot::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppSnapshot::requestCheckWindow)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AppSnapshot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AppSnapshot.data,
      qt_meta_data_AppSnapshot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AppSnapshot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppSnapshot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AppSnapshot.stringdata0))
        return static_cast<void*>(const_cast< AppSnapshot*>(this));
    return QWidget::qt_metacast(_clname);
}

int AppSnapshot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AppSnapshot::entered(const WId _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AppSnapshot *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppSnapshot::clicked(const WId _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AppSnapshot *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AppSnapshot::requestCheckWindow()const
{
    QMetaObject::activate(const_cast< AppSnapshot *>(this), &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
