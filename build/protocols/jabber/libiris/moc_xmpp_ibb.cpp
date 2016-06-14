/****************************************************************************
** Meta object code from reading C++ file 'xmpp_ibb.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-im/xmpp_ibb.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmpp_ibb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__IBBConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   20,   20,   20, 0x08,
      48,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__IBBConnection[] = {
    "XMPP::IBBConnection\0\0connected()\0"
    "ibb_finished()\0trySend()\0"
};

void XMPP::IBBConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IBBConnection *_t = static_cast<IBBConnection *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->ibb_finished(); break;
        case 2: _t->trySend(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::IBBConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::IBBConnection::staticMetaObject = {
    { &BSConnection::staticMetaObject, qt_meta_stringdata_XMPP__IBBConnection,
      qt_meta_data_XMPP__IBBConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::IBBConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::IBBConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::IBBConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__IBBConnection))
        return static_cast<void*>(const_cast< IBBConnection*>(this));
    return BSConnection::qt_metacast(_clname);
}

int XMPP::IBBConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BSConnection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void XMPP::IBBConnection::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_XMPP__IBBManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   18,   17,   17, 0x0a,
     112,   83,   17,   17, 0x08,
     177,  165,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__IBBManager[] = {
    "XMPP::IBBManager\0\0from,id,data,\0"
    "takeIncomingData(Jid,QString,IBBData,Stanza::Kind)\0"
    "from,id,sid,blockSize,stanza\0"
    "ibb_incomingRequest(Jid,QString,QString,int,QString)\0"
    "from,id,sid\0ibb_closeRequest(Jid,QString,QString)\0"
};

void XMPP::IBBManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IBBManager *_t = static_cast<IBBManager *>(_o);
        switch (_id) {
        case 0: _t->takeIncomingData((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const IBBData(*)>(_a[3])),(*reinterpret_cast< Stanza::Kind(*)>(_a[4]))); break;
        case 1: _t->ibb_incomingRequest((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 2: _t->ibb_closeRequest((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::IBBManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::IBBManager::staticMetaObject = {
    { &BytestreamManager::staticMetaObject, qt_meta_stringdata_XMPP__IBBManager,
      qt_meta_data_XMPP__IBBManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::IBBManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::IBBManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::IBBManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__IBBManager))
        return static_cast<void*>(const_cast< IBBManager*>(this));
    return BytestreamManager::qt_metacast(_clname);
}

int XMPP::IBBManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BytestreamManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_XMPP__JT_IBB[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      43,   14,   13,   13, 0x05,
     106,   92,   13,   13, 0x05,
     165,  153,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_IBB[] = {
    "XMPP::JT_IBB\0\0from,id,sid,blockSize,stanza\0"
    "incomingRequest(Jid,QString,QString,int,QString)\0"
    "from,id,data,\0"
    "incomingData(Jid,QString,IBBData,Stanza::Kind)\0"
    "from,id,sid\0closeRequest(Jid,QString,QString)\0"
};

void XMPP::JT_IBB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JT_IBB *_t = static_cast<JT_IBB *>(_o);
        switch (_id) {
        case 0: _t->incomingRequest((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->incomingData((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const IBBData(*)>(_a[3])),(*reinterpret_cast< Stanza::Kind(*)>(_a[4]))); break;
        case 2: _t->closeRequest((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::JT_IBB::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_IBB::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_IBB,
      qt_meta_data_XMPP__JT_IBB, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_IBB::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_IBB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_IBB::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_IBB))
        return static_cast<void*>(const_cast< JT_IBB*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_IBB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void XMPP::JT_IBB::incomingRequest(const Jid & _t1, const QString & _t2, const QString & _t3, int _t4, const QString & _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMPP::JT_IBB::incomingData(const Jid & _t1, const QString & _t2, const IBBData & _t3, Stanza::Kind _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMPP::JT_IBB::closeRequest(const Jid & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
