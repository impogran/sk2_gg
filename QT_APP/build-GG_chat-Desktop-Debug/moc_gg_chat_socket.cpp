/****************************************************************************
** Meta object code from reading C++ file 'gg_chat_socket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GG_chat/gg_chat_socket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gg_chat_socket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gg_chat_socket_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gg_chat_socket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gg_chat_socket_t qt_meta_stringdata_gg_chat_socket = {
    {
QT_MOC_LITERAL(0, 0, 14), // "gg_chat_socket"
QT_MOC_LITERAL(1, 15, 9), // "ReadyRead"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "gg_chat_socket*"
QT_MOC_LITERAL(4, 42, 12) // "StateChanged"

    },
    "gg_chat_socket\0ReadyRead\0\0gg_chat_socket*\0"
    "StateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gg_chat_socket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,

       0        // eod
};

void gg_chat_socket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gg_chat_socket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReadyRead((*reinterpret_cast< gg_chat_socket*(*)>(_a[1]))); break;
        case 1: _t->StateChanged((*reinterpret_cast< gg_chat_socket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< gg_chat_socket* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< gg_chat_socket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (gg_chat_socket::*)(gg_chat_socket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&gg_chat_socket::ReadyRead)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (gg_chat_socket::*)(gg_chat_socket * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&gg_chat_socket::StateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gg_chat_socket::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_gg_chat_socket.data,
    qt_meta_data_gg_chat_socket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gg_chat_socket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gg_chat_socket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gg_chat_socket.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int gg_chat_socket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void gg_chat_socket::ReadyRead(gg_chat_socket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gg_chat_socket::StateChanged(gg_chat_socket * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
