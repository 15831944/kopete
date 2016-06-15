/****************************************************************************
** Meta object code from reading C++ file 'filetransfer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/xmpp/xmpp-im/filetransfer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filetransfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__FileTransfer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      31,   19,   19,   19, 0x05,
      45,   43,   19,   19, 0x05,
      67,   19,   19,   19, 0x05,
      88,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   19,   19,   19, 0x08,
     113,   19,   19,   19, 0x08,
     132,   19,   19,   19, 0x08,
     158,   19,   19,   19, 0x08,
     177,   19,   19,   19, 0x08,
     205,   19,   19,   19, 0x08,
     223,   19,   19,   19, 0x08,
     234,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__FileTransfer[] = {
    "XMPP::FileTransfer\0\0accepted()\0"
    "connected()\0a\0readyRead(QByteArray)\0"
    "bytesWritten(qint64)\0error(int)\0"
    "ft_finished()\0stream_connected()\0"
    "stream_connectionClosed()\0stream_readyRead()\0"
    "stream_bytesWritten(qint64)\0"
    "stream_error(int)\0doAccept()\0reset()\0"
};

void XMPP::FileTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileTransfer *_t = static_cast<FileTransfer *>(_o);
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->connected(); break;
        case 2: _t->readyRead((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ft_finished(); break;
        case 6: _t->stream_connected(); break;
        case 7: _t->stream_connectionClosed(); break;
        case 8: _t->stream_readyRead(); break;
        case 9: _t->stream_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->stream_error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->doAccept(); break;
        case 12: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::FileTransfer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::FileTransfer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__FileTransfer,
      qt_meta_data_XMPP__FileTransfer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::FileTransfer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::FileTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::FileTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__FileTransfer))
        return static_cast<void*>(const_cast< FileTransfer*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::FileTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void XMPP::FileTransfer::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::FileTransfer::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void XMPP::FileTransfer::readyRead(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XMPP::FileTransfer::bytesWritten(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XMPP::FileTransfer::error(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_XMPP__FileTransferManager[] = {

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
      27,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   43,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__FileTransferManager[] = {
    "XMPP::FileTransferManager\0\0incomingReady()\0"
    "req\0pft_incoming(FTRequest)\0"
};

void XMPP::FileTransferManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileTransferManager *_t = static_cast<FileTransferManager *>(_o);
        switch (_id) {
        case 0: _t->incomingReady(); break;
        case 1: _t->pft_incoming((*reinterpret_cast< const FTRequest(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::FileTransferManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::FileTransferManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__FileTransferManager,
      qt_meta_data_XMPP__FileTransferManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::FileTransferManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::FileTransferManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::FileTransferManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__FileTransferManager))
        return static_cast<void*>(const_cast< FileTransferManager*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::FileTransferManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XMPP::FileTransferManager::incomingReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_XMPP__JT_FT[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_FT[] = {
    "XMPP::JT_FT\0"
};

void XMPP::JT_FT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XMPP::JT_FT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_FT::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_FT,
      qt_meta_data_XMPP__JT_FT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_FT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_FT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_FT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_FT))
        return static_cast<void*>(const_cast< JT_FT*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_FT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_XMPP__JT_PushFT[] = {

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
      21,   17,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__JT_PushFT[] = {
    "XMPP::JT_PushFT\0\0req\0incoming(FTRequest)\0"
};

void XMPP::JT_PushFT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JT_PushFT *_t = static_cast<JT_PushFT *>(_o);
        switch (_id) {
        case 0: _t->incoming((*reinterpret_cast< const FTRequest(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::JT_PushFT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::JT_PushFT::staticMetaObject = {
    { &Task::staticMetaObject, qt_meta_stringdata_XMPP__JT_PushFT,
      qt_meta_data_XMPP__JT_PushFT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::JT_PushFT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::JT_PushFT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::JT_PushFT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__JT_PushFT))
        return static_cast<void*>(const_cast< JT_PushFT*>(this));
    return Task::qt_metacast(_clname);
}

int XMPP::JT_PushFT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
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
void XMPP::JT_PushFT::incoming(const FTRequest & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
