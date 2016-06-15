/****************************************************************************
** Meta object code from reading C++ file 's5b.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-im/s5b.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 's5b.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__S5BConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      36,   34,   20,   20, 0x05,
      54,   20,   20,   20, 0x05,
      67,   20,   20,   20, 0x05,
      84,   78,   20,   20, 0x05,
     112,   20,   20,   20, 0x05,
     127,   20,   20,   20, 0x05,
     150,   20,   20,   20, 0x05,
     162,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     178,   20,   20,   20, 0x08,
     190,   20,   20,   20, 0x08,
     212,   20,   20,   20, 0x08,
     238,   20,   20,   20, 0x08,
     253,   20,   20,   20, 0x08,
     277,   20,   20,   20, 0x08,
     295,  291,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__S5BConnection[] = {
    "XMPP::S5BConnection\0\0proxyQuery()\0b\0"
    "proxyResult(bool)\0requesting()\0"
    "accepted()\0hosts\0tryingHosts(StreamHostList)\0"
    "proxyConnect()\0waitingForActivation()\0"
    "connected()\0datagramReady()\0doPending()\0"
    "sc_connectionClosed()\0sc_delayedCloseFinished()\0"
    "sc_readyRead()\0sc_bytesWritten(qint64)\0"
    "sc_error(int)\0buf\0su_packetReady(QByteArray)\0"
};

void XMPP::S5BConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        S5BConnection *_t = static_cast<S5BConnection *>(_o);
        switch (_id) {
        case 0: _t->proxyQuery(); break;
        case 1: _t->proxyResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->requesting(); break;
        case 3: _t->accepted(); break;
        case 4: _t->tryingHosts((*reinterpret_cast< const StreamHostList(*)>(_a[1]))); break;
        case 5: _t->proxyConnect(); break;
        case 6: _t->waitingForActivation(); break;
        case 7: _t->connected(); break;
        case 8: _t->datagramReady(); break;
        case 9: _t->doPending(); break;
        case 10: _t->sc_connectionClosed(); break;
        case 11: _t->sc_delayedCloseFinished(); break;
        case 12: _t->sc_readyRead(); break;
        case 13: _t->sc_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 14: _t->sc_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->su_packetReady((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::S5BConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::S5BConnection::staticMetaObject = {
    { &BSConnection::staticMetaObject, qt_meta_stringdata_XMPP__S5BConnection,
      qt_meta_data_XMPP__S5BConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::S5BConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::S5BConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::S5BConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__S5BConnection))
        return static_cast<void*>(const_cast< S5BConnection*>(this));
    return BSConnection::qt_metacast(_clname);
}

int XMPP::S5BConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BSConnection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void XMPP::S5BConnection::proxyQuery()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::S5BConnection::proxyResult(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMPP::S5BConnection::requesting()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void XMPP::S5BConnection::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void XMPP::S5BConnection::tryingHosts(const StreamHostList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void XMPP::S5BConnection::proxyConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void XMPP::S5BConnection::waitingForActivation()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void XMPP::S5BConnection::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void XMPP::S5BConnection::datagramReady()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
static const uint qt_meta_data_XMPP__S5BManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   18,   17,   17, 0x08,
      59,   46,   17,   17, 0x08,
     114,   94,   17,   17, 0x08,
     151,   17,   17,   17, 0x08,
     172,  167,   17,   17, 0x08,
     205,   17,   17,   17, 0x08,
     225,   17,   17,   17, 0x08,
     253,   17,   17,   17, 0x08,
     270,   17,   17,   17, 0x08,
     286,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__S5BManager[] = {
    "XMPP::S5BManager\0\0req\0ps_incoming(S5BRequest)\0"
    "from,dstaddr\0ps_incomingUDPSuccess(Jid,QString)\0"
    "from,sid,streamHost\0"
    "ps_incomingActivate(Jid,QString,Jid)\0"
    "item_accepted()\0list\0"
    "item_tryingHosts(StreamHostList)\0"
    "item_proxyConnect()\0item_waitingForActivation()\0"
    "item_connected()\0item_error(int)\0"
    "query_finished()\0"
};

void XMPP::S5BManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        S5BManager *_t = static_cast<S5BManager *>(_o);
        switch (_id) {
        case 0: _t->ps_incoming((*reinterpret_cast< const S5BRequest(*)>(_a[1]))); break;
        case 1: _t->ps_incomingUDPSuccess((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->ps_incomingActivate((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const Jid(*)>(_a[3]))); break;
        case 3: _t->item_accepted(); break;
        case 4: _t->item_tryingHosts((*reinterpret_cast< const StreamHostList(*)>(_a[1]))); break;
        case 5: _t->item_proxyConnect(); break;
        case 6: _t->item_waitingForActivation(); break;
        case 7: _t->item_connected(); break;
        case 8: _t->item_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->query_finished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::S5BManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::S5BManager::staticMetaObject = {
    { &BytestreamManager::staticMetaObject, qt_meta_stringdata_XMPP__S5BManager,
      qt_meta_data_XMPP__S5BManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::S5BManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::S5BManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::S5BManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__S5BManager))
        return static_cast<void*>(const_cast< S5BManager*>(this));
    return BytestreamManager::qt_metacast(_clname);
}

int XMPP::S5BManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BytestreamManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
static const uint qt_meta_data_XMPP__S5BConnector[] = {

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
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   19,   19,   19, 0x08,
      51,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__S5BConnector[] = {
    "XMPP::S5BConnector\0\0result(bool)\0"
    "item_result(bool)\0t_timeout()\0"
};

void XMPP::S5BConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        S5BConnector *_t = static_cast<S5BConnector *>(_o);
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->item_result((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->t_timeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::S5BConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::S5BConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__S5BConnector,
      qt_meta_data_XMPP__S5BConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::S5BConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::S5BConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::S5BConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__S5BConnector))
        return static_cast<void*>(const_cast< S5BConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::S5BConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void XMPP::S5BConnector::result(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_XMPP__S5BServer[] = {

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
      17,   16,   16,   16, 0x08,
      67,   36,   16,   16, 0x08,
     123,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__S5BServer[] = {
    "XMPP::S5BServer\0\0ss_incomingReady()\0"
    "host,port,addr,sourcePort,data\0"
    "ss_incomingUDP(QString,int,QHostAddress,int,QByteArray)\0"
    "item_result(bool)\0"
};

void XMPP::S5BServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        S5BServer *_t = static_cast<S5BServer *>(_o);
        switch (_id) {
        case 0: _t->ss_incomingReady(); break;
        case 1: _t->ss_incomingUDP((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QHostAddress(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5]))); break;
        case 2: _t->item_result((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::S5BServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::S5BServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__S5BServer,
      qt_meta_data_XMPP__S5BServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::S5BServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::S5BServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::S5BServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__S5BServer))
        return static_cast<void*>(const_cast< S5BServer*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::S5BServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_XMPP__JT_S5B[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_S5B[] = {
    "XMPP::JT_S5B\0\0t_timeout()\0"
};

void XMPP::JT_S5B::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JT_S5B *_t = static_cast<JT_S5B *>(_o);
        switch (_id) {
        case 0: _t->t_timeout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_S5B::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_S5B::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_S5B,
      qt_meta_data_XMPP__JT_S5B, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_S5B::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_S5B::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_S5B::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_S5B))
        return static_cast<void*>(const_cast< JT_S5B*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_S5B::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_XMPP__JT_PushS5B[] = {

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
      22,   18,   17,   17, 0x05,
      56,   43,   17,   17, 0x05,
     108,   88,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_PushS5B[] = {
    "XMPP::JT_PushS5B\0\0req\0incoming(S5BRequest)\0"
    "from,dstaddr\0incomingUDPSuccess(Jid,QString)\0"
    "from,sid,streamHost\0"
    "incomingActivate(Jid,QString,Jid)\0"
};

void XMPP::JT_PushS5B::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JT_PushS5B *_t = static_cast<JT_PushS5B *>(_o);
        switch (_id) {
        case 0: _t->incoming((*reinterpret_cast< const S5BRequest(*)>(_a[1]))); break;
        case 1: _t->incomingUDPSuccess((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->incomingActivate((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const Jid(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::JT_PushS5B::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_PushS5B::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_PushS5B,
      qt_meta_data_XMPP__JT_PushS5B, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_PushS5B::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_PushS5B::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_PushS5B::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_PushS5B))
        return static_cast<void*>(const_cast< JT_PushS5B*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_PushS5B::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMPP::JT_PushS5B::incoming(const S5BRequest & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMPP::JT_PushS5B::incomingUDPSuccess(const Jid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMPP::JT_PushS5B::incomingActivate(const Jid & _t1, const QString & _t2, const Jid & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
