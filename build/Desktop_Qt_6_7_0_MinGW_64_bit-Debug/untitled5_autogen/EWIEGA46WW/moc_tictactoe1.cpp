/****************************************************************************
** Meta object code from reading C++ file 'tictactoe1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tictactoe1.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoe1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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
struct qt_meta_stringdata_CLASSDifficultyDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDifficultyDialogENDCLASS = QtMocHelpers::stringData(
    "DifficultyDialog",
    "difficultySelected",
    "",
    "difficulty",
    "easySelected",
    "mediumSelected",
    "hardSelected",
    "selectEasy",
    "selectMedium",
    "selectHard",
    "back_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDifficultyDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    0,   65,    2, 0x06,    3 /* Public */,
       5,    0,   66,    2, 0x06,    4 /* Public */,
       6,    0,   67,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   68,    2, 0x08,    6 /* Private */,
       8,    0,   69,    2, 0x08,    7 /* Private */,
       9,    0,   70,    2, 0x08,    8 /* Private */,
      10,    0,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DifficultyDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDifficultyDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDifficultyDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDifficultyDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DifficultyDialog, std::true_type>,
        // method 'difficultySelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'easySelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mediumSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hardSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectEasy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectMedium'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectHard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DifficultyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DifficultyDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->difficultySelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->easySelected(); break;
        case 2: _t->mediumSelected(); break;
        case 3: _t->hardSelected(); break;
        case 4: _t->selectEasy(); break;
        case 5: _t->selectMedium(); break;
        case 6: _t->selectHard(); break;
        case 7: _t->back_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DifficultyDialog::*)(int );
            if (_t _q_method = &DifficultyDialog::difficultySelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DifficultyDialog::*)();
            if (_t _q_method = &DifficultyDialog::easySelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DifficultyDialog::*)();
            if (_t _q_method = &DifficultyDialog::mediumSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DifficultyDialog::*)();
            if (_t _q_method = &DifficultyDialog::hardSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *DifficultyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DifficultyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDifficultyDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DifficultyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DifficultyDialog::difficultySelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DifficultyDialog::easySelected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DifficultyDialog::mediumSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DifficultyDialog::hardSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTicTacToe1ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTicTacToe1ENDCLASS = QtMocHelpers::stringData(
    "TicTacToe1",
    "gameEnded",
    "",
    "askDifficulty",
    "startRealGame",
    "makeAIMove",
    "minimax",
    "depth",
    "maxDepth",
    "maximizingPlayer"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTicTacToe1ENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    3,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    7,    8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject TicTacToe1::staticMetaObject = { {
    QMetaObject::SuperData::link<TicTacToe::staticMetaObject>(),
    qt_meta_stringdata_CLASSTicTacToe1ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTicTacToe1ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTicTacToe1ENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TicTacToe1, std::true_type>,
        // method 'gameEnded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'askDifficulty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startRealGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'makeAIMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimax'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void TicTacToe1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TicTacToe1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gameEnded(); break;
        case 1: _t->askDifficulty(); break;
        case 2: _t->startRealGame(); break;
        case 3: _t->makeAIMove(); break;
        case 4: { int _r = _t->minimax((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TicTacToe1::*)();
            if (_t _q_method = &TicTacToe1::gameEnded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TicTacToe1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TicTacToe1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTicTacToe1ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TicTacToe::qt_metacast(_clname);
}

int TicTacToe1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TicTacToe::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TicTacToe1::gameEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
