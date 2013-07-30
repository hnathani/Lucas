/****************************************************************************
** Meta object code from reading C++ file 'EmailTableWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EmailApp/UI/EmailTableWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EmailTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmailTableWidget_t {
    QByteArrayData data[18];
    char stringdata[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_EmailTableWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_EmailTableWidget_t qt_meta_stringdata_EmailTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 12),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 10),
QT_MOC_LITERAL(4, 42, 6),
QT_MOC_LITERAL(5, 49, 17),
QT_MOC_LITERAL(6, 67, 5),
QT_MOC_LITERAL(7, 73, 3),
QT_MOC_LITERAL(8, 77, 5),
QT_MOC_LITERAL(9, 83, 11),
QT_MOC_LITERAL(10, 95, 3),
QT_MOC_LITERAL(11, 99, 12),
QT_MOC_LITERAL(12, 112, 11),
QT_MOC_LITERAL(13, 124, 8),
QT_MOC_LITERAL(14, 133, 8),
QT_MOC_LITERAL(15, 142, 6),
QT_MOC_LITERAL(16, 149, 5),
QT_MOC_LITERAL(17, 155, 6)
    },
    "EmailTableWidget\0onEmailClick\0\0"
    "IMAPEmail*\0folder\0emailPageSelected\0"
    "start\0end\0total\0onItemClick\0row\0"
    "folderSelect\0IMAPFolder*\0nextPage\0"
    "prevPage\0search\0query\0reload\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmailTableWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x05,
       5,    3,   57,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    1,   64,    2, 0x0a,
      11,    1,   67,    2, 0x0a,
      13,    0,   70,    2, 0x0a,
      14,    0,   71,    2, 0x0a,
      15,    1,   72,    2, 0x0a,
      17,    0,   75,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

void EmailTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmailTableWidget *_t = static_cast<EmailTableWidget *>(_o);
        switch (_id) {
        case 0: _t->onEmailClick((*reinterpret_cast< IMAPEmail*(*)>(_a[1]))); break;
        case 1: _t->emailPageSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->onItemClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->folderSelect((*reinterpret_cast< IMAPFolder*(*)>(_a[1]))); break;
        case 4: _t->nextPage(); break;
        case 5: _t->prevPage(); break;
        case 6: _t->search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->reload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IMAPFolder* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EmailTableWidget::*_t)(IMAPEmail * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmailTableWidget::onEmailClick)) {
                *result = 0;
            }
        }
        {
            typedef void (EmailTableWidget::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmailTableWidget::emailPageSelected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject EmailTableWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_EmailTableWidget.data,
      qt_meta_data_EmailTableWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *EmailTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmailTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmailTableWidget.stringdata))
        return static_cast<void*>(const_cast< EmailTableWidget*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int EmailTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void EmailTableWidget::onEmailClick(IMAPEmail * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EmailTableWidget::emailPageSelected(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
