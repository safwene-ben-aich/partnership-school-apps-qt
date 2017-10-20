/****************************************************************************
** Meta object code from reading C++ file 'notificationpartenariat.h'
**
** Created: Sat 29. Aug 17:42:04 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../notificationpartenariat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationpartenariat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_notificationPartenariat[] = {

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
      25,   24,   24,   24, 0x08,
      62,   56,   24,   24, 0x08,
     109,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_notificationPartenariat[] = {
    "notificationPartenariat\0\0"
    "prepareTableViewNotification()\0index\0"
    "on_tableView_notification_clicked(QModelIndex)\0"
    "on_pushButton_ignorerNotification_clicked()\0"
};

void notificationPartenariat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        notificationPartenariat *_t = static_cast<notificationPartenariat *>(_o);
        switch (_id) {
        case 0: _t->prepareTableViewNotification(); break;
        case 1: _t->on_tableView_notification_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_ignorerNotification_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData notificationPartenariat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject notificationPartenariat::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_notificationPartenariat,
      qt_meta_data_notificationPartenariat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &notificationPartenariat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *notificationPartenariat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *notificationPartenariat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_notificationPartenariat))
        return static_cast<void*>(const_cast< notificationPartenariat*>(this));
    return QDialog::qt_metacast(_clname);
}

int notificationPartenariat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
