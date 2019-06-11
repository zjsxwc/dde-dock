/****************************************************************************
** Meta object code from reading C++ file 'accesspointwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/network/item/applet/accesspointwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accesspointwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SsidButton_t {
    QByteArrayData data[3];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SsidButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SsidButton_t qt_meta_stringdata_SsidButton = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SsidButton"
QT_MOC_LITERAL(1, 11, 7), // "clicked"
QT_MOC_LITERAL(2, 19, 0) // ""

    },
    "SsidButton\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SsidButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void SsidButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SsidButton *_t = static_cast<SsidButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SsidButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SsidButton::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SsidButton::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_SsidButton.data,
      qt_meta_data_SsidButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SsidButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SsidButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SsidButton.stringdata0))
        return static_cast<void*>(const_cast< SsidButton*>(this));
    return QLabel::qt_metacast(_clname);
}

int SsidButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SsidButton::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_AccessPointWidget_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccessPointWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccessPointWidget_t qt_meta_stringdata_AccessPointWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AccessPointWidget"
QT_MOC_LITERAL(1, 18, 15), // "requestActiveAP"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "apPath"
QT_MOC_LITERAL(4, 42, 4), // "ssid"
QT_MOC_LITERAL(5, 47, 17), // "requestDeactiveAP"
QT_MOC_LITERAL(6, 65, 11), // "AccessPoint"
QT_MOC_LITERAL(7, 77, 2), // "ap"
QT_MOC_LITERAL(8, 80, 7), // "clicked"
QT_MOC_LITERAL(9, 88, 11), // "ssidClicked"
QT_MOC_LITERAL(10, 100, 20), // "disconnectBtnClicked"
QT_MOC_LITERAL(11, 121, 6) // "active"

    },
    "AccessPointWidget\0requestActiveAP\0\0"
    "apPath\0ssid\0requestDeactiveAP\0AccessPoint\0"
    "ap\0clicked\0ssidClicked\0disconnectBtnClicked\0"
    "active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccessPointWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,
       8,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   48,    2, 0x08 /* Private */,
      10,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00095001,

       0        // eod
};

void AccessPointWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccessPointWidget *_t = static_cast<AccessPointWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestActiveAP((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->requestDeactiveAP((*reinterpret_cast< const AccessPoint(*)>(_a[1]))); break;
        case 2: _t->clicked(); break;
        case 3: _t->ssidClicked(); break;
        case 4: _t->disconnectBtnClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccessPointWidget::*_t)(const QString & , const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccessPointWidget::requestActiveAP)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AccessPointWidget::*_t)(const AccessPoint & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccessPointWidget::requestDeactiveAP)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AccessPointWidget::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccessPointWidget::clicked)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AccessPointWidget *_t = static_cast<AccessPointWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject AccessPointWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_AccessPointWidget.data,
      qt_meta_data_AccessPointWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AccessPointWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccessPointWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AccessPointWidget.stringdata0))
        return static_cast<void*>(const_cast< AccessPointWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int AccessPointWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AccessPointWidget::requestActiveAP(const QString & _t1, const QString & _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< AccessPointWidget *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccessPointWidget::requestDeactiveAP(const AccessPoint & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AccessPointWidget *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AccessPointWidget::clicked()const
{
    QMetaObject::activate(const_cast< AccessPointWidget *>(this), &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
