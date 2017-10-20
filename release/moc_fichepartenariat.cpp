/****************************************************************************
** Meta object code from reading C++ file 'fichepartenariat.h'
**
** Created: Wed 2. Sep 01:29:25 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fichepartenariat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fichepartenariat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fichePartenariat[] = {

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
      63,   17,   17,   17, 0x08,
     110,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fichePartenariat[] = {
    "fichePartenariat\0\0"
    "on_pushButton_supprimerPartenariat_clicked()\0"
    "on_pushButton_sauvegarderPartenariat_clicked()\0"
    "on_pushButton_bloquedPartenariat_clicked()\0"
};

void fichePartenariat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        fichePartenariat *_t = static_cast<fichePartenariat *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_supprimerPartenariat_clicked(); break;
        case 1: _t->on_pushButton_sauvegarderPartenariat_clicked(); break;
        case 2: _t->on_pushButton_bloquedPartenariat_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData fichePartenariat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fichePartenariat::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fichePartenariat,
      qt_meta_data_fichePartenariat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fichePartenariat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fichePartenariat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fichePartenariat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fichePartenariat))
        return static_cast<void*>(const_cast< fichePartenariat*>(this));
    return QDialog::qt_metacast(_clname);
}

int fichePartenariat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
