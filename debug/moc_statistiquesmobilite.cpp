/****************************************************************************
** Meta object code from reading C++ file 'statistiquesmobilite.h'
**
** Created: Sat 29. Aug 17:42:02 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../statistiquesmobilite.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statistiquesmobilite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_statistiquesMobilite[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      38,   21,   21,   21, 0x08,
      55,   21,   21,   21, 0x08,
      66,   21,   21,   21, 0x08,
     109,   21,   21,   21, 0x08,
     154,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_statistiquesMobilite[] = {
    "statistiquesMobilite\0\0makeTableView()\0"
    "makeSecondPlot()\0makePlot()\0"
    "on_pushButton_capturerCustomPlot_clicked()\0"
    "on_pushButton_capturerCustomPlot_2_clicked()\0"
    "on_pushButton_capturerTableauStat_clicked()\0"
};

void statistiquesMobilite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        statistiquesMobilite *_t = static_cast<statistiquesMobilite *>(_o);
        switch (_id) {
        case 0: _t->makeTableView(); break;
        case 1: _t->makeSecondPlot(); break;
        case 2: _t->makePlot(); break;
        case 3: _t->on_pushButton_capturerCustomPlot_clicked(); break;
        case 4: _t->on_pushButton_capturerCustomPlot_2_clicked(); break;
        case 5: _t->on_pushButton_capturerTableauStat_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData statistiquesMobilite::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject statistiquesMobilite::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_statistiquesMobilite,
      qt_meta_data_statistiquesMobilite, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &statistiquesMobilite::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *statistiquesMobilite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *statistiquesMobilite::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_statistiquesMobilite))
        return static_cast<void*>(const_cast< statistiquesMobilite*>(this));
    return QDialog::qt_metacast(_clname);
}

int statistiquesMobilite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
