/****************************************************************************
** Meta object code from reading C++ file 'otrlchatinterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/otr/otrlchatinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'otrlchatinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OtrlChatInterface[] = {

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
      33,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   18,   18,   18, 0x08,
      88,   18,   18,   18, 0x08,
     123,  111,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OtrlChatInterface[] = {
    "OtrlChatInterface\0\0session,state\0"
    "goneSecure(Kopete::ChatSession*,int)\0"
    "otrlMessagePoll()\0replayStoredMessages()\0"
    "chatSession\0chatSessionDestroyed(Kopete::ChatSession*)\0"
};

void OtrlChatInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OtrlChatInterface *_t = static_cast<OtrlChatInterface *>(_o);
        switch (_id) {
        case 0: _t->goneSecure((*reinterpret_cast< Kopete::ChatSession*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->otrlMessagePoll(); break;
        case 2: _t->replayStoredMessages(); break;
        case 3: _t->chatSessionDestroyed((*reinterpret_cast< Kopete::ChatSession*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OtrlChatInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OtrlChatInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OtrlChatInterface,
      qt_meta_data_OtrlChatInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OtrlChatInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OtrlChatInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OtrlChatInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OtrlChatInterface))
        return static_cast<void*>(const_cast< OtrlChatInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int OtrlChatInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OtrlChatInterface::goneSecure(Kopete::ChatSession * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
