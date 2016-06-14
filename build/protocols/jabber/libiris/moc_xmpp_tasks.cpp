/****************************************************************************
** Meta object code from reading C++ file 'xmpp_tasks.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-im/xmpp_tasks.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmpp_tasks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__JT_Register[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_Register[] = {
    "XMPP::JT_Register\0"
};

void XMPP::JT_Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_Register::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_Register::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_Register,
      qt_meta_data_XMPP__JT_Register, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_Register::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_Register::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_Register))
        return static_cast<void*>(const_cast< JT_Register*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_UnRegister[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      39,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_UnRegister[] = {
    "XMPP::JT_UnRegister\0\0getFormFinished()\0"
    "unregFinished()\0"
};

void XMPP::JT_UnRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JT_UnRegister *_t = static_cast<JT_UnRegister *>(_o);
        switch (_id) {
        case 0: _t->getFormFinished(); break;
        case 1: _t->unregFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_UnRegister::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_UnRegister::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_UnRegister,
      qt_meta_data_XMPP__JT_UnRegister, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_UnRegister::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_UnRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_UnRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_UnRegister))
        return static_cast<void*>(const_cast< JT_UnRegister*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_UnRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_XMPP__JT_Roster[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_Roster[] = {
    "XMPP::JT_Roster\0"
};

void XMPP::JT_Roster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_Roster::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_Roster::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_Roster,
      qt_meta_data_XMPP__JT_Roster, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_Roster::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_Roster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_Roster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_Roster))
        return static_cast<void*>(const_cast< JT_Roster*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_Roster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_PushRoster[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_PushRoster[] = {
    "XMPP::JT_PushRoster\0\0roster(Roster)\0"
};

void XMPP::JT_PushRoster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JT_PushRoster *_t = static_cast<JT_PushRoster *>(_o);
        switch (_id) {
        case 0: _t->roster((*reinterpret_cast< const Roster(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::JT_PushRoster::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_PushRoster::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_PushRoster,
      qt_meta_data_XMPP__JT_PushRoster, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_PushRoster::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_PushRoster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_PushRoster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_PushRoster))
        return static_cast<void*>(const_cast< JT_PushRoster*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_PushRoster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void XMPP::JT_PushRoster::roster(const Roster & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_XMPP__JT_Presence[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_Presence[] = {
    "XMPP::JT_Presence\0"
};

void XMPP::JT_Presence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_Presence::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_Presence::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_Presence,
      qt_meta_data_XMPP__JT_Presence, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_Presence::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_Presence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_Presence::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_Presence))
        return static_cast<void*>(const_cast< JT_Presence*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_Presence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_PushPresence[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   23,   22,   22, 0x05,
      49,   46,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_PushPresence[] = {
    "XMPP::JT_PushPresence\0\0,\0presence(Jid,Status)\0"
    ",,\0subscription(Jid,QString,QString)\0"
};

void XMPP::JT_PushPresence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JT_PushPresence *_t = static_cast<JT_PushPresence *>(_o);
        switch (_id) {
        case 0: _t->presence((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Status(*)>(_a[2]))); break;
        case 1: _t->subscription((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::JT_PushPresence::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_PushPresence::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_PushPresence,
      qt_meta_data_XMPP__JT_PushPresence, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_PushPresence::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_PushPresence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_PushPresence::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_PushPresence))
        return static_cast<void*>(const_cast< JT_PushPresence*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_PushPresence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
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
void XMPP::JT_PushPresence::presence(const Jid & _t1, const Status & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMPP::JT_PushPresence::subscription(const Jid & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_XMPP__JT_Message[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_Message[] = {
    "XMPP::JT_Message\0"
};

void XMPP::JT_Message::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_Message::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_Message::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_Message,
      qt_meta_data_XMPP__JT_Message, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_Message::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_Message::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_Message::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_Message))
        return static_cast<void*>(const_cast< JT_Message*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_Message::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_PushMessage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_PushMessage[] = {
    "XMPP::JT_PushMessage\0\0message(Message)\0"
};

void XMPP::JT_PushMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JT_PushMessage *_t = static_cast<JT_PushMessage *>(_o);
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::JT_PushMessage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_PushMessage::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_PushMessage,
      qt_meta_data_XMPP__JT_PushMessage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_PushMessage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_PushMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_PushMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_PushMessage))
        return static_cast<void*>(const_cast< JT_PushMessage*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_PushMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void XMPP::JT_PushMessage::message(const Message & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_XMPP__JT_GetServices[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_GetServices[] = {
    "XMPP::JT_GetServices\0"
};

void XMPP::JT_GetServices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_GetServices::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_GetServices::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_GetServices,
      qt_meta_data_XMPP__JT_GetServices, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_GetServices::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_GetServices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_GetServices::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_GetServices))
        return static_cast<void*>(const_cast< JT_GetServices*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_GetServices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_VCard[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_VCard[] = {
    "XMPP::JT_VCard\0"
};

void XMPP::JT_VCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_VCard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_VCard::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_VCard,
      qt_meta_data_XMPP__JT_VCard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_VCard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_VCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_VCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_VCard))
        return static_cast<void*>(const_cast< JT_VCard*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_VCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_Search[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_Search[] = {
    "XMPP::JT_Search\0"
};

void XMPP::JT_Search::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_Search::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_Search::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_Search,
      qt_meta_data_XMPP__JT_Search, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_Search::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_Search::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_Search::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_Search))
        return static_cast<void*>(const_cast< JT_Search*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_Search::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_ClientVersion[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_ClientVersion[] = {
    "XMPP::JT_ClientVersion\0"
};

void XMPP::JT_ClientVersion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_ClientVersion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_ClientVersion::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_ClientVersion,
      qt_meta_data_XMPP__JT_ClientVersion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_ClientVersion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_ClientVersion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_ClientVersion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_ClientVersion))
        return static_cast<void*>(const_cast< JT_ClientVersion*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_ClientVersion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_ServInfo[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_ServInfo[] = {
    "XMPP::JT_ServInfo\0"
};

void XMPP::JT_ServInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_ServInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_ServInfo::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_ServInfo,
      qt_meta_data_XMPP__JT_ServInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_ServInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_ServInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_ServInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_ServInfo))
        return static_cast<void*>(const_cast< JT_ServInfo*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_ServInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_Gateway[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_Gateway[] = {
    "XMPP::JT_Gateway\0"
};

void XMPP::JT_Gateway::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_Gateway::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_Gateway::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_Gateway,
      qt_meta_data_XMPP__JT_Gateway, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_Gateway::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_Gateway::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_Gateway::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_Gateway))
        return static_cast<void*>(const_cast< JT_Gateway*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_Gateway::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_Browse[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_Browse[] = {
    "XMPP::JT_Browse\0"
};

void XMPP::JT_Browse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_Browse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_Browse::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_Browse,
      qt_meta_data_XMPP__JT_Browse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_Browse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_Browse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_Browse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_Browse))
        return static_cast<void*>(const_cast< JT_Browse*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_Browse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_DiscoItems[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_DiscoItems[] = {
    "XMPP::JT_DiscoItems\0"
};

void XMPP::JT_DiscoItems::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_DiscoItems::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_DiscoItems::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_DiscoItems,
      qt_meta_data_XMPP__JT_DiscoItems, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_DiscoItems::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_DiscoItems::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_DiscoItems::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_DiscoItems))
        return static_cast<void*>(const_cast< JT_DiscoItems*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_DiscoItems::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_DiscoPublish[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_DiscoPublish[] = {
    "XMPP::JT_DiscoPublish\0"
};

void XMPP::JT_DiscoPublish::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_DiscoPublish::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_DiscoPublish::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_DiscoPublish,
      qt_meta_data_XMPP__JT_DiscoPublish, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_DiscoPublish::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_DiscoPublish::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_DiscoPublish::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_DiscoPublish))
        return static_cast<void*>(const_cast< JT_DiscoPublish*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_DiscoPublish::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_BoBServer[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_BoBServer[] = {
    "XMPP::JT_BoBServer\0"
};

void XMPP::JT_BoBServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_BoBServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_BoBServer::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_BoBServer,
      qt_meta_data_XMPP__JT_BoBServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_BoBServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_BoBServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_BoBServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_BoBServer))
        return static_cast<void*>(const_cast< JT_BoBServer*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_BoBServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_BitsOfBinary[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_BitsOfBinary[] = {
    "XMPP::JT_BitsOfBinary\0"
};

void XMPP::JT_BitsOfBinary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_BitsOfBinary::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_BitsOfBinary::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_BitsOfBinary,
      qt_meta_data_XMPP__JT_BitsOfBinary, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_BitsOfBinary::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_BitsOfBinary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_BitsOfBinary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_BitsOfBinary))
        return static_cast<void*>(const_cast< JT_BitsOfBinary*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_BitsOfBinary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_PongServer[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_XMPP__JT_PongServer[] = {
    "XMPP::JT_PongServer\0"
};

void XMPP::JT_PongServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_PongServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_PongServer::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_PongServer,
      qt_meta_data_XMPP__JT_PongServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_PongServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_PongServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_PongServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_PongServer))
        return static_cast<void*>(const_cast< JT_PongServer*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_PongServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
