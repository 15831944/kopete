/****************************************************************************
** Meta object code from reading C++ file 'xmpp_client.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-im/xmpp_client.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmpp_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__Client[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      26,   13,   13,   13, 0x05,
      44,   41,   13,   13, 0x05,
      84,   13,   13,   13, 0x05,
     112,   13,   13,   13, 0x05,
     142,   13,   13,   13, 0x05,
     174,  172,   13,   13, 0x05,
     206,  172,   13,   13, 0x05,
     240,   41,   13,   13, 0x05,
     271,   41,   13,   13, 0x05,
     305,   13,   13,   13, 0x05,
     330,   13,   13,   13, 0x05,
     349,   13,   13,   13, 0x05,
     370,   13,   13,   13, 0x05,
     391,   13,   13,   13, 0x05,
     412,   13,   13,   13, 0x05,
     431,  172,   13,   13, 0x05,
     461,   41,   13,   13, 0x05,
     493,   13,   13,   13, 0x05,
     511,   13,   13,   13, 0x05,
     531,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     549,   13,   13,   13, 0x08,
     566,   13,   13,   13, 0x08,
     584,   13,   13,   13, 0x08,
     611,   13,   13,   13, 0x08,
     638,   13,   13,   13, 0x08,
     666,   41,   13,   13, 0x08,
     702,  172,   13,   13, 0x08,
     725,   13,   13,   13, 0x08,
     744,   13,   13,   13, 0x08,
     761,   13,   13,   13, 0x08,
     781,   13,   13,   13, 0x08,
     801,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__Client[] = {
    "XMPP::Client\0\0activated()\0disconnected()\0"
    ",,\0rosterRequestFinished(bool,int,QString)\0"
    "rosterItemAdded(RosterItem)\0"
    "rosterItemUpdated(RosterItem)\0"
    "rosterItemRemoved(RosterItem)\0,\0"
    "resourceAvailable(Jid,Resource)\0"
    "resourceUnavailable(Jid,Resource)\0"
    "presenceError(Jid,int,QString)\0"
    "subscription(Jid,QString,QString)\0"
    "messageReceived(Message)\0debugText(QString)\0"
    "xmlIncoming(QString)\0xmlOutgoing(QString)\0"
    "groupChatJoined(Jid)\0groupChatLeft(Jid)\0"
    "groupChatPresence(Jid,Status)\0"
    "groupChatError(Jid,int,QString)\0"
    "incomingJidLink()\0beginImportRoster()\0"
    "endImportRoster()\0streamError(int)\0"
    "streamReadyRead()\0streamIncomingXml(QString)\0"
    "streamOutgoingXml(QString)\0"
    "slotRosterRequestFinished()\0"
    "ppSubscription(Jid,QString,QString)\0"
    "ppPresence(Jid,Status)\0pmMessage(Message)\0"
    "prRoster(Roster)\0s5b_incomingReady()\0"
    "ibb_incomingReady()\0handleSMAckResponse(int)\0"
};

void XMPP::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Client *_t = static_cast<Client *>(_o);
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->rosterRequestFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->rosterItemAdded((*reinterpret_cast< const RosterItem(*)>(_a[1]))); break;
        case 4: _t->rosterItemUpdated((*reinterpret_cast< const RosterItem(*)>(_a[1]))); break;
        case 5: _t->rosterItemRemoved((*reinterpret_cast< const RosterItem(*)>(_a[1]))); break;
        case 6: _t->resourceAvailable((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Resource(*)>(_a[2]))); break;
        case 7: _t->resourceUnavailable((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Resource(*)>(_a[2]))); break;
        case 8: _t->presenceError((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->subscription((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->messageReceived((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 11: _t->debugText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->xmlIncoming((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->xmlOutgoing((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->groupChatJoined((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 15: _t->groupChatLeft((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 16: _t->groupChatPresence((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Status(*)>(_a[2]))); break;
        case 17: _t->groupChatError((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 18: _t->incomingJidLink(); break;
        case 19: _t->beginImportRoster(); break;
        case 20: _t->endImportRoster(); break;
        case 21: _t->streamError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->streamReadyRead(); break;
        case 23: _t->streamIncomingXml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->streamOutgoingXml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->slotRosterRequestFinished(); break;
        case 26: _t->ppSubscription((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 27: _t->ppPresence((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Status(*)>(_a[2]))); break;
        case 28: _t->pmMessage((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 29: _t->prRoster((*reinterpret_cast< const Roster(*)>(_a[1]))); break;
        case 30: _t->s5b_incomingReady(); break;
        case 31: _t->ibb_incomingReady(); break;
        case 32: _t->handleSMAckResponse((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::Client::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::Client::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__Client,
      qt_meta_data_XMPP__Client, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::Client::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__Client))
        return static_cast<void*>(const_cast< Client*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void XMPP::Client::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::Client::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void XMPP::Client::rosterRequestFinished(bool _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XMPP::Client::rosterItemAdded(const RosterItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XMPP::Client::rosterItemUpdated(const RosterItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void XMPP::Client::rosterItemRemoved(const RosterItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void XMPP::Client::resourceAvailable(const Jid & _t1, const Resource & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void XMPP::Client::resourceUnavailable(const Jid & _t1, const Resource & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void XMPP::Client::presenceError(const Jid & _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void XMPP::Client::subscription(const Jid & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void XMPP::Client::messageReceived(const Message & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void XMPP::Client::debugText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void XMPP::Client::xmlIncoming(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void XMPP::Client::xmlOutgoing(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void XMPP::Client::groupChatJoined(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void XMPP::Client::groupChatLeft(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void XMPP::Client::groupChatPresence(const Jid & _t1, const Status & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void XMPP::Client::groupChatError(const Jid & _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void XMPP::Client::incomingJidLink()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void XMPP::Client::beginImportRoster()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void XMPP::Client::endImportRoster()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}
QT_END_MOC_NAMESPACE
