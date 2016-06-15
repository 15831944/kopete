/****************************************************************************
** Meta object code from reading C++ file 'securestream.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-core/securestream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'securestream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SecureStream[] = {

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
      14,   13,   13,   13, 0x05,
      30,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   13,   13,   13, 0x08,
      57,   13,   13,   13, 0x08,
      81,   13,   13,   13, 0x08,
     103,   13,   13,   13, 0x08,
     131,   13,   13,   13, 0x08,
     159,   13,   13,   13, 0x08,
     187,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SecureStream[] = {
    "SecureStream\0\0tlsHandshaken()\0tlsClosed()\0"
    "bs_readyRead()\0bs_bytesWritten(qint64)\0"
    "layer_tlsHandshaken()\0layer_tlsClosed(QByteArray)\0"
    "layer_readyRead(QByteArray)\0"
    "layer_needWrite(QByteArray)\0"
    "layer_error(int)\0"
};

void SecureStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SecureStream *_t = static_cast<SecureStream *>(_o);
        switch (_id) {
        case 0: _t->tlsHandshaken(); break;
        case 1: _t->tlsClosed(); break;
        case 2: _t->bs_readyRead(); break;
        case 3: _t->bs_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->layer_tlsHandshaken(); break;
        case 5: _t->layer_tlsClosed((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->layer_readyRead((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 7: _t->layer_needWrite((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->layer_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SecureStream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SecureStream::staticMetaObject = {
    { &ByteStream::staticMetaObject, qt_meta_stringdata_SecureStream,
      qt_meta_data_SecureStream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SecureStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SecureStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SecureStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SecureStream))
        return static_cast<void*>(const_cast< SecureStream*>(this));
    return ByteStream::qt_metacast(_clname);
}

int SecureStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ByteStream::qt_metacall(_c, _id, _a);
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
void SecureStream::tlsHandshaken()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SecureStream::tlsClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
