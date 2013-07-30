/****************************************************************************
** Meta object code from reading C++ file 'EmailTextBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EmailApp/UI/EmailTextBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EmailTextBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmailTextBox_t {
    QByteArrayData data[12];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_EmailTextBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_EmailTextBox_t qt_meta_stringdata_EmailTextBox = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 21),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 4),
QT_MOC_LITERAL(4, 41, 12),
QT_MOC_LITERAL(5, 54, 14),
QT_MOC_LITERAL(6, 69, 3),
QT_MOC_LITERAL(7, 73, 8),
QT_MOC_LITERAL(8, 82, 5),
QT_MOC_LITERAL(9, 88, 5),
QT_MOC_LITERAL(10, 94, 9),
QT_MOC_LITERAL(11, 104, 14)
    },
    "EmailTextBox\0inputEmailTextChanged\0\0"
    "text\0emailRemoved\0ValidEmailBox*\0box\0"
    "addEmail\0email\0reset\0getEmails\0"
    "QList<QString>\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmailTextBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a,
       4,    1,   42,    2, 0x0a,
       7,    1,   45,    2, 0x0a,
       9,    0,   48,    2, 0x0a,
      10,    0,   49,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    0x80000000 | 11,

       0        // eod
};

void EmailTextBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmailTextBox *_t = static_cast<EmailTextBox *>(_o);
        switch (_id) {
        case 0: _t->inputEmailTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->emailRemoved((*reinterpret_cast< ValidEmailBox*(*)>(_a[1]))); break;
        case 2: _t->addEmail((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: { QList<QString> _r = _t->getEmails();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ValidEmailBox* >(); break;
            }
            break;
        }
    }
}

const QMetaObject EmailTextBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EmailTextBox.data,
      qt_meta_data_EmailTextBox,  qt_static_metacall, 0, 0}
};


const QMetaObject *EmailTextBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmailTextBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmailTextBox.stringdata))
        return static_cast<void*>(const_cast< EmailTextBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int EmailTextBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
