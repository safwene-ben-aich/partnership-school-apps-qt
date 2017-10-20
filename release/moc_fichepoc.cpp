/****************************************************************************
** Meta object code from reading C++ file 'fichepoc.h'
**
** Created: Wed 2. Sep 01:29:27 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fichepoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fichepoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fichePOC[] = {

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
      20,   10,    9,    9, 0x08,
      70,   10,    9,    9, 0x08,
     123,   10,    9,    9, 0x08,
     181,   10,    9,    9, 0x08,
     232,   10,    9,    9, 0x08,
     288,   10,    9,    9, 0x08,
     338,    9,    9,    9, 0x08,
     391,    9,    9,    9, 0x08,
     447,    9,    9,    9, 0x08,
     486,    9,    9,    9, 0x08,
     521,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fichePOC[] = {
    "fichePOC\0\0arg1,arg2\0"
    "on_lineEdit_nomPOC_cursorPositionChanged(int,int)\0"
    "on_lineEdit_prenomPOC_cursorPositionChanged(int,int)\0"
    "on_lineEdit_institutionPOC_cursorPositionChanged(int,int)\0"
    "on_lineEdit_mailPOC_cursorPositionChanged(int,int)\0"
    "on_lineEdit_telephonePOC_cursorPositionChanged(int,int)\0"
    "on_lineEdit_FAXPOC_cursorPositionChanged(int,int)\0"
    "on_plainTextEdit_fonctionPOC_cursorPositionChanged()\0"
    "on_plainTextEdit_commentairePOC_cursorPositionChanged()\0"
    "on_pushButton_sauvegarderPOC_clicked()\0"
    "on_pushButton_bloquedPOC_clicked()\0"
    "on_pushButton_supprimerPOC_clicked()\0"
};

void fichePOC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        fichePOC *_t = static_cast<fichePOC *>(_o);
        switch (_id) {
        case 0: _t->on_lineEdit_nomPOC_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_lineEdit_prenomPOC_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_lineEdit_institutionPOC_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_lineEdit_mailPOC_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_lineEdit_telephonePOC_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_lineEdit_FAXPOC_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_plainTextEdit_fonctionPOC_cursorPositionChanged(); break;
        case 7: _t->on_plainTextEdit_commentairePOC_cursorPositionChanged(); break;
        case 8: _t->on_pushButton_sauvegarderPOC_clicked(); break;
        case 9: _t->on_pushButton_bloquedPOC_clicked(); break;
        case 10: _t->on_pushButton_supprimerPOC_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData fichePOC::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fichePOC::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fichePOC,
      qt_meta_data_fichePOC, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fichePOC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fichePOC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fichePOC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fichePOC))
        return static_cast<void*>(const_cast< fichePOC*>(this));
    return QDialog::qt_metacast(_clname);
}

int fichePOC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
