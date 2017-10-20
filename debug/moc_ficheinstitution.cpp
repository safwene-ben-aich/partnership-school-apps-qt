/****************************************************************************
** Meta object code from reading C++ file 'ficheinstitution.h'
**
** Created: Sat 29. Aug 17:49:32 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ficheinstitution.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ficheinstitution.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ficheInstitution[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   18,   17,   17, 0x08,
      75,   18,   17,   17, 0x08,
     123,   17,   17,   17, 0x08,
     170,   17,   17,   17, 0x08,
     213,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ficheInstitution[] = {
    "ficheInstitution\0\0arg1,arg2\0"
    "on_lineEdit_nom_cursorPositionChanged(int,int)\0"
    "on_lineEdit_pays_cursorPositionChanged(int,int)\0"
    "on_pushButton_sauvegarderInstitution_clicked()\0"
    "on_pushButton_bloquedInstitution_clicked()\0"
    "on_pushButton_supprimerInstitution_clicked()\0"
};

void ficheInstitution::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ficheInstitution *_t = static_cast<ficheInstitution *>(_o);
        switch (_id) {
        case 0: _t->on_lineEdit_nom_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_lineEdit_pays_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_pushButton_sauvegarderInstitution_clicked(); break;
        case 3: _t->on_pushButton_bloquedInstitution_clicked(); break;
        case 4: _t->on_pushButton_supprimerInstitution_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ficheInstitution::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ficheInstitution::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ficheInstitution,
      qt_meta_data_ficheInstitution, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ficheInstitution::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ficheInstitution::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ficheInstitution::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ficheInstitution))
        return static_cast<void*>(const_cast< ficheInstitution*>(this));
    return QDialog::qt_metacast(_clname);
}

int ficheInstitution::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
