/****************************************************************************
** Meta object code from reading C++ file 'labeldialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../labeldialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labeldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LabelDialog_t {
    QByteArrayData data[8];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabelDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabelDialog_t qt_meta_stringdata_LabelDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LabelDialog"
QT_MOC_LITERAL(1, 12, 14), // "removeBoxEvent"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 24), // "QVector<box_t>::iterator"
QT_MOC_LITERAL(4, 53, 8), // "box_iter"
QT_MOC_LITERAL(5, 62, 14), // "changeBoxEvent"
QT_MOC_LITERAL(6, 77, 21), // "on_saveButton_pressed"
QT_MOC_LITERAL(7, 99, 23) // "on_deleteButton_pressed"

    },
    "LabelDialog\0removeBoxEvent\0\0"
    "QVector<box_t>::iterator\0box_iter\0"
    "changeBoxEvent\0on_saveButton_pressed\0"
    "on_deleteButton_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabelDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LabelDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LabelDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->removeBoxEvent((*reinterpret_cast< QVector<box_t>::iterator(*)>(_a[1]))); break;
        case 1: _t->changeBoxEvent(); break;
        case 2: _t->on_saveButton_pressed(); break;
        case 3: _t->on_deleteButton_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LabelDialog::*)(QVector<box_t>::iterator );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LabelDialog::removeBoxEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LabelDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LabelDialog::changeBoxEvent)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LabelDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LabelDialog.data,
    qt_meta_data_LabelDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LabelDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LabelDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LabelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LabelDialog::removeBoxEvent(QVector<box_t>::iterator _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LabelDialog::changeBoxEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
