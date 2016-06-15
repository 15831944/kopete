/****************************************************************************
** Meta object code from reading C++ file 'avdeviceconfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kopete/config/avdevice/avdeviceconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avdeviceconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AVDeviceConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      42,   15,   15,   15, 0x08,
      64,   15,   15,   15, 0x08,
      96,   15,   15,   15, 0x08,
     127,   15,   15,   15, 0x08,
     161,   15,   15,   15, 0x08,
     188,  179,   15,   15, 0x08,
     225,  222,   15,   15, 0x28,
     255,   15,   15,   15, 0x08,
     271,   15,   15,   15, 0x08,
     297,   15,   15,   15, 0x08,
     325,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AVDeviceConfig[] = {
    "AVDeviceConfig\0\0slotSettingsChanged(bool)\0"
    "slotValueChanged(int)\0"
    "slotDeviceKComboBoxChanged(int)\0"
    "slotInputKComboBoxChanged(int)\0"
    "slotStandardKComboBoxChanged(int)\0"
    "slotUpdateImage()\0id,value\0"
    "changeVideoControlValue(uint,int)\0id\0"
    "changeVideoControlValue(uint)\0"
    "resetControls()\0deviceRegistered(QString)\0"
    "deviceUnregistered(QString)\0"
    "updateVideoDevicePool()\0"
};

void AVDeviceConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AVDeviceConfig *_t = static_cast<AVDeviceConfig *>(_o);
        switch (_id) {
        case 0: _t->slotSettingsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotDeviceKComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotInputKComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotStandardKComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotUpdateImage(); break;
        case 6: _t->changeVideoControlValue((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->changeVideoControlValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->resetControls(); break;
        case 9: _t->deviceRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->deviceUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->updateVideoDevicePool(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AVDeviceConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AVDeviceConfig::staticMetaObject = {
    { &KCModule::staticMetaObject, qt_meta_stringdata_AVDeviceConfig,
      qt_meta_data_AVDeviceConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AVDeviceConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AVDeviceConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AVDeviceConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AVDeviceConfig))
        return static_cast<void*>(const_cast< AVDeviceConfig*>(this));
    return KCModule::qt_metacast(_clname);
}

int AVDeviceConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
