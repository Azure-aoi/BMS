/****************************************************************************
** Meta object code from reading C++ file 'DatePicker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/date_time/DatePicker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatePicker.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9date_time10DatePickerE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::date_time::DatePicker::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9date_time10DatePickerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::date_time::DatePicker",
        "dateChanged",
        "",
        "date",
        "selectedDateChanged",
        "minimumDateChanged",
        "maximumDateChanged",
        "monthVisibleChanged",
        "visible",
        "dayVisibleChanged",
        "yearVisibleChanged",
        "monthFormatChanged",
        "DatePicker::MonthFormat",
        "format",
        "dayFormatChanged",
        "DatePicker::DayFormat",
        "yearFormatChanged",
        "DatePicker::YearFormat",
        "localeChanged",
        "locale",
        "placeholderTextChanged",
        "DatePicker::DateField",
        "field",
        "text",
        "confirmButtonAccessibleNameChanged",
        "name",
        "cancelButtonAccessibleNameChanged",
        "dropDownOpenChanged",
        "open",
        "setDate",
        "setSelectedDate",
        "clearSelectedDate",
        "setMinimumDate",
        "setMaximumDate",
        "setDateRange",
        "minimumDate",
        "maximumDate",
        "setMonthVisible",
        "setDayVisible",
        "setYearVisible",
        "setMonthFormat",
        "MonthFormat",
        "setDayFormat",
        "DayFormat",
        "setYearFormat",
        "YearFormat",
        "setLocale",
        "setPlaceholderText",
        "DateField",
        "setConfirmButtonAccessibleName",
        "setCancelButtonAccessibleName",
        "setFieldTextAlignment",
        "Qt::Alignment",
        "alignment",
        "openPicker",
        "closePicker",
        "selectedDate",
        "monthVisible",
        "dayVisible",
        "yearVisible",
        "monthFormat",
        "dayFormat",
        "yearFormat",
        "dropDownOpen",
        "confirmButtonAccessibleName",
        "cancelButtonAccessibleName",
        "Month",
        "Day",
        "Year",
        "FullMonthName",
        "AbbreviatedMonthName",
        "NumericMonth",
        "TwoDigitMonth",
        "DayInteger",
        "TwoDigitDay",
        "DayIntegerWithAbbreviatedWeekday",
        "FullYear",
        "TwoDigitYear"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Signal 'selectedDateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Signal 'minimumDateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Signal 'maximumDateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Signal 'monthVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'dayVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'yearVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'monthFormatChanged'
        QtMocHelpers::SignalData<void(DatePicker::MonthFormat)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Signal 'dayFormatChanged'
        QtMocHelpers::SignalData<void(DatePicker::DayFormat)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 13 },
        }}),
        // Signal 'yearFormatChanged'
        QtMocHelpers::SignalData<void(DatePicker::YearFormat)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 13 },
        }}),
        // Signal 'localeChanged'
        QtMocHelpers::SignalData<void(const QLocale &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 19 },
        }}),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void(DatePicker::DateField, const QString &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 }, { QMetaType::QString, 23 },
        }}),
        // Signal 'confirmButtonAccessibleNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Signal 'cancelButtonAccessibleNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Signal 'dropDownOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Slot 'setDate'
        QtMocHelpers::SlotData<void(const QDate &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Slot 'setSelectedDate'
        QtMocHelpers::SlotData<void(const QDate &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Slot 'clearSelectedDate'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMinimumDate'
        QtMocHelpers::SlotData<void(const QDate &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Slot 'setMaximumDate'
        QtMocHelpers::SlotData<void(const QDate &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Slot 'setDateRange'
        QtMocHelpers::SlotData<void(const QDate &, const QDate &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 35 }, { QMetaType::QDate, 36 },
        }}),
        // Slot 'setMonthVisible'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'setDayVisible'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'setYearVisible'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'setMonthFormat'
        QtMocHelpers::SlotData<void(enum MonthFormat)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 13 },
        }}),
        // Slot 'setDayFormat'
        QtMocHelpers::SlotData<void(enum DayFormat)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 13 },
        }}),
        // Slot 'setYearFormat'
        QtMocHelpers::SlotData<void(enum YearFormat)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 45, 13 },
        }}),
        // Slot 'setLocale'
        QtMocHelpers::SlotData<void(const QLocale &)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 19 },
        }}),
        // Slot 'setPlaceholderText'
        QtMocHelpers::SlotData<void(enum DateField, const QString &)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 48, 22 }, { QMetaType::QString, 23 },
        }}),
        // Slot 'setConfirmButtonAccessibleName'
        QtMocHelpers::SlotData<void(const QString &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'setCancelButtonAccessibleName'
        QtMocHelpers::SlotData<void(const QString &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'setFieldTextAlignment'
        QtMocHelpers::SlotData<void(enum DateField, Qt::Alignment)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 48, 22 }, { 0x80000000 | 52, 53 },
        }}),
        // Slot 'openPicker'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closePicker'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'date'
        QtMocHelpers::PropertyData<QDate>(3, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'selectedDate'
        QtMocHelpers::PropertyData<QDate>(56, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::StdCppSet, 1),
        // property 'minimumDate'
        QtMocHelpers::PropertyData<QDate>(35, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'maximumDate'
        QtMocHelpers::PropertyData<QDate>(36, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'monthVisible'
        QtMocHelpers::PropertyData<bool>(57, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'dayVisible'
        QtMocHelpers::PropertyData<bool>(58, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'yearVisible'
        QtMocHelpers::PropertyData<bool>(59, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'monthFormat'
        QtMocHelpers::PropertyData<enum MonthFormat>(60, 0x80000000 | 41, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'dayFormat'
        QtMocHelpers::PropertyData<enum DayFormat>(61, 0x80000000 | 43, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
        // property 'yearFormat'
        QtMocHelpers::PropertyData<enum YearFormat>(62, 0x80000000 | 45, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'dropDownOpen'
        QtMocHelpers::PropertyData<bool>(63, QMetaType::Bool, QMC::DefaultPropertyFlags, 14),
        // property 'locale'
        QtMocHelpers::PropertyData<QLocale>(19, QMetaType::QLocale, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'confirmButtonAccessibleName'
        QtMocHelpers::PropertyData<QString>(64, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'cancelButtonAccessibleName'
        QtMocHelpers::PropertyData<QString>(65, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DateField'
        QtMocHelpers::EnumData<enum DateField>(48, 48, QMC::EnumIsScoped).add({
            {   66, DateField::Month },
            {   67, DateField::Day },
            {   68, DateField::Year },
        }),
        // enum 'MonthFormat'
        QtMocHelpers::EnumData<enum MonthFormat>(41, 41, QMC::EnumIsScoped).add({
            {   69, MonthFormat::FullMonthName },
            {   70, MonthFormat::AbbreviatedMonthName },
            {   71, MonthFormat::NumericMonth },
            {   72, MonthFormat::TwoDigitMonth },
        }),
        // enum 'DayFormat'
        QtMocHelpers::EnumData<enum DayFormat>(43, 43, QMC::EnumIsScoped).add({
            {   73, DayFormat::DayInteger },
            {   74, DayFormat::TwoDigitDay },
            {   75, DayFormat::DayIntegerWithAbbreviatedWeekday },
        }),
        // enum 'YearFormat'
        QtMocHelpers::EnumData<enum YearFormat>(45, 45, QMC::EnumIsScoped).add({
            {   76, YearFormat::FullYear },
            {   77, YearFormat::TwoDigitYear },
        }),
    };
    return QtMocHelpers::metaObjectData<DatePicker, qt_meta_tag_ZN6fluent9date_time10DatePickerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::date_time::DatePicker::staticMetaObject = { {
    QMetaObject::SuperData::link<fluent::basicinput::Button::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time10DatePickerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time10DatePickerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9date_time10DatePickerE_t>.metaTypes,
    nullptr
} };

void fluent::date_time::DatePicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DatePicker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 1: _t->selectedDateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 2: _t->minimumDateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 3: _t->maximumDateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 4: _t->monthVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->dayVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->yearVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->monthFormatChanged((*reinterpret_cast<std::add_pointer_t<DatePicker::MonthFormat>>(_a[1]))); break;
        case 8: _t->dayFormatChanged((*reinterpret_cast<std::add_pointer_t<DatePicker::DayFormat>>(_a[1]))); break;
        case 9: _t->yearFormatChanged((*reinterpret_cast<std::add_pointer_t<DatePicker::YearFormat>>(_a[1]))); break;
        case 10: _t->localeChanged((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 11: _t->placeholderTextChanged((*reinterpret_cast<std::add_pointer_t<DatePicker::DateField>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->confirmButtonAccessibleNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->cancelButtonAccessibleNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->dropDownOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->setDate((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 16: _t->setSelectedDate((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 17: _t->clearSelectedDate(); break;
        case 18: _t->setMinimumDate((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 19: _t->setMaximumDate((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 20: _t->setDateRange((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDate>>(_a[2]))); break;
        case 21: _t->setMonthVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->setDayVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->setYearVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->setMonthFormat((*reinterpret_cast<std::add_pointer_t<enum MonthFormat>>(_a[1]))); break;
        case 25: _t->setDayFormat((*reinterpret_cast<std::add_pointer_t<enum DayFormat>>(_a[1]))); break;
        case 26: _t->setYearFormat((*reinterpret_cast<std::add_pointer_t<enum YearFormat>>(_a[1]))); break;
        case 27: _t->setLocale((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 28: _t->setPlaceholderText((*reinterpret_cast<std::add_pointer_t<enum DateField>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 29: _t->setConfirmButtonAccessibleName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->setCancelButtonAccessibleName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->setFieldTextAlignment((*reinterpret_cast<std::add_pointer_t<enum DateField>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::Alignment>>(_a[2]))); break;
        case 32: _t->openPicker(); break;
        case 33: _t->closePicker(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(const QDate & )>(_a, &DatePicker::dateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(const QDate & )>(_a, &DatePicker::selectedDateChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(const QDate & )>(_a, &DatePicker::minimumDateChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(const QDate & )>(_a, &DatePicker::maximumDateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(bool )>(_a, &DatePicker::monthVisibleChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(bool )>(_a, &DatePicker::dayVisibleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(bool )>(_a, &DatePicker::yearVisibleChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(DatePicker::MonthFormat )>(_a, &DatePicker::monthFormatChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(DatePicker::DayFormat )>(_a, &DatePicker::dayFormatChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(DatePicker::YearFormat )>(_a, &DatePicker::yearFormatChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(const QLocale & )>(_a, &DatePicker::localeChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(DatePicker::DateField , const QString & )>(_a, &DatePicker::placeholderTextChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(const QString & )>(_a, &DatePicker::confirmButtonAccessibleNameChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(const QString & )>(_a, &DatePicker::cancelButtonAccessibleNameChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (DatePicker::*)(bool )>(_a, &DatePicker::dropDownOpenChanged, 14))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QDate*>(_v) = _t->date(); break;
        case 1: *reinterpret_cast<QDate*>(_v) = _t->selectedDate(); break;
        case 2: *reinterpret_cast<QDate*>(_v) = _t->minimumDate(); break;
        case 3: *reinterpret_cast<QDate*>(_v) = _t->maximumDate(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->monthVisible(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->dayVisible(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->yearVisible(); break;
        case 7: *reinterpret_cast<enum MonthFormat*>(_v) = _t->monthFormat(); break;
        case 8: *reinterpret_cast<enum DayFormat*>(_v) = _t->dayFormat(); break;
        case 9: *reinterpret_cast<enum YearFormat*>(_v) = _t->yearFormat(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isDropDownOpen(); break;
        case 11: *reinterpret_cast<QLocale*>(_v) = _t->locale(); break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->confirmButtonAccessibleName(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->cancelButtonAccessibleName(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDate(*reinterpret_cast<QDate*>(_v)); break;
        case 1: _t->setSelectedDate(*reinterpret_cast<QDate*>(_v)); break;
        case 2: _t->setMinimumDate(*reinterpret_cast<QDate*>(_v)); break;
        case 3: _t->setMaximumDate(*reinterpret_cast<QDate*>(_v)); break;
        case 4: _t->setMonthVisible(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setDayVisible(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setYearVisible(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setMonthFormat(*reinterpret_cast<enum MonthFormat*>(_v)); break;
        case 8: _t->setDayFormat(*reinterpret_cast<enum DayFormat*>(_v)); break;
        case 9: _t->setYearFormat(*reinterpret_cast<enum YearFormat*>(_v)); break;
        case 11: _t->setLocale(*reinterpret_cast<QLocale*>(_v)); break;
        case 12: _t->setConfirmButtonAccessibleName(*reinterpret_cast<QString*>(_v)); break;
        case 13: _t->setCancelButtonAccessibleName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 1: _t->clearSelectedDate(); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::date_time::DatePicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::date_time::DatePicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time10DatePickerE_t>.strings))
        return static_cast<void*>(this);
    return fluent::basicinput::Button::qt_metacast(_clname);
}

int fluent::date_time::DatePicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = fluent::basicinput::Button::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 34;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void fluent::date_time::DatePicker::dateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::date_time::DatePicker::selectedDateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::date_time::DatePicker::minimumDateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::date_time::DatePicker::maximumDateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::date_time::DatePicker::monthVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::date_time::DatePicker::dayVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::date_time::DatePicker::yearVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::date_time::DatePicker::monthFormatChanged(DatePicker::MonthFormat _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::date_time::DatePicker::dayFormatChanged(DatePicker::DayFormat _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::date_time::DatePicker::yearFormatChanged(DatePicker::YearFormat _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::date_time::DatePicker::localeChanged(const QLocale & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::date_time::DatePicker::placeholderTextChanged(DatePicker::DateField _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}

// SIGNAL 12
void fluent::date_time::DatePicker::confirmButtonAccessibleNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::date_time::DatePicker::cancelButtonAccessibleNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void fluent::date_time::DatePicker::dropDownOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}
QT_WARNING_POP
