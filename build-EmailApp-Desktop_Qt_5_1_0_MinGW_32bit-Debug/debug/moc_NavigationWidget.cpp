/****************************************************************************
** Meta object code from reading C++ file 'NavigationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EmailApp/UI/NavigationWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavigationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NavigationWidget_t {
    QByteArrayData data[13];
    char stringdata[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NavigationWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NavigationWidget_t qt_meta_stringdata_NavigationWidget = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 11),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 11),
QT_MOC_LITERAL(4, 42, 13),
QT_MOC_LITERAL(5, 56, 5),
QT_MOC_LITERAL(6, 62, 14),
QT_MOC_LITERAL(7, 77, 14),
QT_MOC_LITERAL(8, 92, 5),
QT_MOC_LITERAL(9, 98, 3),
QT_MOC_LITERAL(10, 102, 5),
QT_MOC_LITERAL(11, 108, 20),
QT_MOC_LITERAL(12, 129, 14)
    },
    "NavigationWidget\0nextClicked\0\0prevClicked\0"
    "searchClicked\0query\0composeClicked\0"
    "emailsSelected\0start\0end\0total\0"
    "onSearchEnterPressed\0onComposeClick\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavigationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x05,
       3,    0,   50,    2, 0x05,
       4,    1,   51,    2, 0x05,
       6,    0,   54,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       7,    3,   55,    2, 0x0a,
      11,    0,   62,    2, 0x0a,
      12,    0,   63,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NavigationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavigationWidget *_t = static_cast<NavigationWidget *>(_o);
        switch (_id) {
        case 0: _t->nextClicked(); break;
        case 1: _t->prevClicked(); break;
        case 2: _t->searchClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->composeClicked(); break;
        case 4: _t->emailsSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->onSearchEnterPressed(); break;
        case 6: _t->onComposeClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NavigationWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWidget::nextClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (NavigationWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWidget::prevClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (NavigationWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWidget::searchClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (NavigationWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWidget::composeClicked)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject NavigationWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_NavigationWidget.data,
      qt_meta_data_NavigationWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *NavigationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavigationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NavigationWidget.stringdata))
        return static_cast<void*>(const_cast< NavigationWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int NavigationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void NavigationWidget::nextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NavigationWidget::prevClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void NavigationWidget::searchClicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NavigationWidget::composeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
