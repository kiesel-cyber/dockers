/****************************************************************************
** Meta object code from reading C++ file 'PluginManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PluginManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginManager_t {
    QByteArrayData data[53];
    char stringdata0[716];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginManager_t qt_meta_stringdata_PluginManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PluginManager"
QT_MOC_LITERAL(1, 14, 8), // "keyEvent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "key"
QT_MOC_LITERAL(4, 28, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(5, 50, 9), // "modifiers"
QT_MOC_LITERAL(6, 60, 7), // "isPress"
QT_MOC_LITERAL(7, 68, 13), // "rescanPlugins"
QT_MOC_LITERAL(8, 82, 14), // "on_receiveData"
QT_MOC_LITERAL(9, 97, 17), // "const ClientUser*"
QT_MOC_LITERAL(10, 115, 6), // "sender"
QT_MOC_LITERAL(11, 122, 14), // "const uint8_t*"
QT_MOC_LITERAL(12, 137, 4), // "data"
QT_MOC_LITERAL(13, 142, 6), // "size_t"
QT_MOC_LITERAL(14, 149, 10), // "dataLength"
QT_MOC_LITERAL(15, 160, 11), // "const char*"
QT_MOC_LITERAL(16, 172, 6), // "dataID"
QT_MOC_LITERAL(17, 179, 18), // "on_serverConnected"
QT_MOC_LITERAL(18, 198, 21), // "on_serverDisconnected"
QT_MOC_LITERAL(19, 220, 17), // "on_channelEntered"
QT_MOC_LITERAL(20, 238, 14), // "const Channel*"
QT_MOC_LITERAL(21, 253, 10), // "newChannel"
QT_MOC_LITERAL(22, 264, 11), // "prevChannel"
QT_MOC_LITERAL(23, 276, 11), // "const User*"
QT_MOC_LITERAL(24, 288, 4), // "user"
QT_MOC_LITERAL(25, 293, 16), // "on_channelExited"
QT_MOC_LITERAL(26, 310, 7), // "channel"
QT_MOC_LITERAL(27, 318, 26), // "on_userTalkingStateChanged"
QT_MOC_LITERAL(28, 345, 13), // "on_audioInput"
QT_MOC_LITERAL(29, 359, 6), // "short*"
QT_MOC_LITERAL(30, 366, 8), // "inputPCM"
QT_MOC_LITERAL(31, 375, 11), // "sampleCount"
QT_MOC_LITERAL(32, 387, 12), // "channelCount"
QT_MOC_LITERAL(33, 400, 10), // "sampleRate"
QT_MOC_LITERAL(34, 411, 8), // "isSpeech"
QT_MOC_LITERAL(35, 420, 21), // "on_audioSourceFetched"
QT_MOC_LITERAL(36, 442, 6), // "float*"
QT_MOC_LITERAL(37, 449, 9), // "outputPCM"
QT_MOC_LITERAL(38, 459, 25), // "on_audioOutputAboutToPlay"
QT_MOC_LITERAL(39, 485, 5), // "bool*"
QT_MOC_LITERAL(40, 491, 13), // "modifiedAudio"
QT_MOC_LITERAL(41, 505, 21), // "on_serverSynchronized"
QT_MOC_LITERAL(42, 527, 12), // "on_userAdded"
QT_MOC_LITERAL(43, 540, 6), // "userID"
QT_MOC_LITERAL(44, 547, 14), // "on_userRemoved"
QT_MOC_LITERAL(45, 562, 15), // "on_channelAdded"
QT_MOC_LITERAL(46, 578, 9), // "channelID"
QT_MOC_LITERAL(47, 588, 17), // "on_channelRemoved"
QT_MOC_LITERAL(48, 606, 17), // "on_channelRenamed"
QT_MOC_LITERAL(49, 624, 11), // "on_keyEvent"
QT_MOC_LITERAL(50, 636, 21), // "on_syncPositionalData"
QT_MOC_LITERAL(51, 658, 19), // "on_updatesAvailable"
QT_MOC_LITERAL(52, 678, 37) // "checkForAvailablePositionalDa..."

    },
    "PluginManager\0keyEvent\0\0key\0"
    "Qt::KeyboardModifiers\0modifiers\0isPress\0"
    "rescanPlugins\0on_receiveData\0"
    "const ClientUser*\0sender\0const uint8_t*\0"
    "data\0size_t\0dataLength\0const char*\0"
    "dataID\0on_serverConnected\0"
    "on_serverDisconnected\0on_channelEntered\0"
    "const Channel*\0newChannel\0prevChannel\0"
    "const User*\0user\0on_channelExited\0"
    "channel\0on_userTalkingStateChanged\0"
    "on_audioInput\0short*\0inputPCM\0sampleCount\0"
    "channelCount\0sampleRate\0isSpeech\0"
    "on_audioSourceFetched\0float*\0outputPCM\0"
    "on_audioOutputAboutToPlay\0bool*\0"
    "modifiedAudio\0on_serverSynchronized\0"
    "on_userAdded\0userID\0on_userRemoved\0"
    "on_channelAdded\0channelID\0on_channelRemoved\0"
    "on_channelRenamed\0on_keyEvent\0"
    "on_syncPositionalData\0on_updatesAvailable\0"
    "checkForAvailablePositionalDataPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  126,    2, 0x0a /* Public */,
       8,    4,  127,    2, 0x0a /* Public */,
      17,    0,  136,    2, 0x0a /* Public */,
      18,    0,  137,    2, 0x0a /* Public */,
      19,    3,  138,    2, 0x0a /* Public */,
      25,    2,  145,    2, 0x0a /* Public */,
      27,    0,  150,    2, 0x0a /* Public */,
      28,    5,  151,    2, 0x0a /* Public */,
      35,    6,  162,    2, 0x0a /* Public */,
      38,    5,  175,    2, 0x0a /* Public */,
      41,    0,  186,    2, 0x0a /* Public */,
      42,    1,  187,    2, 0x0a /* Public */,
      44,    1,  190,    2, 0x0a /* Public */,
      45,    1,  193,    2, 0x0a /* Public */,
      47,    1,  196,    2, 0x0a /* Public */,
      48,    1,  199,    2, 0x0a /* Public */,
      49,    3,  202,    2, 0x0a /* Public */,
      50,    0,  209,    2, 0x0a /* Public */,
      51,    0,  210,    2, 0x0a /* Public */,
      52,    0,  211,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4, QMetaType::Bool,    3,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15,   10,   12,   14,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20, 0x80000000 | 23,   21,   22,   24,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 23,   26,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool,   30,   31,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 36, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool, 0x80000000 | 9,   37,   31,   32,   33,   34,   24,
    QMetaType::Void, 0x80000000 | 36, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 39,   37,   31,   32,   33,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   43,
    QMetaType::Void, QMetaType::UInt,   43,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4, QMetaType::Bool,    3,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->rescanPlugins(); break;
        case 2: _t->on_receiveData((*reinterpret_cast< const ClientUser*(*)>(_a[1])),(*reinterpret_cast< const uint8_t*(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4]))); break;
        case 3: _t->on_serverConnected(); break;
        case 4: _t->on_serverDisconnected(); break;
        case 5: _t->on_channelEntered((*reinterpret_cast< const Channel*(*)>(_a[1])),(*reinterpret_cast< const Channel*(*)>(_a[2])),(*reinterpret_cast< const User*(*)>(_a[3]))); break;
        case 6: _t->on_channelExited((*reinterpret_cast< const Channel*(*)>(_a[1])),(*reinterpret_cast< const User*(*)>(_a[2]))); break;
        case 7: _t->on_userTalkingStateChanged(); break;
        case 8: _t->on_audioInput((*reinterpret_cast< short*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 9: _t->on_audioSourceFetched((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const ClientUser*(*)>(_a[6]))); break;
        case 10: _t->on_audioOutputAboutToPlay((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool*(*)>(_a[5]))); break;
        case 11: _t->on_serverSynchronized(); break;
        case 12: _t->on_userAdded((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->on_userRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->on_channelAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_channelRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_channelRenamed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_keyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->on_syncPositionalData(); break;
        case 19: _t->on_updatesAvailable(); break;
        case 20: _t->checkForAvailablePositionalDataPlugin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PluginManager::*)(unsigned int , Qt::KeyboardModifiers , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginManager::keyEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PluginManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PluginManager.data,
    qt_meta_data_PluginManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void PluginManager::keyEvent(unsigned int _t1, Qt::KeyboardModifiers _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
