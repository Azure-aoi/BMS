/****************************************************************************
** Meta object code from reading C++ file 'ChartView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/charts/ChartView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChartView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent6charts9ChartViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::charts::ChartView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6charts9ChartViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::charts::ChartView",
        "modelChanged",
        "",
        "chartTypeChanged",
        "ChartType",
        "type",
        "titleChanged",
        "title",
        "subtitleChanged",
        "subtitle",
        "valueSuffixChanged",
        "suffix",
        "centerTextChanged",
        "text",
        "centerCaptionChanged",
        "caption",
        "loadingChanged",
        "loading",
        "yRangeChanged",
        "legendVisibleChanged",
        "visible",
        "maximumPointCountChanged",
        "count",
        "maximumFrameRateChanged",
        "rate",
        "xRangeChanged",
        "currentPointChanged",
        "series",
        "row",
        "rangeActivated",
        "first",
        "last",
        "imageCopied",
        "success",
        "dataCopied",
        "copyImage",
        "scale",
        "copyData",
        "visibleRangeOnly",
        "chartType",
        "valueSuffix",
        "centerText",
        "centerCaption",
        "autoYRange",
        "legendVisible",
        "maximumPointCount",
        "maximumFrameRate",
        "autoRange",
        "Line",
        "Area",
        "Bar",
        "HorizontalBar",
        "Pie",
        "Donut",
        "Scatter",
        "Sparkline"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modelChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'chartTypeChanged'
        QtMocHelpers::SignalData<void(enum ChartType)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'titleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'subtitleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'valueSuffixChanged'
        QtMocHelpers::SignalData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'centerTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'centerCaptionChanged'
        QtMocHelpers::SignalData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Signal 'loadingChanged'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Signal 'yRangeChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'legendVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Signal 'maximumPointCountChanged'
        QtMocHelpers::SignalData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Signal 'maximumFrameRateChanged'
        QtMocHelpers::SignalData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Signal 'xRangeChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentPointChanged'
        QtMocHelpers::SignalData<void(int, int)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 27 }, { QMetaType::Int, 28 },
        }}),
        // Signal 'rangeActivated'
        QtMocHelpers::SignalData<void(int, int, int)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 27 }, { QMetaType::Int, 30 }, { QMetaType::Int, 31 },
        }}),
        // Signal 'imageCopied'
        QtMocHelpers::SignalData<void(bool)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
        // Signal 'dataCopied'
        QtMocHelpers::SignalData<void(bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
        // Slot 'copyImage'
        QtMocHelpers::SlotData<void(double)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 36 },
        }}),
        // Slot 'copyImage'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'copyData'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'copyData'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'chartType'
        QtMocHelpers::PropertyData<enum ChartType>(39, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'title'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'subtitle'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'valueSuffix'
        QtMocHelpers::PropertyData<QString>(40, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'centerText'
        QtMocHelpers::PropertyData<QString>(41, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'centerCaption'
        QtMocHelpers::PropertyData<QString>(42, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'loading'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'autoYRange'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags, 8),
        // property 'legendVisible'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'maximumPointCount'
        QtMocHelpers::PropertyData<int>(45, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'maximumFrameRate'
        QtMocHelpers::PropertyData<int>(46, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'autoRange'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags, 12),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ChartType'
        QtMocHelpers::EnumData<enum ChartType>(4, 4, QMC::EnumFlags{}).add({
            {   48, ChartType::Line },
            {   49, ChartType::Area },
            {   50, ChartType::Bar },
            {   51, ChartType::HorizontalBar },
            {   52, ChartType::Pie },
            {   53, ChartType::Donut },
            {   54, ChartType::Scatter },
            {   55, ChartType::Sparkline },
        }),
    };
    return QtMocHelpers::metaObjectData<ChartView, qt_meta_tag_ZN6fluent6charts9ChartViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::charts::ChartView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6charts9ChartViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6charts9ChartViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6charts9ChartViewE_t>.metaTypes,
    nullptr
} };

void fluent::charts::ChartView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ChartView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->chartTypeChanged((*reinterpret_cast<std::add_pointer_t<enum ChartType>>(_a[1]))); break;
        case 2: _t->titleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->subtitleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->valueSuffixChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->centerTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->centerCaptionChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->loadingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->yRangeChanged(); break;
        case 9: _t->legendVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->maximumPointCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->maximumFrameRateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->xRangeChanged(); break;
        case 13: _t->currentPointChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->rangeActivated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 15: _t->imageCopied((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->dataCopied((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->copyImage((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 18: _t->copyImage(); break;
        case 19: _t->copyData((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->copyData(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)()>(_a, &ChartView::modelChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(ChartType )>(_a, &ChartView::chartTypeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(const QString & )>(_a, &ChartView::titleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(const QString & )>(_a, &ChartView::subtitleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(const QString & )>(_a, &ChartView::valueSuffixChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(const QString & )>(_a, &ChartView::centerTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(const QString & )>(_a, &ChartView::centerCaptionChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(bool )>(_a, &ChartView::loadingChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)()>(_a, &ChartView::yRangeChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(bool )>(_a, &ChartView::legendVisibleChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(int )>(_a, &ChartView::maximumPointCountChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(int )>(_a, &ChartView::maximumFrameRateChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)()>(_a, &ChartView::xRangeChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(int , int )>(_a, &ChartView::currentPointChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(int , int , int )>(_a, &ChartView::rangeActivated, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(bool )>(_a, &ChartView::imageCopied, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (ChartView::*)(bool )>(_a, &ChartView::dataCopied, 16))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum ChartType*>(_v) = _t->chartType(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->subtitle(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->valueSuffix(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->centerText(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->centerCaption(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isLoading(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isAutoYRange(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isLegendVisible(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->maximumPointCount(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->maximumFrameRate(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isAutoRange(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChartType(*reinterpret_cast<enum ChartType*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setSubtitle(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setValueSuffix(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setCenterText(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setCenterCaption(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setLoading(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setLegendVisible(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setMaximumPointCount(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setMaximumFrameRate(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::charts::ChartView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::charts::ChartView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6charts9ChartViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::charts::ChartView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void fluent::charts::ChartView::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::charts::ChartView::chartTypeChanged(ChartType _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::charts::ChartView::titleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::charts::ChartView::subtitleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::charts::ChartView::valueSuffixChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::charts::ChartView::centerTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::charts::ChartView::centerCaptionChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::charts::ChartView::loadingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::charts::ChartView::yRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void fluent::charts::ChartView::legendVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::charts::ChartView::maximumPointCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::charts::ChartView::maximumFrameRateChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::charts::ChartView::xRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void fluent::charts::ChartView::currentPointChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}

// SIGNAL 14
void fluent::charts::ChartView::rangeActivated(int _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2, _t3);
}

// SIGNAL 15
void fluent::charts::ChartView::imageCopied(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void fluent::charts::ChartView::dataCopied(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}
QT_WARNING_POP
