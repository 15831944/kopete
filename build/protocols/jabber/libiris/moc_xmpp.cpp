/****************************************************************************
** Meta object code from reading C++ file 'xmpp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-core/xmpp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmpp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__Connector[] = {

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
      17,   16,   16,   16, 0x05,
      29,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__Connector[] = {
    "XMPP::Connector\0\0connected()\0error()\0"
};

void XMPP::Connector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Connector *_t = static_cast<Connector *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->error(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::Connector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::Connector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__Connector,
      qt_meta_data_XMPP__Connector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::Connector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::Connector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::Connector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__Connector))
        return static_cast<void*>(const_cast< Connector*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::Connector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void XMPP::Connector::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::Connector::error()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_XMPP__AdvancedConnector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   25,   24,   24, 0x05,
      59,   51,   24,   24, 0x05,
      75,   24,   24,   24, 0x05,
      93,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,   24,   24,   24, 0x08,
     127,   24,   24,   24, 0x08,
     141,   24,   24,   24, 0x08,
     160,   24,   24,   24, 0x08,
     180,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__AdvancedConnector[] = {
    "XMPP::AdvancedConnector\0\0server\0"
    "srvLookup(QString)\0success\0srvResult(bool)\0"
    "httpSyncStarted()\0httpSyncFinished()\0"
    "bs_connected()\0bs_error(int)\0"
    "http_syncStarted()\0http_syncFinished()\0"
    "t_timeout()\0"
};

void XMPP::AdvancedConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvancedConnector *_t = static_cast<AdvancedConnector *>(_o);
        switch (_id) {
        case 0: _t->srvLookup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->srvResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->httpSyncStarted(); break;
        case 3: _t->httpSyncFinished(); break;
        case 4: _t->bs_connected(); break;
        case 5: _t->bs_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->http_syncStarted(); break;
        case 7: _t->http_syncFinished(); break;
        case 8: _t->t_timeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::AdvancedConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::AdvancedConnector::staticMetaObject = {
    { &Connector::staticMetaObject, qt_meta_stringdata_XMPP__AdvancedConnector,
      qt_meta_data_XMPP__AdvancedConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::AdvancedConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::AdvancedConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::AdvancedConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__AdvancedConnector))
        return static_cast<void*>(const_cast< AdvancedConnector*>(this));
    return Connector::qt_metacast(_clname);
}

int XMPP::AdvancedConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Connector::qt_metacall(_c, _id, _a);
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
void XMPP::AdvancedConnector::srvLookup(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMPP::AdvancedConnector::srvResult(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMPP::AdvancedConnector::httpSyncStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void XMPP::AdvancedConnector::httpSyncFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_XMPP__TLSHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      28,   17,   17,   17, 0x05,
      35,   17,   17,   17, 0x05,
      46,   44,   17,   17, 0x05,
      81,   68,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__TLSHandler[] = {
    "XMPP::TLSHandler\0\0success()\0fail()\0"
    "closed()\0a\0readyRead(QByteArray)\0"
    "a,plainBytes\0readyReadOutgoing(QByteArray,int)\0"
};

void XMPP::TLSHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TLSHandler *_t = static_cast<TLSHandler *>(_o);
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->fail(); break;
        case 2: _t->closed(); break;
        case 3: _t->readyRead((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->readyReadOutgoing((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::TLSHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::TLSHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__TLSHandler,
      qt_meta_data_XMPP__TLSHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::TLSHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::TLSHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::TLSHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__TLSHandler))
        return static_cast<void*>(const_cast< TLSHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::TLSHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void XMPP::TLSHandler::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::TLSHandler::fail()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void XMPP::TLSHandler::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void XMPP::TLSHandler::readyRead(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XMPP::TLSHandler::readyReadOutgoing(const QByteArray & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_XMPP__QCATLSHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   20,   20,   20, 0x0a,
      62,   20,   20,   20, 0x08,
      79,   20,   20,   20, 0x08,
      95,   20,   20,   20, 0x08,
     119,   20,   20,   20, 0x08,
     132,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__QCATLSHandler[] = {
    "XMPP::QCATLSHandler\0\0tlsHandshaken()\0"
    "continueAfterHandshake()\0tls_handshaken()\0"
    "tls_readyRead()\0tls_readyReadOutgoing()\0"
    "tls_closed()\0tls_error()\0"
};

void XMPP::QCATLSHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCATLSHandler *_t = static_cast<QCATLSHandler *>(_o);
        switch (_id) {
        case 0: _t->tlsHandshaken(); break;
        case 1: _t->continueAfterHandshake(); break;
        case 2: _t->tls_handshaken(); break;
        case 3: _t->tls_readyRead(); break;
        case 4: _t->tls_readyReadOutgoing(); break;
        case 5: _t->tls_closed(); break;
        case 6: _t->tls_error(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::QCATLSHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::QCATLSHandler::staticMetaObject = {
    { &TLSHandler::staticMetaObject, qt_meta_stringdata_XMPP__QCATLSHandler,
      qt_meta_data_XMPP__QCATLSHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::QCATLSHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::QCATLSHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::QCATLSHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__QCATLSHandler))
        return static_cast<void*>(const_cast< QCATLSHandler*>(this));
    return TLSHandler::qt_metacast(_clname);
}

int XMPP::QCATLSHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TLSHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void XMPP::QCATLSHandler::tlsHandshaken()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
