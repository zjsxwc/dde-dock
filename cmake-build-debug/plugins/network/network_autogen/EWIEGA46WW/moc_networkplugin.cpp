/****************************************************************************
** Meta object code from reading C++ file 'networkplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/network/networkplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetworkPlugin_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkPlugin_t qt_meta_stringdata_NetworkPlugin = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetworkPlugin"
QT_MOC_LITERAL(1, 14, 19), // "onDeviceListChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 35), // "QList<dde::network::NetworkDe..."
QT_MOC_LITERAL(4, 71, 7), // "devices"
QT_MOC_LITERAL(5, 79, 23), // "refreshWiredItemVisible"
QT_MOC_LITERAL(6, 103, 29), // "onItemRequestSetAppletVisible"
QT_MOC_LITERAL(7, 133, 7), // "visible"
QT_MOC_LITERAL(8, 141, 25) // "refreshPluginItemsVisible"

    },
    "NetworkPlugin\0onDeviceListChanged\0\0"
    "QList<dde::network::NetworkDevice*>\0"
    "devices\0refreshWiredItemVisible\0"
    "onItemRequestSetAppletVisible\0visible\0"
    "refreshPluginItemsVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void NetworkPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkPlugin *_t = static_cast<NetworkPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDeviceListChanged((*reinterpret_cast< const QList<dde::network::NetworkDevice*>(*)>(_a[1]))); break;
        case 1: _t->refreshWiredItemVisible(); break;
        case 2: _t->onItemRequestSetAppletVisible((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->refreshPluginItemsVisible(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<dde::network::NetworkDevice*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject NetworkPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkPlugin.data,
      qt_meta_data_NetworkPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetworkPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkPlugin.stringdata0))
        return static_cast<void*>(const_cast< NetworkPlugin*>(this));
    if (!strcmp(_clname, "PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(const_cast< NetworkPlugin*>(this));
    if (!strcmp(_clname, "com.deepin.dock.PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(const_cast< NetworkPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int NetworkPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x08, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xf4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '$',  0x00, 'c',  'o',  'm',  '.',  'd',  'e', 
    'e',  'p',  'i',  'n',  '.',  'd',  'o',  'c', 
    'k',  '.',  'P',  'l',  'u',  'g',  'i',  'n', 
    's',  'I',  't',  'e',  'm',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e',  0x00, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0d, 0x00, 'N',  'e',  't',  'w',  'o',  'r', 
    'k',  'P',  'l',  'u',  'g',  'i',  'n',  0x00,
    ':',  0xe0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x11, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 'h',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x03, 0x00, 'a',  'p', 
    'i',  0x00, 0x00, 0x00, 0x05, 0x00, '1',  '.', 
    '1',  '.',  '1',  0x00, 0x9b, 0x08, 0x00, 0x00,
    0x1b, 0x00, 'd',  'e',  'p',  'e',  'n',  'd', 
    's',  '-',  'd',  'a',  'e',  'm',  'o',  'n', 
    '-',  'd',  'b',  'u',  's',  '-',  's',  'e', 
    'r',  'v',  'i',  'c',  'e',  0x00, 0x00, 0x00,
    0x19, 0x00, 'c',  'o',  'm',  '.',  'd',  'e', 
    'e',  'p',  'i',  'n',  '.',  'd',  'a',  'e', 
    'm',  'o',  'n',  '.',  'N',  'e',  't',  'w', 
    'o',  'r',  'k',  0x00, 0x0c, 0x00, 0x00, 0x00,
    ' ',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x08, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xf4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '$',  0x00, 'c',  'o',  'm',  '.',  'd',  'e', 
    'e',  'p',  'i',  'n',  '.',  'd',  'o',  'c', 
    'k',  '.',  'P',  'l',  'u',  'g',  'i',  'n', 
    's',  'I',  't',  'e',  'm',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e',  0x00, 0x00,
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    'h',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'a',  'p',  'i',  0x00, 0x00, 0x00,
    0x05, 0x00, '1',  '.',  '1',  '.',  '1',  0x00,
    0x9b, 0x08, 0x00, 0x00, 0x1b, 0x00, 'd',  'e', 
    'p',  'e',  'n',  'd',  's',  '-',  'd',  'a', 
    'e',  'm',  'o',  'n',  '-',  'd',  'b',  'u', 
    's',  '-',  's',  'e',  'r',  'v',  'i',  'c', 
    'e',  0x00, 0x00, 0x00, 0x19, 0x00, 'c',  'o', 
    'm',  '.',  'd',  'e',  'e',  'p',  'i',  'n', 
    '.',  'd',  'a',  'e',  'm',  'o',  'n',  '.', 
    'N',  'e',  't',  'w',  'o',  'r',  'k',  0x00,
    0x0c, 0x00, 0x00, 0x00, ' ',  0x00, 0x00, 0x00,
    0x1b, 0x19, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0d, 0x00, 'N',  'e',  't',  'w',  'o',  'r', 
    'k',  'P',  'l',  'u',  'g',  'i',  'n',  0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00,
    0xd8, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(NetworkPlugin, NetworkPlugin)

QT_END_MOC_NAMESPACE
