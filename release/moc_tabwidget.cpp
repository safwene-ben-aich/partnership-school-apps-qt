/****************************************************************************
** Meta object code from reading C++ file 'tabwidget.h'
**
** Created: Wed 2. Sep 01:56:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tabwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      41,   31,   10,   10, 0x08,
     108,  102,   10,   10, 0x08,
     157,   10,   10,   10, 0x08,
     193,   10,   10,   10, 0x08,
     238,   10,   10,   10, 0x08,
     281,  102,   10,   10, 0x08,
     324,  102,   10,   10, 0x08,
     376,   10,   10,   10, 0x08,
     415,   31,   10,   10, 0x08,
     479,   10,   10,   10, 0x08,
     525,   10,   10,   10, 0x08,
     573,  102,   10,   10, 0x08,
     619,   10,   10,   10, 0x08,
     670,   31,   10,   10, 0x08,
     726,   10,   10,   10, 0x08,
     764,  102,   10,   10, 0x08,
     808,   10,   10,   10, 0x08,
     839,   31,   10,   10, 0x08,
     903,   10,   10,   10, 0x08,
     949,  102,   10,   10, 0x08,
    1001,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TabWidget[] = {
    "TabWidget\0\0sectionClicked(int)\0arg1,arg2\0"
    "on_lineEdit_rechercheEtudiant_cursorPositionChanged(int,int)\0"
    "index\0on_tableView_Mobilite_doubleClicked(QModelIndex)\0"
    "on_pushButton_newMobilite_clicked()\0"
    "on_pushButton_statistiquesMobilite_clicked()\0"
    "on_pushButton_actualiserMobilite_clicked()\0"
    "on_tableView_Mobilite_clicked(QModelIndex)\0"
    "on_tableView_Partenariat_doubleClicked(QModelIndex)\0"
    "on_pushButton_newPartenariat_clicked()\0"
    "on_lineEdit_recherchePartenariat_cursorPositionChanged(int,int)\0"
    "on_pushButton_actualiserPartenariat_clicked()\0"
    "on_pushButton_notificationPartenariat_clicked()\0"
    "on_tableView_Partenariat_clicked(QModelIndex)\0"
    "on_checkBox_affichagePartenariatNonActif_clicked()\0"
    "on_lineEdit_recherchePOC_cursorPositionChanged(int,int)\0"
    "on_pushButton_actualiserPOC_clicked()\0"
    "on_tableView_POC_doubleClicked(QModelIndex)\0"
    "on_pushButton_newPOC_clicked()\0"
    "on_lineEdit_rechercheInstitution_cursorPositionChanged(int,int)\0"
    "on_pushButton_actualiserInstitution_clicked()\0"
    "on_tableView_Institution_doubleClicked(QModelIndex)\0"
    "on_pushButton_newInstitution_clicked()\0"
};

void TabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabWidget *_t = static_cast<TabWidget *>(_o);
        switch (_id) {
        case 0: _t->sectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_lineEdit_rechercheEtudiant_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_tableView_Mobilite_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_newMobilite_clicked(); break;
        case 4: _t->on_pushButton_statistiquesMobilite_clicked(); break;
        case 5: _t->on_pushButton_actualiserMobilite_clicked(); break;
        case 6: _t->on_tableView_Mobilite_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_tableView_Partenariat_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_newPartenariat_clicked(); break;
        case 9: _t->on_lineEdit_recherchePartenariat_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->on_pushButton_actualiserPartenariat_clicked(); break;
        case 11: _t->on_pushButton_notificationPartenariat_clicked(); break;
        case 12: _t->on_tableView_Partenariat_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->on_checkBox_affichagePartenariatNonActif_clicked(); break;
        case 14: _t->on_lineEdit_recherchePOC_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->on_pushButton_actualiserPOC_clicked(); break;
        case 16: _t->on_tableView_POC_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->on_pushButton_newPOC_clicked(); break;
        case 18: _t->on_lineEdit_rechercheInstitution_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->on_pushButton_actualiserInstitution_clicked(); break;
        case 20: _t->on_tableView_Institution_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 21: _t->on_pushButton_newInstitution_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_TabWidget,
      qt_meta_data_TabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabWidget))
        return static_cast<void*>(const_cast< TabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int TabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
