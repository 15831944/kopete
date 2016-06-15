/****************************************************************************
** Meta object code from reading C++ file 'avatarwebcamdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libkopete/ui/avatarwebcamdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avatarwebcamdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kopete__UI__AvatarWebcamDialog[] = {

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
      32,   31,   31,   31, 0x08,
      53,   46,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Kopete__UI__AvatarWebcamDialog[] = {
    "Kopete::UI::AvatarWebcamDialog\0\0"
    "updateImage()\0button\0slotButtonClicked(int)\0"
};

void Kopete::UI::AvatarWebcamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AvatarWebcamDialog *_t = static_cast<AvatarWebcamDialog *>(_o);
        switch (_id) {
        case 0: _t->updateImage(); break;
        case 1: _t->slotButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kopete::UI::AvatarWebcamDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kopete::UI::AvatarWebcamDialog::staticMetaObject = {
    { &KDialog::staticMetaObject, qt_meta_stringdata_Kopete__UI__AvatarWebcamDialog,
      qt_meta_data_Kopete__UI__AvatarWebcamDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kopete::UI::AvatarWebcamDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kopete::UI::AvatarWebcamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kopete::UI::AvatarWebcamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kopete__UI__AvatarWebcamDialog))
        return static_cast<void*>(const_cast< AvatarWebcamDialog*>(this));
    return KDialog::qt_metacast(_clname);
}

int Kopete::UI::AvatarWebcamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
