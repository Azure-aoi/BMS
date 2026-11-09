/****************************************************************************
** Meta object code from reading C++ file 'CalendarView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/date_time/CalendarView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalendarView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9date_time12CalendarViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::date_time::CalendarView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9date_time12CalendarViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::date_time::CalendarView",
        "selectedDateChanged",
        "",
        "date",
        "visibleMonthChanged",
        "month",
        "minDateChanged",
        "maxDateChanged",
        "localeChanged",
        "locale",
        "firstDayOfWeekChanged",
        "Qt::DayOfWeek",
        "day",
        "contentLevelChanged",
        "CalendarContentLevel",
        "level",
        "frameVisibleChanged",
        "visible",
        "dateActivated",
        "setSelectedDate",
        "setVisibleMonth",
        "setMinDate",
        "setMaxDate",
        "setDateRange",
        "minDate",
        "maxDate",
        "setLocale",
        "setFirstDayOfWeek",
        "resetFirstDayOfWeek",
        "setContentLevel",
        "setFrameVisible",
        "selectedDate",
        "visibleMonth",
        "firstDayOfWeek",
        "contentLevel",
        "frameVisible",
        "Day",
        "Month",
        "Year"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectedDateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Signal 'visibleMonthChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 5 },
        }}),
        // Signal 'minDateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Signal 'maxDateChanged'
        QtMocHelpers::SignalData<void(const QDate &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Signal 'localeChanged'
        QtMocHelpers::SignalData<void(const QLocale &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 9 },
        }}),
        // Signal 'firstDayOfWeekChanged'
        QtMocHelpers::SignalData<void(Qt::DayOfWeek)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'contentLevelChanged'
        QtMocHelpers::SignalData<void(enum CalendarContentLevel)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'frameVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Signal 'dateActivated'
        QtMocHelpers::SignalData<void(const QDate &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Slot 'setSelectedDate'
        QtMocHelpers::SlotData<void(const QDate &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Slot 'setVisibleMonth'
        QtMocHelpers::SlotData<void(const QDate &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 5 },
        }}),
        // Slot 'setMinDate'
        QtMocHelpers::SlotData<void(const QDate &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Slot 'setMaxDate'
        QtMocHelpers::SlotData<void(const QDate &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 3 },
        }}),
        // Slot 'setDateRange'
        QtMocHelpers::SlotData<void(const QDate &, const QDate &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 24 }, { QMetaType::QDate, 25 },
        }}),
        // Slot 'setLocale'
        QtMocHelpers::SlotData<void(const QLocale &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QLocale, 9 },
        }}),
        // Slot 'setFirstDayOfWeek'
        QtMocHelpers::SlotData<void(Qt::DayOfWeek)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'resetFirstDayOfWeek'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setContentLevel'
        QtMocHelpers::SlotData<void(enum CalendarContentLevel)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'setFrameVisible'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectedDate'
        QtMocHelpers::PropertyData<QDate>(31, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'visibleMonth'
        QtMocHelpers::PropertyData<QDate>(32, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'minDate'
        QtMocHelpers::PropertyData<QDate>(24, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'maxDate'
        QtMocHelpers::PropertyData<QDate>(25, QMetaType::QDate, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'locale'
        QtMocHelpers::PropertyData<QLocale>(9, QMetaType::QLocale, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'firstDayOfWeek'
        QtMocHelpers::PropertyData<Qt::DayOfWeek>(33, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'contentLevel'
        QtMocHelpers::PropertyData<enum CalendarContentLevel>(34, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'frameVisible'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'CalendarContentLevel'
        QtMocHelpers::EnumData<enum CalendarContentLevel>(14, 14, QMC::EnumIsScoped).add({
            {   36, CalendarContentLevel::Day },
            {   37, CalendarContentLevel::Month },
            {   38, CalendarContentLevel::Year },
        }),
    };
    return QtMocHelpers::metaObjectData<CalendarView, qt_meta_tag_ZN6fluent9date_time12CalendarViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::date_time::CalendarView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time12CalendarViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time12CalendarViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9date_time12CalendarViewE_t>.metaTypes,
    nullptr
} };

void fluent::date_time::CalendarView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CalendarView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectedDateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 1: _t->visibleMonthChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 2: _t->minDateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 3: _t->maxDateChanged((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 4: _t->localeChanged((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 5: _t->firstDayOfWeekChanged((*reinterpret_cast<std::add_pointer_t<Qt::DayOfWeek>>(_a[1]))); break;
        case 6: _t->contentLevelChanged((*reinterpret_cast<std::add_pointer_t<enum CalendarContentLevel>>(_a[1]))); break;
        case 7: _t->frameVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->dateActivated((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 9: _t->setSelectedDate((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 10: _t->setVisibleMonth((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 11: _t->setMinDate((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 12: _t->setMaxDate((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 13: _t->setDateRange((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDate>>(_a[2]))); break;
        case 14: _t->setLocale((*reinterpret_cast<std::add_pointer_t<QLocale>>(_a[1]))); break;
        case 15: _t->setFirstDayOfWeek((*reinterpret_cast<std::add_pointer_t<Qt::DayOfWeek>>(_a[1]))); break;
        case 16: _t->resetFirstDayOfWeek(); break;
        case 17: _t->setContentLevel((*reinterpret_cast<std::add_pointer_t<enum CalendarContentLevel>>(_a[1]))); break;
        case 18: _t->setFrameVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(const QDate & )>(_a, &CalendarView::selectedDateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(const QDate & )>(_a, &CalendarView::visibleMonthChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(const QDate & )>(_a, &CalendarView::minDateChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(const QDate & )>(_a, &CalendarView::maxDateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(const QLocale & )>(_a, &CalendarView::localeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(Qt::DayOfWeek )>(_a, &CalendarView::firstDayOfWeekChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(CalendarContentLevel )>(_a, &CalendarView::contentLevelChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(bool )>(_a, &CalendarView::frameVisibleChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (CalendarView::*)(const QDate & )>(_a, &CalendarView::dateActivated, 8))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QDate*>(_v) = _t->selectedDate(); break;
        case 1: *reinterpret_cast<QDate*>(_v) = _t->visibleMonth(); break;
        case 2: *reinterpret_cast<QDate*>(_v) = _t->minDate(); break;
        case 3: *reinterpret_cast<QDate*>(_v) = _t->maxDate(); break;
        case 4: *reinterpret_cast<QLocale*>(_v) = _t->locale(); break;
        case 5: *reinterpret_cast<Qt::DayOfWeek*>(_v) = _t->firstDayOfWeek(); break;
        case 6: *reinterpret_cast<enum CalendarContentLevel*>(_v) = _t->contentLevel(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isFrameVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectedDate(*reinterpret_cast<QDate*>(_v)); break;
        case 1: _t->setVisibleMonth(*reinterpret_cast<QDate*>(_v)); break;
        case 2: _t->setMinDate(*reinterpret_cast<QDate*>(_v)); break;
        case 3: _t->setMaxDate(*reinterpret_cast<QDate*>(_v)); break;
        case 4: _t->setLocale(*reinterpret_cast<QLocale*>(_v)); break;
        case 5: _t->setFirstDayOfWeek(*reinterpret_cast<Qt::DayOfWeek*>(_v)); break;
        case 6: _t->setContentLevel(*reinterpret_cast<enum CalendarContentLevel*>(_v)); break;
        case 7: _t->setFrameVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 5: _t->resetFirstDayOfWeek(); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::date_time::CalendarView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::date_time::CalendarView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9date_time12CalendarViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::date_time::CalendarView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
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
void fluent::date_time::CalendarView::selectedDateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::date_time::CalendarView::visibleMonthChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::date_time::CalendarView::minDateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::date_time::CalendarView::maxDateChanged(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::date_time::CalendarView::localeChanged(const QLocale & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::date_time::CalendarView::firstDayOfWeekChanged(Qt::DayOfWeek _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::date_time::CalendarView::contentLevelChanged(CalendarContentLevel _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::date_time::CalendarView::frameVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::date_time::CalendarView::dateActivated(const QDate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
