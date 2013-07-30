/****************************************************************************
** Meta object code from reading C++ file 'EmailHeaderWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EmailApp/UI/EmailHeaderWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EmailHeaderWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmailHeaderWidget_t {
    QByteArrayData data[14];
    char stringdata[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_EmailHeaderWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_EmailHeaderWidget_t qt_meta_stringdata_EmailHeaderWidget = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 12),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 10),
QT_MOC_LITERAL(4, 43, 5),
QT_MOC_LITERAL(5, 49, 15),
QT_MOC_LITERAL(6, 65, 14),
QT_MOC_LITERAL(7, 80, 13),
QT_MOC_LITERAL(8, 94, 8),
QT_MOC_LITERAL(9, 103, 12),
QT_MOC_LITERAL(10, 116, 12),
QT_MOC_LITERAL(11, 129, 15),
QT_MOC_LITERAL(12, 145, 14),
QT_MOC_LITERAL(13, 160, 13)
    },
    "EmailHeaderWidget\0replyClicked\0\0"
    "IMAPEmail*\0email\0replyAllClicked\0"
    "forwardClicked\0deleteClicked\0setEmail\0"
    "clearAndHide\0replyPressed\0replyAllPressed\0"
    "forwardPressed\0deletePressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmailHeaderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x05,
       5,    1,   67,    2, 0x05,
       6,    1,   70,    2, 0x05,
       7,    1,   73,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       8,    1,   76,    2, 0x0a,
       9,    0,   79,    2, 0x0a,
      10,    0,   80,    2, 0x0a,
      11,    0,   81,    2, 0x0a,
      12,    0,   82,    2, 0x0a,
      13,    0,   83,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EmailHeaderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmailHeaderWidget *_t = static_cast<EmailHeaderWidget *>(_o);
        switch (_id) {
        case 0: _t->replyClicked((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 1: _t->replyAllClicked((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 2: _t->forwardClicked((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 3: _t->deleteClicked((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 4: _t->setEmail((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 5: _t->clearAndHide(); break;
        case 6: _t->replyPressed(); break;
        case 7: _t->replyAllPressed(); break;
        case 8: _t->forwardPressed(); break;
        case 9: _t->deletePressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EmailHeaderWidget::*_t)(IMAPEmail * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmailHeaderWidget::replyClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (EmailHeaderWidget::*_t)(IMAPEmail * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmailHeaderWidget::replyAllClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (EmailHeaderWidget::*_t)(IMAPEmail * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmailHeaderWidget::forwardClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (EmailHeaderWidget::*_t)(IMAPEmail * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmailHeaderWidget::deleteClicked)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject EmailHeaderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EmailHeaderWidget.data,
      qt_meta_data_EmailHeaderWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *EmailHeaderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmailHeaderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmailHeaderWidget.stringdata))
        return static_cast<void*>(const_cast< EmailHeaderWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int EmailHeaderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void EmailHeaderWidget::replyClicked(IMAPEmail * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EmailHeaderWidget::replyAllClicked(IMAPEmail * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EmailHeaderWidget::forwardClicked(IMAPEmail * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EmailHeaderWidget::deleteClicked(IMAPEmail * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
