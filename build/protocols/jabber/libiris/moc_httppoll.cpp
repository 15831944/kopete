/****************************************************************************
** Meta object code from reading C++ file 'httppoll.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/irisnet/noncore/cutestuff/httppoll.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httppoll.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HttpPoll[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      22,    9,    9,    9, 0x05,
      36,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,    9,    9,    9, 0x08,
      65,    9,    9,    9, 0x08,
      81,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HttpPoll[] = {
    "HttpPoll\0\0connected()\0syncStarted()\0"
    "syncFinished()\0http_result()\0"
    "http_error(int)\0do_sync()\0"
};

void HttpPoll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HttpPoll *_t = static_cast<HttpPoll *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->syncStarted(); break;
        case 2: _t->syncFinished(); break;
        case 3: _t->http_result(); break;
        case 4: _t->http_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->do_sync(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HttpPoll::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HttpPoll::staticMetaObject = {
    { &ByteStream::staticMetaObject, qt_meta_stringdata_HttpPoll,
      qt_meta_data_HttpPoll, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HttpPoll::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HttpPoll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HttpPoll::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HttpPoll))
        return static_cast<void*>(const_cast< HttpPoll*>(this));
    return ByteStream::qt_metacast(_clname);
}

int HttpPoll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ByteStream::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void HttpPoll::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HttpPoll::syncStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void HttpPoll::syncFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_HttpProxyPost[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      24,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   14,   14,   14, 0x08,
      52,   14,   14,   14, 0x08,
      76,   14,   14,   14, 0x08,
      93,   14,   14,   14, 0x08,
     109,   14,   14,   14, 0x08,
     125,   14,   14,   14, 0x08,
     149,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HttpProxyPost[] = {
    "HttpProxyPost\0\0result()\0error(int)\0"
    "sock_connected()\0sock_connectionClosed()\0"
    "sock_readyRead()\0sock_error(int)\0"
    "tls_readyRead()\0tls_readyReadOutgoing()\0"
    "tls_error()\0"
};

void HttpProxyPost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HttpProxyPost *_t = static_cast<HttpProxyPost *>(_o);
        switch (_id) {
        case 0: _t->result(); break;
        case 1: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sock_connected(); break;
        case 3: _t->sock_connectionClosed(); break;
        case 4: _t->sock_readyRead(); break;
        case 5: _t->sock_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->tls_readyRead(); break;
        case 7: _t->tls_readyReadOutgoing(); break;
        case 8: _t->tls_error(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HttpProxyPost::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HttpProxyPost::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpProxyPost,
      qt_meta_data_HttpProxyPost, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HttpProxyPost::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HttpProxyPost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HttpProxyPost::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HttpProxyPost))
        return static_cast<void*>(const_cast< HttpProxyPost*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpProxyPost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void HttpProxyPost::result()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HttpProxyPost::error(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_HttpProxyGetStream[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      37,   33,   19,   19, 0x05,
      59,   19,   19,   19, 0x05,
      70,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   19,   19,   19, 0x08,
      98,   19,   19,   19, 0x08,
     122,   19,   19,   19, 0x08,
     139,   19,   19,   19, 0x08,
     155,   19,   19,   19, 0x08,
     171,   19,   19,   19, 0x08,
     195,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HttpProxyGetStream[] = {
    "HttpProxyGetStream\0\0handshaken()\0buf\0"
    "dataReady(QByteArray)\0finished()\0"
    "error(int)\0sock_connected()\0"
    "sock_connectionClosed()\0sock_readyRead()\0"
    "sock_error(int)\0tls_readyRead()\0"
    "tls_readyReadOutgoing()\0tls_error()\0"
};

void HttpProxyGetStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HttpProxyGetStream *_t = static_cast<HttpProxyGetStream *>(_o);
        switch (_id) {
        case 0: _t->handshaken(); break;
        case 1: _t->dataReady((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sock_connected(); break;
        case 5: _t->sock_connectionClosed(); break;
        case 6: _t->sock_readyRead(); break;
        case 7: _t->sock_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->tls_readyRead(); break;
        case 9: _t->tls_readyReadOutgoing(); break;
        case 10: _t->tls_error(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HttpProxyGetStream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HttpProxyGetStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpProxyGetStream,
      qt_meta_data_HttpProxyGetStream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HttpProxyGetStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HttpProxyGetStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HttpProxyGetStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HttpProxyGetStream))
        return static_cast<void*>(const_cast< HttpProxyGetStream*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpProxyGetStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void HttpProxyGetStream::handshaken()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HttpProxyGetStream::dataReady(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HttpProxyGetStream::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void HttpProxyGetStream::error(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
