/****************************************************************************
** Meta object code from reading C++ file 'qjdns_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/jdns/src/qjdns/qjdns_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjdns_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SafeTimer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   21,   10,   10, 0x0a,
      37,   10,   10,   10, 0x0a,
      45,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SafeTimer[] = {
    "SafeTimer\0\0timeout()\0msec\0start(int)\0"
    "start()\0stop()\0"
};

void SafeTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SafeTimer *_t = static_cast<SafeTimer *>(_o);
        switch (_id) {
        case 0: _t->timeout(); break;
        case 1: _t->start((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SafeTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SafeTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SafeTimer,
      qt_meta_data_SafeTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SafeTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SafeTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SafeTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SafeTimer))
        return static_cast<void*>(const_cast< SafeTimer*>(this));
    return QObject::qt_metacast(_clname);
}

int SafeTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SafeTimer::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QJDns__Private[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      32,   15,   15,   15, 0x08,
      57,   15,   15,   15, 0x08,
      70,   15,   15,   15, 0x08,
      87,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QJDns__Private[] = {
    "QJDns::Private\0\0udp_readyRead()\0"
    "udp_bytesWritten(qint64)\0st_timeout()\0"
    "doNextStepSlot()\0doDebug()\0"
};

void QJDns::Private::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Private *_t = static_cast<Private *>(_o);
        switch (_id) {
        case 0: _t->udp_readyRead(); break;
        case 1: _t->udp_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->st_timeout(); break;
        case 3: _t->doNextStepSlot(); break;
        case 4: _t->doDebug(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QJDns::Private::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJDns::Private::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJDns__Private,
      qt_meta_data_QJDns__Private, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJDns::Private::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJDns::Private::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJDns::Private::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJDns__Private))
        return static_cast<void*>(const_cast< Private*>(this));
    return QObject::qt_metacast(_clname);
}

int QJDns::Private::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
