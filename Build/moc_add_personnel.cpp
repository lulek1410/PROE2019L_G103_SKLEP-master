/****************************************************************************
** Meta object code from reading C++ file 'add_personnel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Headers/add_personnel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_personnel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddPersonnel_t {
    QByteArrayData data[7];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddPersonnel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddPersonnel_t qt_meta_stringdata_AddPersonnel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AddPersonnel"
QT_MOC_LITERAL(1, 13, 26), // "on_Anuluj_mechanik_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 28), // "on_Anuluj_sprzedawca_clicked"
QT_MOC_LITERAL(4, 70, 28), // "on_Akceptuj_mechanik_clicked"
QT_MOC_LITERAL(5, 99, 18), // "shared_ptr<Person>"
QT_MOC_LITERAL(6, 118, 19) // "on_Akceptuj_clicked"

    },
    "AddPersonnel\0on_Anuluj_mechanik_clicked\0"
    "\0on_Anuluj_sprzedawca_clicked\0"
    "on_Akceptuj_mechanik_clicked\0"
    "shared_ptr<Person>\0on_Akceptuj_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddPersonnel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       6,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 5,
    0x80000000 | 5,

       0        // eod
};

void AddPersonnel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddPersonnel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->on_Anuluj_mechanik_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->on_Anuluj_sprzedawca_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { shared_ptr<Person> _r = _t->on_Akceptuj_mechanik_clicked();
            if (_a[0]) *reinterpret_cast< shared_ptr<Person>*>(_a[0]) = std::move(_r); }  break;
        case 3: { shared_ptr<Person> _r = _t->on_Akceptuj_clicked();
            if (_a[0]) *reinterpret_cast< shared_ptr<Person>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddPersonnel::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AddPersonnel.data,
    qt_meta_data_AddPersonnel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddPersonnel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddPersonnel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddPersonnel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddPersonnel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
