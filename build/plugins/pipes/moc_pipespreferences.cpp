/****************************************************************************
** Meta object code from reading C++ file 'pipespreferences.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/pipes/pipespreferences.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pipespreferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PipesPreferences[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      28,   17,   17,   17, 0x08,
      41,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PipesPreferences[] = {
    "PipesPreferences\0\0slotAdd()\0slotRemove()\0"
    "slotListChanged()\0"
};

void PipesPreferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PipesPreferences *_t = static_cast<PipesPreferences *>(_o);
        switch (_id) {
        case 0: _t->slotAdd(); break;
        case 1: _t->slotRemove(); break;
        case 2: _t->slotListChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PipesPreferences::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PipesPreferences::staticMetaObject = {
    { &KCModule::staticMetaObject, qt_meta_stringdata_PipesPreferences,
      qt_meta_data_PipesPreferences, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PipesPreferences::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PipesPreferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PipesPreferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PipesPreferences))
        return static_cast<void*>(const_cast< PipesPreferences*>(this));
    return KCModule::qt_metacast(_clname);
}

int PipesPreferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
