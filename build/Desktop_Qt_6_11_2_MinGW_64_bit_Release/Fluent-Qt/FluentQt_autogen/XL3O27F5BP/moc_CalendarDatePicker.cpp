/****************************************************************************
** Meta object code from reading C++ file 'CalendarDatePicker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/date_time/CalendarDatePicker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalendarDatePicker.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9date_time18CalendarDatePickerE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::date_time::CalendarDatePicker::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9date_time18CalendarDatePickerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::date_time::CalendarDatePicker",
        "placeholderTextChanged",
        "",
        "text",
        "dateChanged",
        "date",
        "minDateChanged",
        "maxDateChanged",
        "localeChanged",
        "locale",
        "displayFormatChanged",
        "format",
        "firstDayOfWeekChanged",
        "Qt::DayOfWeek",
        "day",
        "calendarOpenChanged",
        "open",
        "openCalendar",
        "closeCalendar",
        "clearDate",
        "placeholderText",
        "minDate",
        "maxDate",
        "displayFormat",
        "firstDayOfWeek",
        "calendarOpen"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'dateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 5 },
        }}),
        // Signal 'minDateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 5 },
        }}),
        // Signal 'maxDateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 5 },
        }}),
        // Signal 'localeChanged'
        QtMocHelpers::SignalData<void(const QLocale &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 9 },
        }}),
        // Signal 'displayFormatChanged'
        QtMocHelpers::SignalData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'firstDayOfWeekChanged'
        QtMocHelpers::SignalData<void(Qt::DayOfWeek)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'calendarOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'openCalendar'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeCalendar'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearDate'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(20, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'date'
        QtMocHelpers::PropertyData<QDate>(5, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'minDate'
        QtMocHelpers::PropertyData<QDate>(21, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'maxDate'
        QtMocHelpers::PropertyData<QDate>(22, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'locale'
        QtMocHelpers::PropertyData<QLocale>(9, QMetaType::QLocale, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'displayFormat'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'firstDayOfWeek'
        QtMocHelpers::PropertyData<Qt::DayOfWeek>(24, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'calendarOpen'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CalendarDatePicker, qt_meta_tag_ZN6fluent9date_time18CalendarDatePickerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::date_time::CalendarDatePicker::staticMetaObject = { {
    QMetaObject::SuperData::link<fluent::basicinput::Button::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time18CalendarDatePickerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time18CalendarDatePickerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9date_time18CalendarDatePickerE_t>.metaTypes,
    nullptr
} };

void fluent::date_time::CalendarDatePicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CalendarDatePicker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->placeholderTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->dateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 2: _t->minDateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 3: _t->maxDateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 4: _t->localeChanged((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 5: _t->displayFormatChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->firstDayOfWeekChanged((*reinterpret_cast<std::add_pointer_t<Qt::DayOfWeek>>(_a[1]))); break;
        case 7: _t->calendarOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->openCalendar(); break;
        case 9: _t->closeCalendar(); break;
        case 10: _t->clearDate(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CalendarDatePicker::*)(const QString & )>(_a, &CalendarDatePicker::placeholderTextChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarDatePicker::*)(const QDate & )>(_a, &CalendarDatePicker::dateChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarDatePicker::*)(const QDate & )>(_a, &CalendarDatePicker::minDateChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarDatePicker::*)(const QDate & )>(_a, &CalendarDatePicker::maxDateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarDatePicker::*)(const QLocale & )>(_a, &CalendarDatePicker::localeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarDatePicker::*)(const QString & )>(_a, &CalendarDatePicker::displayFormatChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarDatePicker::*)(Qt::DayOfWeek )>(_a, &CalendarDatePicker::firstDayOfWeekChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarDatePicker::*)(bool )>(_a, &CalendarDatePicker::calendarOpenChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 1: *reinterpret_cast<QDate*>(_v) = _t->date(); break;
        case 2: *reinterpret_cast<QDate*>(_v) = _t->minDate(); break;
        case 3: *reinterpret_cast<QDate*>(_v) = _t->maxDate(); break;
        case 4: *reinterpret_cast<QLocale*>(_v) = _t->locale(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->displayFormat(); break;
        case 6: *reinterpret_cast<Qt::DayOfWeek*>(_v) = _t->firstDayOfWeek(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isCalendarOpen(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setDate(*reinterpret_cast<QDate*>(_v)); break;
        case 2: _t->setMinDate(*reinterpret_cast<QDate*>(_v)); break;
        case 3: _t->setMaxDate(*reinterpret_cast<QDate*>(_v)); break;
        case 4: _t->setLocale(*reinterpret_cast<QLocale*>(_v)); break;
        case 5: _t->setDisplayFormat(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setFirstDayOfWeek(*reinterpret_cast<Qt::DayOfWeek*>(_v)); break;
        case 7: _t->setCalendarOpen(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 6: _t->resetFirstDayOfWeek(); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::date_time::CalendarDatePicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::date_time::CalendarDatePicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time18CalendarDatePickerE_t>.strings))
        return static_cast<void*>(this);
    return fluent::basicinput::Button::qt_metacast(_clname);
}

int fluent::date_time::CalendarDatePicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = fluent::basicinput::Button::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
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
void fluent::date_time::CalendarDatePicker::placeholderTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::date_time::CalendarDatePicker::dateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::date_time::CalendarDatePicker::minDateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::date_time::CalendarDatePicker::maxDateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::date_time::CalendarDatePicker::localeChanged(const QLocale & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::date_time::CalendarDatePicker::displayFormatChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::date_time::CalendarDatePicker::firstDayOfWeekChanged(Qt::DayOfWeek _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::date_time::CalendarDatePicker::calendarOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
