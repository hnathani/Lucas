/****************************************************************************
** Meta object code from reading C++ file 'AttachmentEnclosedDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EmailApp/UI/AttachmentEnclosedDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AttachmentEnclosedDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AttachmentEnclosedDisplay_t {
    QByteArrayData data[3];
    char stringdata[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AttachmentEnclosedDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AttachmentEnclosedDisplay_t qt_meta_stringdata_AttachmentEnclosedDisplay = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 17),
QT_MOC_LITERAL(2, 44, 0)
    },
    "AttachmentEnclosedDisplay\0attachmentClicked\0"
    "\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttachmentEnclosedDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AttachmentEnclosedDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AttachmentEnclosedDisplay *_t = static_cast<AttachmentEnclosedDisplay *>(_o);
        switch (_id) {
        case 0: _t->attachmentClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AttachmentEnclosedDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AttachmentEnclosedDisplay.data,
      qt_meta_data_AttachmentEnclosedDisplay,  qt_static_metacall, 0, 0}
};


const QMetaObject *AttachmentEnclosedDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttachmentEnclosedDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AttachmentEnclosedDisplay.stringdata))
        return static_cast<void*>(const_cast< AttachmentEnclosedDisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int AttachmentEnclosedDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
