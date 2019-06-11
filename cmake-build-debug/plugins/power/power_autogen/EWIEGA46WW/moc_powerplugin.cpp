/****************************************************************************
** Meta object code from reading C++ file 'powerplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/power/powerplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'powerplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PowerPlugin_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerPlugin_t qt_meta_stringdata_PowerPlugin = {
    {
QT_MOC_LITERAL(0, 0, 11) // "PowerPlugin"

    },
    "PowerPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PowerPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PowerPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PowerPlugin.data,
      qt_meta_data_PowerPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PowerPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PowerPlugin.stringdata0))
        return static_cast<void*>(const_cast< PowerPlugin*>(this));
    if (!strcmp(_clname, "PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(const_cast< PowerPlugin*>(this));
    if (!strcmp(_clname, "com.deepin.dock.PluginsItemInterface"))
        return static_cast< PluginsItemInterface*>(const_cast< PowerPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int PowerPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
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
    0x0b, 0x00, 'P',  'o',  'w',  'e',  'r',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
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
    0x17, 0x00, 'c',  'o',  'm',  '.',  'd',  'e', 
    'e',  'p',  'i',  'n',  '.',  'd',  'a',  'e', 
    'm',  'o',  'n',  '.',  'P',  'o',  'w',  'e', 
    'r',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
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
    'e',  0x00, 0x00, 0x00, 0x17, 0x00, 'c',  'o', 
    'm',  '.',  'd',  'e',  'e',  'p',  'i',  'n', 
    '.',  'd',  'a',  'e',  'm',  'o',  'n',  '.', 
    'P',  'o',  'w',  'e',  'r',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, ' ',  0x00, 0x00, 0x00,
    0x1b, 0x19, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0b, 0x00, 'P',  'o',  'w',  'e',  'r',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00,
    0xd8, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(PowerPlugin, PowerPlugin)

QT_END_MOC_NAMESPACE
