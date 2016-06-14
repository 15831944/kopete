/****************************************************************************
** Meta object code from reading C++ file 'netnames.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/irisnet/corelib/netnames.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netnames.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__NameResolver[] = {

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
      28,   20,   19,   19, 0x05,
      68,   66,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__NameResolver[] = {
    "XMPP::NameResolver\0\0results\0"
    "resultsReady(QList<XMPP::NameRecord>)\0"
    "e\0error(XMPP::NameResolver::Error)\0"
};

void XMPP::NameResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NameResolver *_t = static_cast<NameResolver *>(_o);
        switch (_id) {
        case 0: _t->resultsReady((*reinterpret_cast< const QList<XMPP::NameRecord>(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< XMPP::NameResolver::Error(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::NameResolver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::NameResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__NameResolver,
      qt_meta_data_XMPP__NameResolver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::NameResolver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::NameResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::NameResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__NameResolver))
        return static_cast<void*>(const_cast< NameResolver*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::NameResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMPP::NameResolver::resultsReady(const QList<XMPP::NameRecord> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMPP::NameResolver::error(XMPP::NameResolver::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_XMPP__ServiceBrowser[] = {

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
      31,   22,   21,   21, 0x05,
      72,   22,   21,   21, 0x05,
     115,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__ServiceBrowser[] = {
    "XMPP::ServiceBrowser\0\0instance\0"
    "instanceAvailable(XMPP::ServiceInstance)\0"
    "instanceUnavailable(XMPP::ServiceInstance)\0"
    "error()\0"
};

void XMPP::ServiceBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ServiceBrowser *_t = static_cast<ServiceBrowser *>(_o);
        switch (_id) {
        case 0: _t->instanceAvailable((*reinterpret_cast< const XMPP::ServiceInstance(*)>(_a[1]))); break;
        case 1: _t->instanceUnavailable((*reinterpret_cast< const XMPP::ServiceInstance(*)>(_a[1]))); break;
        case 2: _t->error(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::ServiceBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::ServiceBrowser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__ServiceBrowser,
      qt_meta_data_XMPP__ServiceBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::ServiceBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::ServiceBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::ServiceBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__ServiceBrowser))
        return static_cast<void*>(const_cast< ServiceBrowser*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::ServiceBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMPP::ServiceBrowser::instanceAvailable(const XMPP::ServiceInstance & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMPP::ServiceBrowser::instanceUnavailable(const XMPP::ServiceInstance & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMPP::ServiceBrowser::error()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_XMPP__ServiceResolver[] = {

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
      36,   23,   22,   22, 0x05,
      70,   22,   22,   22, 0x05,
     106,   22,   22,   22, 0x05,
     117,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     129,   22,   22,   22, 0x08,
     171,   22,   22,   22, 0x08,
     215,   22,   22,   22, 0x08,
     258,   22,   22,   22, 0x08,
     303,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__ServiceResolver[] = {
    "XMPP::ServiceResolver\0\0address,port\0"
    "resultReady(QHostAddress,quint16)\0"
    "error(XMPP::ServiceResolver::Error)\0"
    "srvReady()\0srvFailed()\0"
    "handle_srv_ready(QList<XMPP::NameRecord>)\0"
    "handle_srv_error(XMPP::NameResolver::Error)\0"
    "handle_host_ready(QList<XMPP::NameRecord>)\0"
    "handle_host_error(XMPP::NameResolver::Error)\0"
    "handle_host_fallback_error(XMPP::NameResolver::Error)\0"
};

void XMPP::ServiceResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ServiceResolver *_t = static_cast<ServiceResolver *>(_o);
        switch (_id) {
        case 0: _t->resultReady((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 1: _t->error((*reinterpret_cast< XMPP::ServiceResolver::Error(*)>(_a[1]))); break;
        case 2: _t->srvReady(); break;
        case 3: _t->srvFailed(); break;
        case 4: _t->handle_srv_ready((*reinterpret_cast< const QList<XMPP::NameRecord>(*)>(_a[1]))); break;
        case 5: _t->handle_srv_error((*reinterpret_cast< XMPP::NameResolver::Error(*)>(_a[1]))); break;
        case 6: _t->handle_host_ready((*reinterpret_cast< const QList<XMPP::NameRecord>(*)>(_a[1]))); break;
        case 7: _t->handle_host_error((*reinterpret_cast< XMPP::NameResolver::Error(*)>(_a[1]))); break;
        case 8: _t->handle_host_fallback_error((*reinterpret_cast< XMPP::NameResolver::Error(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::ServiceResolver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::ServiceResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__ServiceResolver,
      qt_meta_data_XMPP__ServiceResolver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::ServiceResolver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::ServiceResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::ServiceResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__ServiceResolver))
        return static_cast<void*>(const_cast< ServiceResolver*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::ServiceResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMPP::ServiceResolver::resultReady(const QHostAddress & _t1, quint16 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMPP::ServiceResolver::error(XMPP::ServiceResolver::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMPP::ServiceResolver::srvReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void XMPP::ServiceResolver::srvFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_XMPP__ServiceLocalPublisher[] = {

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
      29,   28,   28,   28, 0x05,
      43,   41,   28,   28, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__ServiceLocalPublisher[] = {
    "XMPP::ServiceLocalPublisher\0\0published()\0"
    "e\0error(XMPP::ServiceLocalPublisher::Error)\0"
};

void XMPP::ServiceLocalPublisher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ServiceLocalPublisher *_t = static_cast<ServiceLocalPublisher *>(_o);
        switch (_id) {
        case 0: _t->published(); break;
        case 1: _t->error((*reinterpret_cast< XMPP::ServiceLocalPublisher::Error(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::ServiceLocalPublisher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::ServiceLocalPublisher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__ServiceLocalPublisher,
      qt_meta_data_XMPP__ServiceLocalPublisher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::ServiceLocalPublisher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::ServiceLocalPublisher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::ServiceLocalPublisher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__ServiceLocalPublisher))
        return static_cast<void*>(const_cast< ServiceLocalPublisher*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::ServiceLocalPublisher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMPP::ServiceLocalPublisher::published()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::ServiceLocalPublisher::error(XMPP::ServiceLocalPublisher::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
