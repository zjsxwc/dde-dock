/****************************************************************************
** Meta object code from reading C++ file 'previewcontainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../frame/item/components/previewcontainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PreviewContainer_t {
    QByteArrayData data[17];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewContainer_t qt_meta_stringdata_PreviewContainer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PreviewContainer"
QT_MOC_LITERAL(1, 17, 21), // "requestActivateWindow"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "WId"
QT_MOC_LITERAL(4, 44, 3), // "wid"
QT_MOC_LITERAL(5, 48, 20), // "requestPreviewWindow"
QT_MOC_LITERAL(6, 69, 19), // "requestCheckWindows"
QT_MOC_LITERAL(7, 89, 26), // "requestCancelPreviewWindow"
QT_MOC_LITERAL(8, 116, 16), // "requestHidePopup"
QT_MOC_LITERAL(9, 133, 21), // "updateLayoutDirection"
QT_MOC_LITERAL(10, 155, 14), // "Dock::Position"
QT_MOC_LITERAL(11, 170, 7), // "dockPos"
QT_MOC_LITERAL(12, 178, 15), // "checkMouseLeave"
QT_MOC_LITERAL(13, 194, 11), // "prepareHide"
QT_MOC_LITERAL(14, 206, 17), // "onSnapshotClicked"
QT_MOC_LITERAL(15, 224, 14), // "previewEntered"
QT_MOC_LITERAL(16, 239, 15) // "previewFloating"

    },
    "PreviewContainer\0requestActivateWindow\0"
    "\0WId\0wid\0requestPreviewWindow\0"
    "requestCheckWindows\0requestCancelPreviewWindow\0"
    "requestHidePopup\0updateLayoutDirection\0"
    "Dock::Position\0dockPos\0checkMouseLeave\0"
    "prepareHide\0onSnapshotClicked\0"
    "previewEntered\0previewFloating"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    0,   76,    2, 0x06 /* Public */,
       8,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   78,    2, 0x0a /* Public */,
      12,    0,   81,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x08 /* Private */,
      15,    1,   86,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void PreviewContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreviewContainer *_t = static_cast<PreviewContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestActivateWindow((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 1: _t->requestPreviewWindow((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 2: _t->requestCheckWindows(); break;
        case 3: _t->requestCancelPreviewWindow(); break;
        case 4: _t->requestHidePopup(); break;
        case 5: _t->updateLayoutDirection((*reinterpret_cast< const Dock::Position(*)>(_a[1]))); break;
        case 6: _t->checkMouseLeave(); break;
        case 7: _t->prepareHide(); break;
        case 8: _t->onSnapshotClicked((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 9: _t->previewEntered((*reinterpret_cast< const WId(*)>(_a[1]))); break;
        case 10: _t->previewFloating(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Dock::Position >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PreviewContainer::*_t)(const WId ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewContainer::requestActivateWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PreviewContainer::*_t)(const WId ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewContainer::requestPreviewWindow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PreviewContainer::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewContainer::requestCheckWindows)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PreviewContainer::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewContainer::requestCancelPreviewWindow)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PreviewContainer::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreviewContainer::requestHidePopup)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject PreviewContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PreviewContainer.data,
      qt_meta_data_PreviewContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PreviewContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewContainer.stringdata0))
        return static_cast<void*>(const_cast< PreviewContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int PreviewContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PreviewContainer::requestActivateWindow(const WId _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PreviewContainer::requestPreviewWindow(const WId _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PreviewContainer::requestCheckWindows()const
{
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void PreviewContainer::requestCancelPreviewWindow()const
{
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void PreviewContainer::requestHidePopup()const
{
    QMetaObject::activate(const_cast< PreviewContainer *>(this), &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
