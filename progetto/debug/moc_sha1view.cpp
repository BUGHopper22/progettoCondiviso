/****************************************************************************
** Meta object code from reading C++ file 'sha1view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sha1view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sha1view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sha1View_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sha1View_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sha1View_t qt_meta_stringdata_sha1View = {
    {
QT_MOC_LITERAL(0, 0, 8), // "sha1View"
QT_MOC_LITERAL(1, 9, 14), // "convertMethodS"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "convertS"
QT_MOC_LITERAL(4, 34, 11), // "sha1OutputS"
QT_MOC_LITERAL(5, 46, 16) // "QVector<uint8_t>"

    },
    "sha1View\0convertMethodS\0\0convertS\0"
    "sha1OutputS\0QVector<uint8_t>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sha1View[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   32,    2, 0x0a /* Public */,
       4,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void sha1View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sha1View *_t = static_cast<sha1View *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->convertMethodS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->convertS(); break;
        case 2: _t->sha1OutputS((*reinterpret_cast< QVector<uint8_t>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (sha1View::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sha1View::convertMethodS)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject sha1View::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sha1View.data,
      qt_meta_data_sha1View,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *sha1View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sha1View::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_sha1View.stringdata0))
        return static_cast<void*>(const_cast< sha1View*>(this));
    return QWidget::qt_metacast(_clname);
}

int sha1View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void sha1View::convertMethodS(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
