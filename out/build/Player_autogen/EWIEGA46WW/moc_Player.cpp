/****************************************************************************
** Meta object code from reading C++ file 'Player.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Player.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
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
struct qt_meta_stringdata_CLASSPlayerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPlayerENDCLASS = QtMocHelpers::stringData(
    "Player",
    "on_playBtn_clicked",
    "",
    "on_changeBtn_clicked",
    "on_volumeSlider_valueChanged",
    "on_playSpeedCmb_currentIndexChanged",
    "on_progressSlider_sliderMoved",
    "value",
    "on_progressSlider_sliderPressed",
    "on_progressSlider_sliderReleased"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlayerENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[7];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[29];
    char stringdata5[36];
    char stringdata6[30];
    char stringdata7[6];
    char stringdata8[32];
    char stringdata9[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlayerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlayerENDCLASS_t qt_meta_stringdata_CLASSPlayerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Player"
        QT_MOC_LITERAL(7, 18),  // "on_playBtn_clicked"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 20),  // "on_changeBtn_clicked"
        QT_MOC_LITERAL(48, 28),  // "on_volumeSlider_valueChanged"
        QT_MOC_LITERAL(77, 35),  // "on_playSpeedCmb_currentIndexC..."
        QT_MOC_LITERAL(113, 29),  // "on_progressSlider_sliderMoved"
        QT_MOC_LITERAL(143, 5),  // "value"
        QT_MOC_LITERAL(149, 31),  // "on_progressSlider_sliderPressed"
        QT_MOC_LITERAL(181, 32)   // "on_progressSlider_sliderReleased"
    },
    "Player",
    "on_playBtn_clicked",
    "",
    "on_changeBtn_clicked",
    "on_volumeSlider_valueChanged",
    "on_playSpeedCmb_currentIndexChanged",
    "on_progressSlider_sliderMoved",
    "value",
    "on_progressSlider_sliderPressed",
    "on_progressSlider_sliderReleased"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlayerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    1,   60,    2, 0x08,    5 /* Private */,
       8,    0,   63,    2, 0x08,    7 /* Private */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlayerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlayerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlayerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Player, std::true_type>,
        // method 'on_playBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changeBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_volumeSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_playSpeedCmb_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_progressSlider_sliderMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_progressSlider_sliderPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_progressSlider_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_playBtn_clicked(); break;
        case 1: _t->on_changeBtn_clicked(); break;
        case 2: _t->on_volumeSlider_valueChanged(); break;
        case 3: _t->on_playSpeedCmb_currentIndexChanged(); break;
        case 4: _t->on_progressSlider_sliderMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_progressSlider_sliderPressed(); break;
        case 6: _t->on_progressSlider_sliderReleased(); break;
        default: ;
        }
    }
}

const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlayerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
