/****************************************************************************
** Meta object code from reading C++ file 'privacydlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../protocols/jabber/ui/privacydlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'privacydlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrivacyDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      36,   11,   11,   11, 0x09,
      64,   61,   11,   11, 0x09,
     105,   11,   11,   11, 0x09,
     130,   11,   11,   11, 0x09,
     151,   11,   11,   11, 0x09,
     175,  173,   11,   11, 0x09,
     194,   11,   11,   11, 0x09,
     212,   11,   11,   11, 0x09,
     226,   11,   11,   11, 0x09,
     249,   11,   11,   11, 0x09,
     269,   11,   11,   11, 0x09,
     288,   11,   11,   11, 0x09,
     304,   11,   11,   11, 0x09,
     314,   11,   11,   11, 0x09,
     332,   11,   11,   11, 0x09,
     352,   11,   11,   11, 0x09,
     372,   11,   11,   11, 0x09,
     394,   11,   11,   11, 0x09,
     406,   11,   11,   11, 0x09,
     416,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PrivacyDlg[] = {
    "PrivacyDlg\0\0setWidgetsEnabled(bool)\0"
    "setEditRuleEnabled(bool)\0,,\0"
    "updateLists(QString,QString,QStringList)\0"
    "refreshList(PrivacyList)\0active_selected(int)\0"
    "default_selected(int)\0i\0list_selected(int)\0"
    "list_changed(int)\0list_failed()\0"
    "changeList_succeeded()\0changeList_failed()\0"
    "change_succeeded()\0change_failed()\0"
    "addRule()\0editCurrentRule()\0"
    "removeCurrentRule()\0moveCurrentRuleUp()\0"
    "moveCurrentRuleDown()\0applyList()\0"
    "newList()\0removeList()\0"
};

void PrivacyDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrivacyDlg *_t = static_cast<PrivacyDlg *>(_o);
        switch (_id) {
        case 0: _t->setWidgetsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setEditRuleEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateLists((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 3: _t->refreshList((*reinterpret_cast< const PrivacyList(*)>(_a[1]))); break;
        case 4: _t->active_selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->default_selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->list_selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->list_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->list_failed(); break;
        case 9: _t->changeList_succeeded(); break;
        case 10: _t->changeList_failed(); break;
        case 11: _t->change_succeeded(); break;
        case 12: _t->change_failed(); break;
        case 13: _t->addRule(); break;
        case 14: _t->editCurrentRule(); break;
        case 15: _t->removeCurrentRule(); break;
        case 16: _t->moveCurrentRuleUp(); break;
        case 17: _t->moveCurrentRuleDown(); break;
        case 18: _t->applyList(); break;
        case 19: _t->newList(); break;
        case 20: _t->removeList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrivacyDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrivacyDlg::staticMetaObject = {
    { &KDialog::staticMetaObject, qt_meta_stringdata_PrivacyDlg,
      qt_meta_data_PrivacyDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrivacyDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrivacyDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrivacyDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrivacyDlg))
        return static_cast<void*>(const_cast< PrivacyDlg*>(this));
    return KDialog::qt_metacast(_clname);
}

int PrivacyDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
