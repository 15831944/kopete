/****************************************************************************
** Meta object code from reading C++ file 'chatsessionmemberslistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libkopete/chatsessionmemberslistmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatsessionmemberslistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kopete__ChatSessionMembersListModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   37,   36,   36, 0x0a,
      84,   82,   36,   36, 0x08,
     125,   82,   36,   36, 0x08,
     176,  168,   36,   36, 0x08,
     236,  221,   36,   36, 0x08,
     300,   36,   36,   36, 0x08,
     321,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kopete__ChatSessionMembersListModel[] = {
    "Kopete::ChatSessionMembersListModel\0"
    "\0session\0setChatSession(Kopete::ChatSession*)\0"
    "c\0slotContactAdded(const Kopete::Contact*)\0"
    "slotContactRemoved(const Kopete::Contact*)\0"
    "contact\0slotContactNickNameChanged(Kopete::Contact*)\0"
    "contact,status\0"
    "slotContactStatusChanged(Kopete::Contact*,Kopete::OnlineStatus)\0"
    "slotSessionChanged()\0slotSessionClosed()\0"
};

void Kopete::ChatSessionMembersListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChatSessionMembersListModel *_t = static_cast<ChatSessionMembersListModel *>(_o);
        switch (_id) {
        case 0: _t->setChatSession((*reinterpret_cast< Kopete::ChatSession*(*)>(_a[1]))); break;
        case 1: _t->slotContactAdded((*reinterpret_cast< const Kopete::Contact*(*)>(_a[1]))); break;
        case 2: _t->slotContactRemoved((*reinterpret_cast< const Kopete::Contact*(*)>(_a[1]))); break;
        case 3: _t->slotContactNickNameChanged((*reinterpret_cast< Kopete::Contact*(*)>(_a[1]))); break;
        case 4: _t->slotContactStatusChanged((*reinterpret_cast< Kopete::Contact*(*)>(_a[1])),(*reinterpret_cast< const Kopete::OnlineStatus(*)>(_a[2]))); break;
        case 5: _t->slotSessionChanged(); break;
        case 6: _t->slotSessionClosed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kopete::ChatSessionMembersListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kopete::ChatSessionMembersListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_Kopete__ChatSessionMembersListModel,
      qt_meta_data_Kopete__ChatSessionMembersListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kopete::ChatSessionMembersListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kopete::ChatSessionMembersListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kopete::ChatSessionMembersListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kopete__ChatSessionMembersListModel))
        return static_cast<void*>(const_cast< ChatSessionMembersListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int Kopete::ChatSessionMembersListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
