/****************************************************************************
** Meta object code from reading C++ file 'admonmanagemetrooptions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../admonmanagemetrooptions.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admonmanagemetrooptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS = QtMocHelpers::stringData(
    "AdmonManageMetroOptions",
    "SwitchToAdminHome",
    "",
    "SwitchToLogin",
    "SwitchToAddStation",
    "on_pushButton_10_clicked",
    "on_pushButton_11_clicked",
    "on_pushButton_12_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[24];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[19];
    char stringdata5[25];
    char stringdata6[25];
    char stringdata7[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS_t qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "AdmonManageMetroOptions"
        QT_MOC_LITERAL(24, 17),  // "SwitchToAdminHome"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 13),  // "SwitchToLogin"
        QT_MOC_LITERAL(57, 18),  // "SwitchToAddStation"
        QT_MOC_LITERAL(76, 24),  // "on_pushButton_10_clicked"
        QT_MOC_LITERAL(101, 24),  // "on_pushButton_11_clicked"
        QT_MOC_LITERAL(126, 24)   // "on_pushButton_12_clicked"
    },
    "AdmonManageMetroOptions",
    "SwitchToAdminHome",
    "",
    "SwitchToLogin",
    "SwitchToAddStation",
    "on_pushButton_10_clicked",
    "on_pushButton_11_clicked",
    "on_pushButton_12_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAdmonManageMetroOptionsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    0,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdmonManageMetroOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAdmonManageMetroOptionsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdmonManageMetroOptions, std::true_type>,
        // method 'SwitchToAdminHome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SwitchToLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SwitchToAddStation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_10_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_11_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_12_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdmonManageMetroOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdmonManageMetroOptions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SwitchToAdminHome(); break;
        case 1: _t->SwitchToLogin(); break;
        case 2: _t->SwitchToAddStation(); break;
        case 3: _t->on_pushButton_10_clicked(); break;
        case 4: _t->on_pushButton_11_clicked(); break;
        case 5: _t->on_pushButton_12_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdmonManageMetroOptions::*)();
            if (_t _q_method = &AdmonManageMetroOptions::SwitchToAdminHome; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AdmonManageMetroOptions::*)();
            if (_t _q_method = &AdmonManageMetroOptions::SwitchToLogin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AdmonManageMetroOptions::*)();
            if (_t _q_method = &AdmonManageMetroOptions::SwitchToAddStation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *AdmonManageMetroOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdmonManageMetroOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAdmonManageMetroOptionsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdmonManageMetroOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AdmonManageMetroOptions::SwitchToAdminHome()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AdmonManageMetroOptions::SwitchToLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AdmonManageMetroOptions::SwitchToAddStation()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
