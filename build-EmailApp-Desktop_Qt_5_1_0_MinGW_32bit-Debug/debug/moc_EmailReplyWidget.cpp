/****************************************************************************
** Meta object code from reading C++ file 'EmailReplyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EmailApp/UI/EmailReplyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EmailReplyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmailReplyWidget_t {
    QByteArrayData data[18];
    char stringdata[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_EmailReplyWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_EmailReplyWidget_t qt_meta_stringdata_EmailReplyWidget = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 13),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 12),
QT_MOC_LITERAL(4, 45, 6),
QT_MOC_LITERAL(5, 52, 7),
QT_MOC_LITERAL(6, 60, 5),
QT_MOC_LITERAL(7, 66, 10),
QT_MOC_LITERAL(8, 77, 5),
QT_MOC_LITERAL(9, 83, 10),
QT_MOC_LITERAL(10, 94, 7),
QT_MOC_LITERAL(11, 102, 7),
QT_MOC_LITERAL(12, 110, 5),
QT_MOC_LITERAL(13, 116, 13),
QT_MOC_LITERAL(14, 130, 17),
QT_MOC_LITERAL(15, 148, 22),
QT_MOC_LITERAL(16, 171, 10),
QT_MOC_LITERAL(17, 182, 4)
    },
    "EmailReplyWidget\0submitPressed\0\0"
    "closePressed\0showCC\0showBCC\0reply\0"
    "IMAPEmail*\0email\0replyToAll\0forward\0"
    "compose\0reset\0addAttachment\0"
    "attachmentRemoved\0AttachmentOpenDisplay*\0"
    "attachment\0send\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmailReplyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x05,
       3,    0,   75,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    0,   76,    2, 0x0a,
       5,    0,   77,    2, 0x0a,
       6,    1,   78,    2, 0x0a,
       9,    1,   81,    2, 0x0a,
      10,    1,   84,    2, 0x0a,
      11,    0,   87,    2, 0x0a,
      12,    0,   88,    2, 0x0a,
      13,    0,   89,    2, 0x0a,
      14,    1,   90,    2, 0x0a,
      17,    0,   93,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

       0        // eod
};

void EmailReplyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmailReplyWidget *_t = static_cast<EmailReplyWidget *>(_o);
        switch (_id) {
        case 0: _t->submitPressed(); break;
        case 1: _t->closePressed(); break;
        case 2: _t->showCC(); break;
        case 3: _t->showBCC(); break;
        case 4: _t->reply((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 5: _t->replyToAll((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 6: _t->forward((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 7: _t->compose(); break;
        case 8: _t->reset(); break;
        case 9: _t->addAttachment(); break;
        case 10: _t->attachmentRemoved((*reinterpret_cast< AttachmentOpenDisplay*(*)>(_a[1]))); break;
        case 11: _t->send(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AttachmentOpenDisplay* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EmailReplyWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmailReplyWidget::submitPressed)) {
                *result = 0;
            }
        }
        {
            typedef void (EmailReplyWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmailReplyWidget::closePressed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject EmailReplyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EmailReplyWidget.data,
      qt_meta_data_EmailReplyWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *EmailReplyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmailReplyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmailReplyWidget.stringdata))
        return static_cast<void*>(const_cast< EmailReplyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int EmailReplyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void EmailReplyWidget::submitPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EmailReplyWidget::closePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
