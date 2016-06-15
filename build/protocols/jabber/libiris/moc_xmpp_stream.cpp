/****************************************************************************
** Meta object code from reading C++ file 'xmpp_stream.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-core/xmpp_stream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmpp_stream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__Stream[] = {

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
      14,   13,   13,   13, 0x05,
      33,   13,   13,   13, 0x05,
      56,   13,   13,   13, 0x05,
      68,   13,   13,   13, 0x05,
      84,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__Stream[] = {
    "XMPP::Stream\0\0connectionClosed()\0"
    "delayedCloseFinished()\0readyRead()\0"
    "stanzaWritten()\0error(int)\0"
};

void XMPP::Stream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Stream *_t = static_cast<Stream *>(_o);
        switch (_id) {
        case 0: _t->connectionClosed(); break;
        case 1: _t->delayedCloseFinished(); break;
        case 2: _t->readyRead(); break;
        case 3: _t->stanzaWritten(); break;
        case 4: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::Stream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::Stream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__Stream,
      qt_meta_data_XMPP__Stream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::Stream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::Stream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::Stream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__Stream))
        return static_cast<void*>(const_cast< Stream*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::Stream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMPP::Stream::connectionClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::Stream::delayedCloseFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void XMPP::Stream::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void XMPP::Stream::stanzaWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void XMPP::Stream::error(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
