/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/qtnp/include/qtnp/main_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qtnp__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      51,   45,   17,   17, 0x0a,
      89,   83,   17,   17, 0x0a,
     135,   45,   17,   17, 0x0a,
     166,   45,   17,   17, 0x0a,
     203,   45,   17,   17, 0x0a,
     239,   45,   17,   17, 0x0a,
     267,   45,   17,   17, 0x0a,
     298,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qtnp__MainWindow[] = {
    "qtnp::MainWindow\0\0on_actionAbout_triggered()\0"
    "check\0on_button_connect_clicked(bool)\0"
    "state\0on_checkbox_use_environment_stateChanged(int)\0"
    "on_button_browse_clicked(bool)\0"
    "on_button_validate_kml_clicked(bool)\0"
    "on_button_perform_cdt_clicked(bool)\0"
    "on_button_add_clicked(bool)\0"
    "on_button_remove_clicked(bool)\0"
    "updateLoggingView()\0"
};

void qtnp::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->on_button_connect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkbox_use_environment_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_button_browse_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_button_validate_kml_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_button_perform_cdt_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_button_add_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_button_remove_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateLoggingView(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qtnp::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qtnp::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qtnp__MainWindow,
      qt_meta_data_qtnp__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qtnp::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qtnp::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qtnp::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qtnp__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int qtnp::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
