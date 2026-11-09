/****************************************************************************
** Meta object code from reading C++ file 'TimePicker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/date_time/TimePicker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimePicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
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
struct qt_meta_tag_ZN6fluent9date_time10TimePickerE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::date_time::TimePicker::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9date_time10TimePickerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::date_time::TimePicker",
        "timeChanged",
        "",
        "time",
        "selectedTimeChanged",
        "minuteIncrementChanged",
        "increment",
        "clockIdentifierChanged",
        "TimePicker::ClockIdentifier",
        "identifier",
        "localeChanged",
        "locale",
        "placeholderTextChanged",
        "TimePicker::TimeField",
        "field",
        "text",
        "confirmButtonAccessibleNameChanged",
        "name",
        "cancelButtonAccessibleNameChanged",
        "dropDownOpenChanged",
        "open",
        "setTime",
        "setSelectedTime",
        "clearSelectedTime",
        "setMinuteIncrement",
        "setClockIdentifier",
        "ClockIdentifier",
        "setLocale",
        "setPlaceholderText",
        "TimeField",
        "setConfirmButtonAccessibleName",
        "setCancelButtonAccessibleName",
        "setFieldTextAlignment",
        "Qt::Alignment",
        "alignment",
        "openPicker",
        "closePicker",
        "selectedTime",
        "minuteIncrement",
        "clockIdentifier",
        "dropDownOpen",
        "confirmButtonAccessibleName",
        "cancelButtonAccessibleName",
        "Hour",
        "Minute",
        "Period",
        "TwelveHourClock",
        "TwentyFourHourClock"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'timeChanged'
        QtMocHelpers::SignalData<void(const QTime &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QTime, 3 },
        }}),
        // Signal 'selectedTimeChanged'
        QtMocHelpers::SignalData<void(const QTime &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QTime, 3 },
        }}),
        // Signal 'minuteIncrementChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'clockIdentifierChanged'
        QtMocHelpers::SignalData<void(TimePicker::ClockIdentifier)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'localeChanged'
        QtMocHelpers::SignalData<void(const QLocale &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 11 },
        }}),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void(TimePicker::TimeField, const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { QMetaType::QString, 15 },
        }}),
        // Signal 'confirmButtonAccessibleNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Signal 'cancelButtonAccessibleNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Signal 'dropDownOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'setTime'
        QtMocHelpers::SlotData<void(const QTime &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QTime, 3 },
        }}),
        // Slot 'setSelectedTime'
        QtMocHelpers::SlotData<void(const QTime &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QTime, 3 },
        }}),
        // Slot 'clearSelectedTime'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMinuteIncrement'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'setClockIdentifier'
        QtMocHelpers::SlotData<void(enum ClockIdentifier)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 26, 9 },
        }}),
        // Slot 'setLocale'
        QtMocHelpers::SlotData<void(const QLocale &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 11 },
        }}),
        // Slot 'setPlaceholderText'
        QtMocHelpers::SlotData<void(enum TimeField, const QString &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 29, 14 }, { QMetaType::QString, 15 },
        }}),
        // Slot 'setConfirmButtonAccessibleName'
        QtMocHelpers::SlotData<void(const QString &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'setCancelButtonAccessibleName'
        QtMocHelpers::SlotData<void(const QString &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'setFieldTextAlignment'
        QtMocHelpers::SlotData<void(enum TimeField, Qt::Alignment)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 29, 14 }, { 0x80000000 | 33, 34 },
        }}),
        // Slot 'openPicker'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closePicker'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'time'
        QtMocHelpers::PropertyData<QTime>(3, QMetaType::QTime, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'selectedTime'
        QtMocHelpers::PropertyData<QTime>(37, QMetaType::QTime, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::StdCppSet, 1),
        // property 'minuteIncrement'
        QtMocHelpers::PropertyData<int>(38, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'clockIdentifier'
        QtMocHelpers::PropertyData<enum ClockIdentifier>(39, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'dropDownOpen'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags, 8),
        // property 'locale'
        QtMocHelpers::PropertyData<QLocale>(11, QMetaType::QLocale, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'confirmButtonAccessibleName'
        QtMocHelpers::PropertyData<QString>(41, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'cancelButtonAccessibleName'
        QtMocHelpers::PropertyData<QString>(42, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'TimeField'
        QtMocHelpers::EnumData<enum TimeField>(29, 29, QMC::EnumIsScoped).add({
            {   43, TimeField::Hour },
            {   44, TimeField::Minute },
            {   45, TimeField::Period },
        }),
        // enum 'ClockIdentifier'
        QtMocHelpers::EnumData<enum ClockIdentifier>(26, 26, QMC::EnumIsScoped).add({
            {   46, ClockIdentifier::TwelveHourClock },
            {   47, ClockIdentifier::TwentyFourHourClock },
        }),
    };
    return QtMocHelpers::metaObjectData<TimePicker, qt_meta_tag_ZN6fluent9date_time10TimePickerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::date_time::TimePicker::staticMetaObject = { {
    QMetaObject::SuperData::link<fluent::basicinput::Button::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time10TimePickerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time10TimePickerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9date_time10TimePickerE_t>.metaTypes,
    nullptr
} };

void fluent::date_time::TimePicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TimePicker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->timeChanged((*reinterpret_cast<std::add_pointer_t<QTime>>(_a[1]))); break;
        case 1: _t->selectedTimeChanged((*reinterpret_cast<std::add_pointer_t<QTime>>(_a[1]))); break;
        case 2: _t->minuteIncrementChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->clockIdentifierChanged((*reinterpret_cast<std::add_pointer_t<TimePicker::ClockIdentifier>>(_a[1]))); break;
        case 4: _t->localeChanged((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 5: _t->placeholderTextChanged((*reinterpret_cast<std::add_pointer_t<TimePicker::TimeField>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->confirmButtonAccessibleNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->cancelButtonAccessibleNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->dropDownOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setTime((*reinterpret_cast<std::add_pointer_t<QTime>>(_a[1]))); break;
        case 10: _t->setSelectedTime((*reinterpret_cast<std::add_pointer_t<QTime>>(_a[1]))); break;
        case 11: _t->clearSelectedTime(); break;
        case 12: _t->setMinuteIncrement((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->setClockIdentifier((*reinterpret_cast<std::add_pointer_t<enum ClockIdentifier>>(_a[1]))); break;
        case 14: _t->setLocale((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 15: _t->setPlaceholderText((*reinterpret_cast<std::add_pointer_t<enum TimeField>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->setConfirmButtonAccessibleName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->setCancelButtonAccessibleName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->setFieldTextAlignment((*reinterpret_cast<std::add_pointer_t<enum TimeField>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::Alignment>>(_a[2]))); break;
        case 19: _t->openPicker(); break;
        case 20: _t->closePicker(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(const QTime & )>(_a, &TimePicker::timeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(const QTime & )>(_a, &TimePicker::selectedTimeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(int )>(_a, &TimePicker::minuteIncrementChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(TimePicker::ClockIdentifier )>(_a, &TimePicker::clockIdentifierChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(const QLocale & )>(_a, &TimePicker::localeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(TimePicker::TimeField , const QString & )>(_a, &TimePicker::placeholderTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(const QString & )>(_a, &TimePicker::confirmButtonAccessibleNameChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(const QString & )>(_a, &TimePicker::cancelButtonAccessibleNameChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimePicker::*)(bool )>(_a, &TimePicker::dropDownOpenChanged, 8))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QTime*>(_v) = _t->time(); break;
        case 1: *reinterpret_cast<QTime*>(_v) = _t->selectedTime(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->minuteIncrement(); break;
        case 3: *reinterpret_cast<enum ClockIdentifier*>(_v) = _t->clockIdentifier(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isDropDownOpen(); break;
        case 5: *reinterpret_cast<QLocale*>(_v) = _t->locale(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->confirmButtonAccessibleName(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->cancelButtonAccessibleName(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTime(*reinterpret_cast<QTime*>(_v)); break;
        case 1: _t->setSelectedTime(*reinterpret_cast<QTime*>(_v)); break;
        case 2: _t->setMinuteIncrement(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setClockIdentifier(*reinterpret_cast<enum ClockIdentifier*>(_v)); break;
        case 5: _t->setLocale(*reinterpret_cast<QLocale*>(_v)); break;
        case 6: _t->setConfirmButtonAccessibleName(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setCancelButtonAccessibleName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 1: _t->clearSelectedTime(); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::date_time::TimePicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::date_time::TimePicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time10TimePickerE_t>.strings))
        return static_cast<void*>(this);
    return fluent::basicinput::Button::qt_metacast(_clname);
}

int fluent::date_time::TimePicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = fluent::basicinput::Button::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void fluent::date_time::TimePicker::timeChanged(const QTime & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::date_time::TimePicker::selectedTimeChanged(const QTime & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::date_time::TimePicker::minuteIncrementChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::date_time::TimePicker::clockIdentifierChanged(TimePicker::ClockIdentifier _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::date_time::TimePicker::localeChanged(const QLocale & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::date_time::TimePicker::placeholderTextChanged(TimePicker::TimeField _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void fluent::date_time::TimePicker::confirmButtonAccessibleNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::date_time::TimePicker::cancelButtonAccessibleNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::date_time::TimePicker::dropDownOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
