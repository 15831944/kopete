/****************************************************************************
** Meta object code from reading C++ file 'IdGuiElements.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kopete/config/avdevice/IdGuiElements.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IdGuiElements.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IdPushButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IdPushButton[] = {
    "IdPushButton\0\0id\0pressed(uint)\0"
    "emitPressed()\0"
};

void IdPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IdPushButton *_t = static_cast<IdPushButton *>(_o);
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->emitPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IdPushButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IdPushButton::staticMetaObject = {
    { &KPushButton::staticMetaObject, qt_meta_stringdata_IdPushButton,
      qt_meta_data_IdPushButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IdPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IdPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IdPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IdPushButton))
        return static_cast<void*>(const_cast< IdPushButton*>(this));
    return KPushButton::qt_metacast(_clname);
}

int IdPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void IdPushButton::pressed(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_IdComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   51,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IdComboBox[] = {
    "IdComboBox\0\0id,index\0currentIndexChanged(uint,int)\0"
    "index\0emitCurrentIndexChanged(int)\0"
};

void IdComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IdComboBox *_t = static_cast<IdComboBox *>(_o);
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->emitCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IdComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IdComboBox::staticMetaObject = {
    { &KComboBox::staticMetaObject, qt_meta_stringdata_IdComboBox,
      qt_meta_data_IdComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IdComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IdComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IdComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IdComboBox))
        return static_cast<void*>(const_cast< IdComboBox*>(this));
    return KComboBox::qt_metacast(_clname);
}

int IdComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void IdComboBox::currentIndexChanged(unsigned int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_IdCheckBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   44,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IdCheckBox[] = {
    "IdCheckBox\0\0id,state\0stateChanged(uint,int)\0"
    "state\0emitStateChanged(int)\0"
};

void IdCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IdCheckBox *_t = static_cast<IdCheckBox *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->emitStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IdCheckBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IdCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_IdCheckBox,
      qt_meta_data_IdCheckBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IdCheckBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IdCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IdCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IdCheckBox))
        return static_cast<void*>(const_cast< IdCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int IdCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void IdCheckBox::stateChanged(unsigned int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_IdSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   42,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IdSlider[] = {
    "IdSlider\0\0id,value\0valueChanged(uint,int)\0"
    "value\0emitValueChanged(int)\0"
};

void IdSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IdSlider *_t = static_cast<IdSlider *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->emitValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IdSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IdSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_IdSlider,
      qt_meta_data_IdSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IdSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IdSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IdSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IdSlider))
        return static_cast<void*>(const_cast< IdSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int IdSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void IdSlider::valueChanged(unsigned int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
