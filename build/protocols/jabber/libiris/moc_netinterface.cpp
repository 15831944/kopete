/****************************************************************************
** Meta object code from reading C++ file 'netinterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/irisnet/corelib/netinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__NetInterface[] = {

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
      20,   19,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__NetInterface[] = {
    "XMPP::NetInterface\0\0unavailable()\0"
};

void XMPP::NetInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetInterface *_t = static_cast<NetInterface *>(_o);
        switch (_id) {
        case 0: _t->unavailable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::NetInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::NetInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__NetInterface,
      qt_meta_data_XMPP__NetInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::NetInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::NetInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::NetInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__NetInterface))
        return static_cast<void*>(const_cast< NetInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::NetInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void XMPP::NetInterface::unavailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_XMPP__NetInterfaceManager[] = {

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
      30,   27,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__NetInterfaceManager[] = {
    "XMPP::NetInterfaceManager\0\0id\0"
    "interfaceAvailable(QString)\0"
};

void XMPP::NetInterfaceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetInterfaceManager *_t = static_cast<NetInterfaceManager *>(_o);
        switch (_id) {
        case 0: _t->interfaceAvailable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::NetInterfaceManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::NetInterfaceManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__NetInterfaceManager,
      qt_meta_data_XMPP__NetInterfaceManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::NetInterfaceManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::NetInterfaceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::NetInterfaceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__NetInterfaceManager))
        return static_cast<void*>(const_cast< NetInterfaceManager*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::NetInterfaceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void XMPP::NetInterfaceManager::interfaceAvailable(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
