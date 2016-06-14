/****************************************************************************
** Meta object code from reading C++ file 'xmpp_clientstream.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-core/xmpp_clientstream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmpp_clientstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__ClientStream[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      32,   19,   19,   19, 0x05,
      76,   60,   19,   19, 0x05,
     107,   19,   19,   19, 0x05,
     123,   19,   19,   19, 0x05,
     138,  136,   19,   19, 0x05,
     159,  136,   19,   19, 0x05,
     180,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     198,   19,   19,   19, 0x0a,
     221,   19,   19,   19, 0x08,
     236,   19,   19,   19, 0x08,
     247,   19,   19,   19, 0x08,
     269,   19,   19,   19, 0x08,
     295,   19,   19,   19, 0x08,
     309,   19,   19,   19, 0x08,
     324,   19,   19,   19, 0x08,
     348,   19,   19,   19, 0x08,
     367,   19,   19,   19, 0x08,
     382,   19,   19,   19, 0x08,
     398,  396,   19,   19, 0x08,
     445,  436,   19,   19, 0x08,
     471,   19,   19,   19, 0x08,
     519,  506,   19,   19, 0x08,
     551,   19,   19,   19, 0x08,
     572,   19,   19,   19, 0x08,
     585,   19,   19,   19, 0x08,
     598,   19,   19,   19, 0x08,
     607,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__ClientStream[] = {
    "XMPP::ClientStream\0\0connected()\0"
    "securityLayerActivated(int)\0user,pass,realm\0"
    "needAuthParams(bool,bool,bool)\0"
    "authenticated()\0warning(int)\0s\0"
    "incomingXml(QString)\0outgoingXml(QString)\0"
    "stanzasAcked(int)\0continueAfterWarning()\0"
    "cr_connected()\0cr_error()\0"
    "bs_connectionClosed()\0bs_delayedCloseFinished()\0"
    "bs_error(int)\0ss_readyRead()\0"
    "ss_bytesWritten(qint64)\0ss_tlsHandshaken()\0"
    "ss_tlsClosed()\0ss_error(int)\0,\0"
    "sasl_clientFirstStep(bool,QByteArray)\0"
    "stepData\0sasl_nextStep(QByteArray)\0"
    "sasl_needParams(QCA::SASL::Params)\0"
    "user,authzid\0sasl_authCheck(QString,QString)\0"
    "sasl_authenticated()\0sasl_error()\0"
    "sm_timeout()\0doNoop()\0doReadyRead()\0"
};

void XMPP::ClientStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClientStream *_t = static_cast<ClientStream *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->securityLayerActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->needAuthParams((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->authenticated(); break;
        case 4: _t->warning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->incomingXml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->outgoingXml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->stanzasAcked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->continueAfterWarning(); break;
        case 9: _t->cr_connected(); break;
        case 10: _t->cr_error(); break;
        case 11: _t->bs_connectionClosed(); break;
        case 12: _t->bs_delayedCloseFinished(); break;
        case 13: _t->bs_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->ss_readyRead(); break;
        case 15: _t->ss_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 16: _t->ss_tlsHandshaken(); break;
        case 17: _t->ss_tlsClosed(); break;
        case 18: _t->ss_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->sasl_clientFirstStep((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 20: _t->sasl_nextStep((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 21: _t->sasl_needParams((*reinterpret_cast< const QCA::SASL::Params(*)>(_a[1]))); break;
        case 22: _t->sasl_authCheck((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->sasl_authenticated(); break;
        case 24: _t->sasl_error(); break;
        case 25: _t->sm_timeout(); break;
        case 26: _t->doNoop(); break;
        case 27: _t->doReadyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::ClientStream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::ClientStream::staticMetaObject = {
    { &Stream::staticMetaObject, qt_meta_stringdata_XMPP__ClientStream,
      qt_meta_data_XMPP__ClientStream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::ClientStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::ClientStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::ClientStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__ClientStream))
        return static_cast<void*>(const_cast< ClientStream*>(this));
    return Stream::qt_metacast(_clname);
}

int XMPP::ClientStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Stream::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void XMPP::ClientStream::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::ClientStream::securityLayerActivated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMPP::ClientStream::needAuthParams(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XMPP::ClientStream::authenticated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void XMPP::ClientStream::warning(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void XMPP::ClientStream::incomingXml(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void XMPP::ClientStream::outgoingXml(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void XMPP::ClientStream::stanzasAcked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
