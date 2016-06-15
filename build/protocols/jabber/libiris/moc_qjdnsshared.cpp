/****************************************************************************
** Meta object code from reading C++ file 'qjdnsshared.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/jdns/include/jdns/qjdnsshared.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjdnsshared.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QJDnsSharedDebug[] = {

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
      18,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QJDnsSharedDebug[] = {
    "QJDnsSharedDebug\0\0readyRead()\0"
};

void QJDnsSharedDebug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QJDnsSharedDebug *_t = static_cast<QJDnsSharedDebug *>(_o);
        switch (_id) {
        case 0: _t->readyRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QJDnsSharedDebug::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJDnsSharedDebug::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJDnsSharedDebug,
      qt_meta_data_QJDnsSharedDebug, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJDnsSharedDebug::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJDnsSharedDebug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJDnsSharedDebug::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJDnsSharedDebug))
        return static_cast<void*>(const_cast< QJDnsSharedDebug*>(this));
    return QObject::qt_metacast(_clname);
}

int QJDnsSharedDebug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QJDnsSharedDebug::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QJDnsSharedRequest[] = {

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

static const char qt_meta_stringdata_QJDnsSharedRequest[] = {
    "QJDnsSharedRequest\0\0resultsReady()\0"
};

void QJDnsSharedRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QJDnsSharedRequest *_t = static_cast<QJDnsSharedRequest *>(_o);
        switch (_id) {
        case 0: _t->resultsReady(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QJDnsSharedRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJDnsSharedRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJDnsSharedRequest,
      qt_meta_data_QJDnsSharedRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJDnsSharedRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJDnsSharedRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJDnsSharedRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJDnsSharedRequest))
        return static_cast<void*>(const_cast< QJDnsSharedRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int QJDnsSharedRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QJDnsSharedRequest::resultsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QJDnsShared[] = {

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
      13,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QJDnsShared[] = {
    "QJDnsShared\0\0shutdownFinished()\0"
};

void QJDnsShared::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QJDnsShared *_t = static_cast<QJDnsShared *>(_o);
        switch (_id) {
        case 0: _t->shutdownFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QJDnsShared::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJDnsShared::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJDnsShared,
      qt_meta_data_QJDnsShared, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJDnsShared::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJDnsShared::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJDnsShared::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJDnsShared))
        return static_cast<void*>(const_cast< QJDnsShared*>(this));
    return QObject::qt_metacast(_clname);
}

int QJDnsShared::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QJDnsShared::shutdownFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
