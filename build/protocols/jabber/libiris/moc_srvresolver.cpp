/****************************************************************************
** Meta object code from reading C++ file 'srvresolver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../protocols/jabber/libiris/src/irisnet/noncore/legacy/srvresolver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'srvresolver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SrvResolver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   12,   12,   12, 0x08,
      72,   12,   12,   12, 0x08,
     111,   12,   12,   12, 0x08,
     123,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SrvResolver[] = {
    "SrvResolver\0\0resultsReady()\0"
    "nndns_resultsReady(QList<XMPP::NameRecord>)\0"
    "nndns_error(XMPP::NameResolver::Error)\0"
    "ndns_done()\0t_timeout()\0"
};

void SrvResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SrvResolver *_t = static_cast<SrvResolver *>(_o);
        switch (_id) {
        case 0: _t->resultsReady(); break;
        case 1: _t->nndns_resultsReady((*reinterpret_cast< const QList<XMPP::NameRecord>(*)>(_a[1]))); break;
        case 2: _t->nndns_error((*reinterpret_cast< XMPP::NameResolver::Error(*)>(_a[1]))); break;
        case 3: _t->ndns_done(); break;
        case 4: _t->t_timeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SrvResolver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SrvResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SrvResolver,
      qt_meta_data_SrvResolver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SrvResolver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SrvResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SrvResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SrvResolver))
        return static_cast<void*>(const_cast< SrvResolver*>(this));
    return QObject::qt_metacast(_clname);
}

int SrvResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SrvResolver::resultsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
