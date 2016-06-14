/****************************************************************************
** Meta object code from reading C++ file 'stunallocate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/irisnet/noncore/stunallocate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stunallocate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMPP__StunAllocate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      30,   19,   19,   19, 0x05,
      42,   40,   19,   19, 0x05,
      75,   19,   19,   19, 0x05,
      96,   19,   19,   19, 0x05,
     119,  114,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XMPP__StunAllocate[] = {
    "XMPP::StunAllocate\0\0started()\0stopped()\0"
    "e\0error(XMPP::StunAllocate::Error)\0"
    "permissionsChanged()\0channelsChanged()\0"
    "line\0debugLine(QString)\0"
};

void XMPP::StunAllocate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StunAllocate *_t = static_cast<StunAllocate *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->stopped(); break;
        case 2: _t->error((*reinterpret_cast< XMPP::StunAllocate::Error(*)>(_a[1]))); break;
        case 3: _t->permissionsChanged(); break;
        case 4: _t->channelsChanged(); break;
        case 5: _t->debugLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMPP::StunAllocate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMPP::StunAllocate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XMPP__StunAllocate,
      qt_meta_data_XMPP__StunAllocate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMPP::StunAllocate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMPP::StunAllocate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMPP::StunAllocate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMPP__StunAllocate))
        return static_cast<void*>(const_cast< StunAllocate*>(this));
    return QObject::qt_metacast(_clname);
}

int XMPP::StunAllocate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void XMPP::StunAllocate::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XMPP::StunAllocate::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void XMPP::StunAllocate::error(XMPP::StunAllocate::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XMPP::StunAllocate::permissionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void XMPP::StunAllocate::channelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void XMPP::StunAllocate::debugLine(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
