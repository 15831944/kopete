/****************************************************************************
** Meta object code from reading C++ file 'smsactprefs.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "smsactprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smsactprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_smsActPrefsUI[] = {

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
      15,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_smsActPrefsUI[] = {
    "smsActPrefsUI\0\0languageChange()\0"
};

void smsActPrefsUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        smsActPrefsUI *_t = static_cast<smsActPrefsUI *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData smsActPrefsUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject smsActPrefsUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_smsActPrefsUI,
      qt_meta_data_smsActPrefsUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &smsActPrefsUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *smsActPrefsUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *smsActPrefsUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_smsActPrefsUI))
        return static_cast<void*>(const_cast< smsActPrefsUI*>(this));
    if (!strcmp(_clname, "Ui::smsActPrefsUI"))
        return static_cast< Ui::smsActPrefsUI*>(const_cast< smsActPrefsUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int smsActPrefsUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
