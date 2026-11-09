/****************************************************************************
** Meta object code from reading C++ file 'DateTimeRangePicker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/date_time/DateTimeRangePicker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DateTimeRangePicker.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9date_time19DateTimeRangePickerE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::date_time::DateTimeRangePicker::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9date_time19DateTimeRangePickerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::date_time::DateTimeRangePicker",
        "startDateTimeChanged",
        "",
        "value",
        "endDateTimeChanged",
        "rangeChanged",
        "start",
        "end",
        "timeEnabledChanged",
        "enabled",
        "rangeValidityChanged",
        "valid",
        "startLabelTextChanged",
        "text",
        "endLabelTextChanged",
        "invalidRangeTextChanged",
        "localeChanged",
        "locale",
        "placeholderTextChanged",
        "pickerOpenChanged",
        "open",
        "presetsVisibleChanged",
        "visible",
        "autoApplyPresetsEnabledChanged",
        "presetRequested",
        "Preset",
        "preset",
        "setStartDateTime",
        "setEndDateTime",
        "setRange",
        "clearStart",
        "clearEnd",
        "clear",
        "setTimeEnabled",
        "setStartLabelText",
        "setEndLabelText",
        "setInvalidRangeText",
        "setLocale",
        "setPlaceholderText",
        "setPickerOpen",
        "openPicker",
        "closePicker",
        "setPresetsVisible",
        "setAutoApplyPresetsEnabled",
        "applyPreset",
        "reference",
        "startDateTime",
        "endDateTime",
        "timeEnabled",
        "rangeValid",
        "startLabelText",
        "endLabelText",
        "invalidRangeText",
        "placeholderText",
        "pickerOpen",
        "presetsVisible",
        "autoApplyPresetsEnabled",
        "Today",
        "Yesterday",
        "PastWeek",
        "PastMonth",
        "PastSixMonths",
        "PastYear"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'startDateTimeChanged'
        QtMocHelpers::SignalData<void(const QDateTime &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 3 },
        }}),
        // Signal 'endDateTimeChanged'
        QtMocHelpers::SignalData<void(const QDateTime &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 3 },
        }}),
        // Signal 'rangeChanged'
        QtMocHelpers::SignalData<void(const QDateTime &, const QDateTime &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 6 }, { QMetaType::QDateTime, 7 },
        }}),
        // Signal 'timeEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'rangeValidityChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'startLabelTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'endLabelTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'invalidRangeTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'localeChanged'
        QtMocHelpers::SignalData<void(const QLocale &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 17 },
        }}),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'pickerOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Signal 'presetsVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Signal 'autoApplyPresetsEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'presetRequested'
        QtMocHelpers::SignalData<void(enum Preset)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'setStartDateTime'
        QtMocHelpers::SlotData<void(const QDateTime &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 3 },
        }}),
        // Slot 'setEndDateTime'
        QtMocHelpers::SlotData<void(const QDateTime &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 3 },
        }}),
        // Slot 'setRange'
        QtMocHelpers::SlotData<void(const QDateTime &, const QDateTime &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDateTime, 6 }, { QMetaType::QDateTime, 7 },
        }}),
        // Slot 'clearStart'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearEnd'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setTimeEnabled'
        QtMocHelpers::SlotData<void(bool)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'setStartLabelText'
        QtMocHelpers::SlotData<void(const QString &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'setEndLabelText'
        QtMocHelpers::SlotData<void(const QString &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'setInvalidRangeText'
        QtMocHelpers::SlotData<void(const QString &)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'setLocale'
        QtMocHelpers::SlotData<void(const QLocale &)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 17 },
        }}),
        // Slot 'setPlaceholderText'
        QtMocHelpers::SlotData<void(const QString &)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'setPickerOpen'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'openPicker'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closePicker'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setPresetsVisible'
        QtMocHelpers::SlotData<void(bool)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'setAutoApplyPresetsEnabled'
        QtMocHelpers::SlotData<void(bool)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'applyPreset'
        QtMocHelpers::SlotData<void(enum Preset)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'applyPreset'
        QtMocHelpers::SlotData<void(enum Preset, const QDateTime &)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 }, { QMetaType::QDateTime, 45 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'startDateTime'
        QtMocHelpers::PropertyData<QDateTime>(46, QMetaType::QDateTime, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::StdCppSet, 0),
        // property 'endDateTime'
        QtMocHelpers::PropertyData<QDateTime>(47, QMetaType::QDateTime, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::StdCppSet, 1),
        // property 'timeEnabled'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'rangeValid'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'startLabelText'
        QtMocHelpers::PropertyData<QString>(50, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'endLabelText'
        QtMocHelpers::PropertyData<QString>(51, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'invalidRangeText'
        QtMocHelpers::PropertyData<QString>(52, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'locale'
        QtMocHelpers::PropertyData<QLocale>(17, QMetaType::QLocale, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(53, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'pickerOpen'
        QtMocHelpers::PropertyData<bool>(54, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'presetsVisible'
        QtMocHelpers::PropertyData<bool>(55, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'autoApplyPresetsEnabled'
        QtMocHelpers::PropertyData<bool>(56, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Preset'
        QtMocHelpers::EnumData<enum Preset>(25, 25, QMC::EnumIsScoped).add({
            {   57, Preset::Today },
            {   58, Preset::Yesterday },
            {   59, Preset::PastWeek },
            {   60, Preset::PastMonth },
            {   61, Preset::PastSixMonths },
            {   62, Preset::PastYear },
        }),
    };
    return QtMocHelpers::metaObjectData<DateTimeRangePicker, qt_meta_tag_ZN6fluent9date_time19DateTimeRangePickerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::date_time::DateTimeRangePicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time19DateTimeRangePickerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time19DateTimeRangePickerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9date_time19DateTimeRangePickerE_t>.metaTypes,
    nullptr
} };

void fluent::date_time::DateTimeRangePicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DateTimeRangePicker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->startDateTimeChanged((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 1: _t->endDateTimeChanged((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 3: _t->timeEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->rangeValidityChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->startLabelTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->endLabelTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->invalidRangeTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->localeChanged((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 9: _t->placeholderTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->pickerOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->presetsVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->autoApplyPresetsEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->presetRequested((*reinterpret_cast<std::add_pointer_t<enum Preset>>(_a[1]))); break;
        case 14: _t->setStartDateTime((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 15: _t->setEndDateTime((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 16: _t->setRange((*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 17: _t->clearStart(); break;
        case 18: _t->clearEnd(); break;
        case 19: _t->clear(); break;
        case 20: _t->setTimeEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->setStartLabelText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->setEndLabelText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->setInvalidRangeText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->setLocale((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 25: _t->setPlaceholderText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->setPickerOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->openPicker(); break;
        case 28: _t->closePicker(); break;
        case 29: _t->setPresetsVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->setAutoApplyPresetsEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->applyPreset((*reinterpret_cast<std::add_pointer_t<enum Preset>>(_a[1]))); break;
        case 32: _t->applyPreset((*reinterpret_cast<std::add_pointer_t<enum Preset>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDateTime>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(const QDateTime & )>(_a, &DateTimeRangePicker::startDateTimeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(const QDateTime & )>(_a, &DateTimeRangePicker::endDateTimeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(const QDateTime & , const QDateTime & )>(_a, &DateTimeRangePicker::rangeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(bool )>(_a, &DateTimeRangePicker::timeEnabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(bool )>(_a, &DateTimeRangePicker::rangeValidityChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(const QString & )>(_a, &DateTimeRangePicker::startLabelTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(const QString & )>(_a, &DateTimeRangePicker::endLabelTextChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(const QString & )>(_a, &DateTimeRangePicker::invalidRangeTextChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(const QLocale & )>(_a, &DateTimeRangePicker::localeChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(const QString & )>(_a, &DateTimeRangePicker::placeholderTextChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(bool )>(_a, &DateTimeRangePicker::pickerOpenChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(bool )>(_a, &DateTimeRangePicker::presetsVisibleChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(bool )>(_a, &DateTimeRangePicker::autoApplyPresetsEnabledChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (DateTimeRangePicker::*)(Preset )>(_a, &DateTimeRangePicker::presetRequested, 13))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QDateTime*>(_v) = _t->startDateTime(); break;
        case 1: *reinterpret_cast<QDateTime*>(_v) = _t->endDateTime(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isTimeEnabled(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isRangeValid(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->startLabelText(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->endLabelText(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->invalidRangeText(); break;
        case 7: *reinterpret_cast<QLocale*>(_v) = _t->locale(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isPickerOpen(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isPresetsVisible(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isAutoApplyPresetsEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartDateTime(*reinterpret_cast<QDateTime*>(_v)); break;
        case 1: _t->setEndDateTime(*reinterpret_cast<QDateTime*>(_v)); break;
        case 2: _t->setTimeEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setStartLabelText(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setEndLabelText(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setInvalidRangeText(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setLocale(*reinterpret_cast<QLocale*>(_v)); break;
        case 8: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 9: _t->setPickerOpen(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setPresetsVisible(*reinterpret_cast<bool*>(_v)); break;
        case 11: _t->setAutoApplyPresetsEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: _t->clearStart(); break;
        case 1: _t->clearEnd(); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::date_time::DateTimeRangePicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::date_time::DateTimeRangePicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time19DateTimeRangePickerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::date_time::DateTimeRangePicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void fluent::date_time::DateTimeRangePicker::startDateTimeChanged(const QDateTime & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::date_time::DateTimeRangePicker::endDateTimeChanged(const QDateTime & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::date_time::DateTimeRangePicker::rangeChanged(const QDateTime & _t1, const QDateTime & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void fluent::date_time::DateTimeRangePicker::timeEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::date_time::DateTimeRangePicker::rangeValidityChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::date_time::DateTimeRangePicker::startLabelTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::date_time::DateTimeRangePicker::endLabelTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::date_time::DateTimeRangePicker::invalidRangeTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::date_time::DateTimeRangePicker::localeChanged(const QLocale & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::date_time::DateTimeRangePicker::placeholderTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::date_time::DateTimeRangePicker::pickerOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::date_time::DateTimeRangePicker::presetsVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::date_time::DateTimeRangePicker::autoApplyPresetsEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::date_time::DateTimeRangePicker::presetRequested(Preset _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}
QT_WARNING_POP
