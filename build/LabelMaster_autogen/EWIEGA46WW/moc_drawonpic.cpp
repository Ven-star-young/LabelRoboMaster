/****************************************************************************
** Meta object code from reading C++ file 'drawonpic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../drawonpic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawonpic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawOnPic_t {
    QByteArrayData data[26];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawOnPic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawOnPic_t qt_meta_stringdata_DrawOnPic = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DrawOnPic"
QT_MOC_LITERAL(1, 10, 12), // "labelChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "QVector<box_t>"
QT_MOC_LITERAL(4, 39, 15), // "delCurrentImage"
QT_MOC_LITERAL(5, 55, 23), // "update_list_name_signal"
QT_MOC_LITERAL(6, 79, 9), // "LabelMode"
QT_MOC_LITERAL(7, 89, 4), // "mode"
QT_MOC_LITERAL(8, 94, 14), // "setCurrentFile"
QT_MOC_LITERAL(9, 109, 4), // "file"
QT_MOC_LITERAL(10, 114, 9), // "loadImage"
QT_MOC_LITERAL(11, 124, 9), // "saveLabel"
QT_MOC_LITERAL(12, 134, 13), // "setAddingMode"
QT_MOC_LITERAL(13, 148, 13), // "setNormalMode"
QT_MOC_LITERAL(14, 162, 11), // "setFocusBox"
QT_MOC_LITERAL(15, 174, 5), // "index"
QT_MOC_LITERAL(16, 180, 9), // "removeBox"
QT_MOC_LITERAL(17, 190, 6), // "box_t*"
QT_MOC_LITERAL(18, 197, 3), // "box"
QT_MOC_LITERAL(19, 201, 5), // "smart"
QT_MOC_LITERAL(20, 207, 9), // "updateBox"
QT_MOC_LITERAL(21, 217, 19), // "stayPositionChanged"
QT_MOC_LITERAL(22, 237, 5), // "value"
QT_MOC_LITERAL(23, 243, 10), // "illuminate"
QT_MOC_LITERAL(24, 254, 22), // "histogram_Equalization"
QT_MOC_LITERAL(25, 277, 11) // "cover_brush"

    },
    "DrawOnPic\0labelChanged\0\0QVector<box_t>\0"
    "delCurrentImage\0update_list_name_signal\0"
    "LabelMode\0mode\0setCurrentFile\0file\0"
    "loadImage\0saveLabel\0setAddingMode\0"
    "setNormalMode\0setFocusBox\0index\0"
    "removeBox\0box_t*\0box\0smart\0updateBox\0"
    "stayPositionChanged\0value\0illuminate\0"
    "histogram_Equalization\0cover_brush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawOnPic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    0,   97,    2, 0x06 /* Public */,
       5,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  101,    2, 0x0a /* Public */,
      10,    0,  104,    2, 0x0a /* Public */,
      11,    0,  105,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x0a /* Public */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    1,  108,    2, 0x0a /* Public */,
      16,    1,  111,    2, 0x0a /* Public */,
      19,    0,  114,    2, 0x0a /* Public */,
      20,    0,  115,    2, 0x0a /* Public */,
      21,    1,  116,    2, 0x0a /* Public */,
      23,    0,  119,    2, 0x0a /* Public */,
      24,    0,  120,    2, 0x0a /* Public */,
      25,    0,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DrawOnPic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawOnPic *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->labelChanged((*reinterpret_cast< const QVector<box_t>(*)>(_a[1]))); break;
        case 1: _t->delCurrentImage(); break;
        case 2: _t->update_list_name_signal((*reinterpret_cast< const LabelMode(*)>(_a[1]))); break;
        case 3: _t->setCurrentFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->loadImage(); break;
        case 5: _t->saveLabel(); break;
        case 6: _t->setAddingMode(); break;
        case 7: _t->setNormalMode(); break;
        case 8: _t->setFocusBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->removeBox((*reinterpret_cast< box_t*(*)>(_a[1]))); break;
        case 10: _t->smart(); break;
        case 11: _t->updateBox(); break;
        case 12: _t->stayPositionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->illuminate(); break;
        case 14: _t->histogram_Equalization(); break;
        case 15: _t->cover_brush(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawOnPic::*)(const QVector<box_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawOnPic::labelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrawOnPic::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawOnPic::delCurrentImage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DrawOnPic::*)(const LabelMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawOnPic::update_list_name_signal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrawOnPic::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_DrawOnPic.data,
    qt_meta_data_DrawOnPic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrawOnPic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawOnPic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawOnPic.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int DrawOnPic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void DrawOnPic::labelChanged(const QVector<box_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DrawOnPic::delCurrentImage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DrawOnPic::update_list_name_signal(const LabelMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
