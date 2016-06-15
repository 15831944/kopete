/****************************************************************************
** Meta object code from reading C++ file 'bsocket.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/irisnet/noncore/cutestuff/bsocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      21,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,    8,    8,    8, 0x08,
      48,    8,    8,    8, 0x08,
      60,    8,    8,    8, 0x08,
      75,    8,    8,    8, 0x08,
      99,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BSocket[] = {
    "BSocket\0\0hostFound()\0connected()\0"
    "qs_connected()\0qs_closed()\0qs_readyRead()\0"
    "qs_bytesWritten(qint64)\0"
    "qs_error(QAbstractSocket::SocketError)\0"
};

void BSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BSocket *_t = static_cast<BSocket *>(_o);
        switch (_id) {
        case 0: _t->hostFound(); break;
        case 1: _t->connected(); break;
        case 2: _t->qs_connected(); break;
        case 3: _t->qs_closed(); break;
        case 4: _t->qs_readyRead(); break;
        case 5: _t->qs_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->qs_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BSocket::staticMetaObject = {
    { &ByteStream::staticMetaObject, qt_meta_stringdata_BSocket,
      qt_meta_data_BSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BSocket))
        return static_cast<void*>(const_cast< BSocket*>(this));
    return ByteStream::qt_metacast(_clname);
}

int BSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ByteStream::qt_metacall(_c, _id, _a);
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
void BSocket::hostFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
