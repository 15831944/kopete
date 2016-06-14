/****************************************************************************
** Meta object code from reading C++ file 'translatorpreferences.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/translator/translatorpreferences.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'translatorpreferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TranslatorPreferences[] = {

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
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   22,   22,   22, 0x08,
      65,   22,   22,   22, 0x08,
      80,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TranslatorPreferences[] = {
    "TranslatorPreferences\0\0preferencesChanged()\0"
    "updateLanguageList()\0slotModified()\0"
    "slotShowPreviousChanged(bool)\0"
};

void TranslatorPreferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TranslatorPreferences *_t = static_cast<TranslatorPreferences *>(_o);
        switch (_id) {
        case 0: _t->preferencesChanged(); break;
        case 1: _t->updateLanguageList(); break;
        case 2: _t->slotModified(); break;
        case 3: _t->slotShowPreviousChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TranslatorPreferences::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TranslatorPreferences::staticMetaObject = {
    { &KCModule::staticMetaObject, qt_meta_stringdata_TranslatorPreferences,
      qt_meta_data_TranslatorPreferences, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TranslatorPreferences::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TranslatorPreferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TranslatorPreferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TranslatorPreferences))
        return static_cast<void*>(const_cast< TranslatorPreferences*>(this));
    return KCModule::qt_metacast(_clname);
}

int TranslatorPreferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCModule::qt_metacall(_c, _id, _a);
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
void TranslatorPreferences::preferencesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
