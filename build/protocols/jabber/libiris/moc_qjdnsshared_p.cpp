/****************************************************************************
** Meta object code from reading C++ file 'qjdnsshared_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/jdns/src/qjdns/qjdnsshared_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjdnsshared_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JDnsShutdownAgent[] = {

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
      19,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_JDnsShutdownAgent[] = {
    "JDnsShutdownAgent\0\0started()\0"
};

void JDnsShutdownAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JDnsShutdownAgent *_t = static_cast<JDnsShutdownAgent *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData JDnsShutdownAgent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JDnsShutdownAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JDnsShutdownAgent,
      qt_meta_data_JDnsShutdownAgent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JDnsShutdownAgent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JDnsShutdownAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JDnsShutdownAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JDnsShutdownAgent))
        return static_cast<void*>(const_cast< JDnsShutdownAgent*>(this));
    return QObject::qt_metacast(_clname);
}

int JDnsShutdownAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void JDnsShutdownAgent::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_JDnsShutdownWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_JDnsShutdownWorker[] = {
    "JDnsShutdownWorker\0\0finished()\0"
    "jdns_shutdownFinished()\0"
};

void JDnsShutdownWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JDnsShutdownWorker *_t = static_cast<JDnsShutdownWorker *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->jdns_shutdownFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData JDnsShutdownWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JDnsShutdownWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JDnsShutdownWorker,
      qt_meta_data_JDnsShutdownWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JDnsShutdownWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JDnsShutdownWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JDnsShutdownWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JDnsShutdownWorker))
        return static_cast<void*>(const_cast< JDnsShutdownWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int JDnsShutdownWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void JDnsShutdownWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_JDnsShutdown[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      30,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_JDnsShutdown[] = {
    "JDnsShutdown\0\0agent_started()\0"
    "worker_finished()\0"
};

void JDnsShutdown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JDnsShutdown *_t = static_cast<JDnsShutdown *>(_o);
        switch (_id) {
        case 0: _t->agent_started(); break;
        case 1: _t->worker_finished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData JDnsShutdown::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JDnsShutdown::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_JDnsShutdown,
      qt_meta_data_JDnsShutdown, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JDnsShutdown::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JDnsShutdown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JDnsShutdown::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JDnsShutdown))
        return static_cast<void*>(const_cast< JDnsShutdown*>(this));
    return QThread::qt_metacast(_clname);
}

int JDnsShutdown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_QJDnsSharedDebugPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QJDnsSharedDebugPrivate[] = {
    "QJDnsSharedDebugPrivate\0\0doUpdate()\0"
};

void QJDnsSharedDebugPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QJDnsSharedDebugPrivate *_t = static_cast<QJDnsSharedDebugPrivate *>(_o);
        switch (_id) {
        case 0: _t->doUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QJDnsSharedDebugPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJDnsSharedDebugPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJDnsSharedDebugPrivate,
      qt_meta_data_QJDnsSharedDebugPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJDnsSharedDebugPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJDnsSharedDebugPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJDnsSharedDebugPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJDnsSharedDebugPrivate))
        return static_cast<void*>(const_cast< QJDnsSharedDebugPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QJDnsSharedDebugPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_QJDnsSharedPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      47,   36,   19,   19, 0x08,
      89,   86,   19,   19, 0x08,
     114,  109,   19,   19, 0x08,
     143,   19,   19,   19, 0x08,
     167,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QJDnsSharedPrivate[] = {
    "QJDnsSharedPrivate\0\0late_shutdown()\0"
    "id,results\0jdns_resultsReady(int,QJDns::Response)\0"
    "id\0jdns_published(int)\0id,e\0"
    "jdns_error(int,QJDns::Error)\0"
    "jdns_shutdownFinished()\0jdns_debugLinesReady()\0"
};

void QJDnsSharedPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QJDnsSharedPrivate *_t = static_cast<QJDnsSharedPrivate *>(_o);
        switch (_id) {
        case 0: _t->late_shutdown(); break;
        case 1: _t->jdns_resultsReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QJDns::Response(*)>(_a[2]))); break;
        case 2: _t->jdns_published((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->jdns_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QJDns::Error(*)>(_a[2]))); break;
        case 4: _t->jdns_shutdownFinished(); break;
        case 5: _t->jdns_debugLinesReady(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QJDnsSharedPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJDnsSharedPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJDnsSharedPrivate,
      qt_meta_data_QJDnsSharedPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJDnsSharedPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJDnsSharedPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJDnsSharedPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJDnsSharedPrivate))
        return static_cast<void*>(const_cast< QJDnsSharedPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QJDnsSharedPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_QJDnsSharedRequestPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QJDnsSharedRequestPrivate[] = {
    "QJDnsSharedRequestPrivate\0\0"
    "lateTimer_timeout()\0"
};

void QJDnsSharedRequestPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QJDnsSharedRequestPrivate *_t = static_cast<QJDnsSharedRequestPrivate *>(_o);
        switch (_id) {
        case 0: _t->lateTimer_timeout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QJDnsSharedRequestPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJDnsSharedRequestPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJDnsSharedRequestPrivate,
      qt_meta_data_QJDnsSharedRequestPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJDnsSharedRequestPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJDnsSharedRequestPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJDnsSharedRequestPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJDnsSharedRequestPrivate))
        return static_cast<void*>(const_cast< QJDnsSharedRequestPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QJDnsSharedRequestPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
