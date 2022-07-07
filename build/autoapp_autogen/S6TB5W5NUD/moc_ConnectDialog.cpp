/****************************************************************************
** Meta object code from reading C++ file 'ConnectDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "f1x/openauto/autoapp/UI/ConnectDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConnectDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_f1x__openauto__autoapp__ui__ConnectDialog_t {
    QByteArrayData data[17];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_f1x__openauto__autoapp__ui__ConnectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_f1x__openauto__autoapp__ui__ConnectDialog_t qt_meta_stringdata_f1x__openauto__autoapp__ui__ConnectDialog = {
    {
QT_MOC_LITERAL(0, 0, 41), // "f1x::openauto::autoapp::ui::C..."
QT_MOC_LITERAL(1, 42, 15), // "connectToDevice"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 9), // "ipAddress"
QT_MOC_LITERAL(4, 69, 17), // "connectionSucceed"
QT_MOC_LITERAL(5, 87, 39), // "aasdk::tcp::ITCPEndpoint::Soc..."
QT_MOC_LITERAL(6, 127, 6), // "socket"
QT_MOC_LITERAL(7, 134, 11), // "std::string"
QT_MOC_LITERAL(8, 146, 16), // "connectionFailed"
QT_MOC_LITERAL(9, 163, 7), // "message"
QT_MOC_LITERAL(10, 171, 22), // "onConnectButtonClicked"
QT_MOC_LITERAL(11, 194, 18), // "onConnectionFailed"
QT_MOC_LITERAL(12, 213, 19), // "onConnectionSucceed"
QT_MOC_LITERAL(13, 233, 22), // "onRecentAddressClicked"
QT_MOC_LITERAL(14, 256, 11), // "QModelIndex"
QT_MOC_LITERAL(15, 268, 5), // "index"
QT_MOC_LITERAL(16, 274, 21) // "onUpdateButtonClicked"

    },
    "f1x::openauto::autoapp::ui::ConnectDialog\0"
    "connectToDevice\0\0ipAddress\0connectionSucceed\0"
    "aasdk::tcp::ITCPEndpoint::SocketPointer\0"
    "socket\0std::string\0connectionFailed\0"
    "message\0onConnectButtonClicked\0"
    "onConnectionFailed\0onConnectionSucceed\0"
    "onRecentAddressClicked\0QModelIndex\0"
    "index\0onUpdateButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_f1x__openauto__autoapp__ui__ConnectDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    2,   57,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   65,    2, 0x08 /* Private */,
      11,    1,   66,    2, 0x08 /* Private */,
      12,    2,   69,    2, 0x08 /* Private */,
      13,    1,   74,    2, 0x08 /* Private */,
      16,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    3,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    3,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void f1x::openauto::autoapp::ui::ConnectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectToDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->connectionSucceed((*reinterpret_cast< aasdk::tcp::ITCPEndpoint::SocketPointer(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 2: _t->connectionFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onConnectButtonClicked(); break;
        case 4: _t->onConnectionFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onConnectionSucceed((*reinterpret_cast< aasdk::tcp::ITCPEndpoint::SocketPointer(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 6: _t->onRecentAddressClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->onUpdateButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConnectDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectDialog::connectToDevice)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConnectDialog::*)(aasdk::tcp::ITCPEndpoint::SocketPointer , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectDialog::connectionSucceed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConnectDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectDialog::connectionFailed)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject f1x::openauto::autoapp::ui::ConnectDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_f1x__openauto__autoapp__ui__ConnectDialog.data,
    qt_meta_data_f1x__openauto__autoapp__ui__ConnectDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *f1x::openauto::autoapp::ui::ConnectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *f1x::openauto::autoapp::ui::ConnectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_f1x__openauto__autoapp__ui__ConnectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int f1x::openauto::autoapp::ui::ConnectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void f1x::openauto::autoapp::ui::ConnectDialog::connectToDevice(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void f1x::openauto::autoapp::ui::ConnectDialog::connectionSucceed(aasdk::tcp::ITCPEndpoint::SocketPointer _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void f1x::openauto::autoapp::ui::ConnectDialog::connectionFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
