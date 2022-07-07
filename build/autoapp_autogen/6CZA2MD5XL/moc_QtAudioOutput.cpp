/****************************************************************************
** Meta object code from reading C++ file 'QtAudioOutput.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "f1x/openauto/autoapp/Projection/QtAudioOutput.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtAudioOutput.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_f1x__openauto__autoapp__projection__QtAudioOutput_t {
    QByteArrayData data[9];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_f1x__openauto__autoapp__projection__QtAudioOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_f1x__openauto__autoapp__projection__QtAudioOutput_t qt_meta_stringdata_f1x__openauto__autoapp__projection__QtAudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 49), // "f1x::openauto::autoapp::proje..."
QT_MOC_LITERAL(1, 50, 13), // "startPlayback"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 15), // "suspendPlayback"
QT_MOC_LITERAL(4, 81, 12), // "stopPlayback"
QT_MOC_LITERAL(5, 94, 17), // "createAudioOutput"
QT_MOC_LITERAL(6, 112, 15), // "onStartPlayback"
QT_MOC_LITERAL(7, 128, 17), // "onSuspendPlayback"
QT_MOC_LITERAL(8, 146, 14) // "onStopPlayback"

    },
    "f1x::openauto::autoapp::projection::QtAudioOutput\0"
    "startPlayback\0\0suspendPlayback\0"
    "stopPlayback\0createAudioOutput\0"
    "onStartPlayback\0onSuspendPlayback\0"
    "onStopPlayback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_f1x__openauto__autoapp__projection__QtAudioOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void f1x::openauto::autoapp::projection::QtAudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtAudioOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startPlayback(); break;
        case 1: _t->suspendPlayback(); break;
        case 2: _t->stopPlayback(); break;
        case 3: _t->createAudioOutput(); break;
        case 4: _t->onStartPlayback(); break;
        case 5: _t->onSuspendPlayback(); break;
        case 6: _t->onStopPlayback(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtAudioOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtAudioOutput::startPlayback)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtAudioOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtAudioOutput::suspendPlayback)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QtAudioOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtAudioOutput::stopPlayback)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject f1x::openauto::autoapp::projection::QtAudioOutput::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_f1x__openauto__autoapp__projection__QtAudioOutput.data,
    qt_meta_data_f1x__openauto__autoapp__projection__QtAudioOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *f1x::openauto::autoapp::projection::QtAudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *f1x::openauto::autoapp::projection::QtAudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_f1x__openauto__autoapp__projection__QtAudioOutput.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IAudioOutput"))
        return static_cast< IAudioOutput*>(this);
    return QObject::qt_metacast(_clname);
}

int f1x::openauto::autoapp::projection::QtAudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void f1x::openauto::autoapp::projection::QtAudioOutput::startPlayback()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void f1x::openauto::autoapp::projection::QtAudioOutput::suspendPlayback()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void f1x::openauto::autoapp::projection::QtAudioOutput::stopPlayback()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
