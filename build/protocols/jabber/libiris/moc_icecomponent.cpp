/****************************************************************************
** Meta object code from reading C++ file 'icecomponent.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/irisnet/noncore/icecomponent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icecomponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__IceComponent[] = {

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
      22,   20,   19,   19, 0x05,
      68,   20,   19,   19, 0x05,
     116,   19,   19,   19, 0x05,
     132,   19,   19,   19, 0x05,
     147,  142,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__IceComponent[] = {
    "XMPP::IceComponent\0\0c\0"
    "candidateAdded(XMPP::IceComponent::Candidate)\0"
    "candidateRemoved(XMPP::IceComponent::Candidate)\0"
    "localFinished()\0stopped()\0line\0"
    "debugLine(QString)\0"
};

void XMPP::IceComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IceComponent *_t = static_cast<IceComponent *>(_o);
        switch (_id) {
        case 0: _t->candidateAdded((*reinterpret_cast< const XMPP::IceComponent::Candidate(*)>(_a[1]))); break;
        case 1: _t->candidateRemoved((*reinterpret_cast< const XMPP::IceComponent::Candidate(*)>(_a[1]))); break;
        case 2: _t->localFinished(); break;
        case 3: _t->stopped(); break;
        case 4: _t->debugLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::IceComponent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::IceComponent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__IceComponent,
      qt_meta_data_XMPP__IceComponent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::IceComponent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::IceComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::IceComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__IceComponent))
        return static_cast<void*>(const_cast< IceComponent*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::IceComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMPP::IceComponent::candidateAdded(const XMPP::IceComponent::Candidate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMPP::IceComponent::candidateRemoved(const XMPP::IceComponent::Candidate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMPP::IceComponent::localFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void XMPP::IceComponent::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void XMPP::IceComponent::debugLine(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
