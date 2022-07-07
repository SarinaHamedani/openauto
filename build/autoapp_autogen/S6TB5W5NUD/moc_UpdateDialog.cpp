/****************************************************************************
** Meta object code from reading C++ file 'UpdateDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "f1x/openauto/autoapp/UI/UpdateDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdateDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_f1x__openauto__autoapp__ui__UpdateDialog_t {
    QByteArrayData data[8];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_f1x__openauto__autoapp__ui__UpdateDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_f1x__openauto__autoapp__ui__UpdateDialog_t qt_meta_stringdata_f1x__openauto__autoapp__ui__UpdateDialog = {
    {
QT_MOC_LITERAL(0, 0, 40), // "f1x::openauto::autoapp::ui::U..."
QT_MOC_LITERAL(1, 41, 31), // "on_pushButtonUpdateCsmt_clicked"
QT_MOC_LITERAL(2, 73, 0), // ""
QT_MOC_LITERAL(3, 74, 31), // "on_pushButtonUpdateUdev_clicked"
QT_MOC_LITERAL(4, 106, 35), // "on_pushButtonUpdateOpenauto_c..."
QT_MOC_LITERAL(5, 142, 33), // "on_pushButtonUpdateSystem_cli..."
QT_MOC_LITERAL(6, 176, 32), // "on_pushButtonUpdateCheck_clicked"
QT_MOC_LITERAL(7, 209, 33) // "on_pushButtonUpdateCancel_cli..."

    },
    "f1x::openauto::autoapp::ui::UpdateDialog\0"
    "on_pushButtonUpdateCsmt_clicked\0\0"
    "on_pushButtonUpdateUdev_clicked\0"
    "on_pushButtonUpdateOpenauto_clicked\0"
    "on_pushButtonUpdateSystem_clicked\0"
    "on_pushButtonUpdateCheck_clicked\0"
    "on_pushButtonUpdateCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_f1x__openauto__autoapp__ui__UpdateDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void f1x::openauto::autoapp::ui::UpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonUpdateCsmt_clicked(); break;
        case 1: _t->on_pushButtonUpdateUdev_clicked(); break;
        case 2: _t->on_pushButtonUpdateOpenauto_clicked(); break;
        case 3: _t->on_pushButtonUpdateSystem_clicked(); break;
        case 4: _t->on_pushButtonUpdateCheck_clicked(); break;
        case 5: _t->on_pushButtonUpdateCancel_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject f1x::openauto::autoapp::ui::UpdateDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_f1x__openauto__autoapp__ui__UpdateDialog.data,
    qt_meta_data_f1x__openauto__autoapp__ui__UpdateDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *f1x::openauto::autoapp::ui::UpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *f1x::openauto::autoapp::ui::UpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_f1x__openauto__autoapp__ui__UpdateDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int f1x::openauto::autoapp::ui::UpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
