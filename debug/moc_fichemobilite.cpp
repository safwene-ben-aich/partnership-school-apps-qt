/****************************************************************************
** Meta object code from reading C++ file 'fichemobilite.h'
**
** Created: Thu 3. Sep 17:51:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fichemobilite.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fichemobilite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ficheMobilite[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      67,   57,   14,   14, 0x08,
     114,   57,   14,   14, 0x08,
     164,   57,   14,   14, 0x08,
     214,   57,   14,   14, 0x08,
     263,   57,   14,   14, 0x08,
     314,   57,   14,   14, 0x08,
     362,   57,   14,   14, 0x08,
     411,   57,   14,   14, 0x08,
     460,   14,   14,   14, 0x08,
     504,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ficheMobilite[] = {
    "ficheMobilite\0\0on_pushButton_supprimerMobilite_clicked()\0"
    "arg1,arg2\0on_lineEdit_nom_cursorPositionChanged(int,int)\0"
    "on_lineEdit_prenom_cursorPositionChanged(int,int)\0"
    "on_lineEdit_classe_cursorPositionChanged(int,int)\0"
    "on_lineEdit_ecole_cursorPositionChanged(int,int)\0"
    "on_lineEdit_diplome_cursorPositionChanged(int,int)\0"
    "on_lineEdit_pays_cursorPositionChanged(int,int)\0"
    "on_lineEdit_annee_cursorPositionChanged(int,int)\0"
    "on_lineEdit_duree_cursorPositionChanged(int,int)\0"
    "on_pushButton_sauvegarderMobilite_clicked()\0"
    "on_pushButton_bloquedMobilite_clicked()\0"
};

void ficheMobilite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ficheMobilite *_t = static_cast<ficheMobilite *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_supprimerMobilite_clicked(); break;
        case 1: _t->on_lineEdit_nom_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_lineEdit_prenom_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_lineEdit_classe_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_lineEdit_ecole_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_lineEdit_diplome_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_lineEdit_pays_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_lineEdit_annee_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_lineEdit_duree_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_pushButton_sauvegarderMobilite_clicked(); break;
        case 10: _t->on_pushButton_bloquedMobilite_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ficheMobilite::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ficheMobilite::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ficheMobilite,
      qt_meta_data_ficheMobilite, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ficheMobilite::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ficheMobilite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ficheMobilite::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ficheMobilite))
        return static_cast<void*>(const_cast< ficheMobilite*>(this));
    return QDialog::qt_metacast(_clname);
}

int ficheMobilite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
