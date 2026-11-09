/****************************************************************************
** Meta object code from reading C++ file 'NumberBox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/textfields/NumberBox.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NumberBox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10textfields9NumberBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::textfields::NumberBox::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10textfields9NumberBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::textfields::NumberBox",
        "valueChanged",
        "",
        "value",
        "minimumChanged",
        "minimum",
        "maximumChanged",
        "maximum",
        "smallChangeChanged",
        "change",
        "largeChangeChanged",
        "headerChanged",
        "acceptsExpressionChanged",
        "accepts",
        "spinButtonPlacementModeChanged",
        "SpinButtonPlacementMode",
        "mode",
        "spinButtonSizeChanged",
        "QSize",
        "size",
        "inlineSpinButtonSizeChanged",
        "spinButtonRightMarginChanged",
        "margin",
        "compactSpinButtonReservedWidthChanged",
        "width",
        "spinButtonSpacingChanged",
        "spacing",
        "spinButtonTextGapChanged",
        "gap",
        "spinButtonIconSizeChanged",
        "displayPrecisionChanged",
        "precision",
        "formatStepChanged",
        "step",
        "scrubbingEnabledChanged",
        "enabled",
        "scrubSensitivityChanged",
        "sensitivity",
        "scrubbingChanged",
        "scrubbing",
        "scrubStarted",
        "initialValue",
        "scrubFinished",
        "finalValue",
        "canceled",
        "cancelScrub",
        "smallChange",
        "largeChange",
        "header",
        "acceptsExpression",
        "spinButtonPlacementMode",
        "spinButtonSize",
        "inlineSpinButtonSize",
        "spinButtonRightMargin",
        "compactSpinButtonReservedWidth",
        "spinButtonSpacing",
        "spinButtonTextGap",
        "spinButtonIconSize",
        "displayPrecision",
        "formatStep",
        "scrubbingEnabled",
        "scrubSensitivity",
        "Hidden",
        "Compact",
        "Inline"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(double)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 },
        }}),
        // Signal 'minimumChanged'
        QtMocHelpers::SignalData<void(double)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 5 },
        }}),
        // Signal 'maximumChanged'
        QtMocHelpers::SignalData<void(double)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 7 },
        }}),
        // Signal 'smallChangeChanged'
        QtMocHelpers::SignalData<void(double)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 9 },
        }}),
        // Signal 'largeChangeChanged'
        QtMocHelpers::SignalData<void(double)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 9 },
        }}),
        // Signal 'headerChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'acceptsExpressionChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'spinButtonPlacementModeChanged'
        QtMocHelpers::SignalData<void(enum SpinButtonPlacementMode)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'spinButtonSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'inlineSpinButtonSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'spinButtonRightMarginChanged'
        QtMocHelpers::SignalData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Signal 'compactSpinButtonReservedWidthChanged'
        QtMocHelpers::SignalData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Signal 'spinButtonSpacingChanged'
        QtMocHelpers::SignalData<void(int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Signal 'spinButtonTextGapChanged'
        QtMocHelpers::SignalData<void(int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
        // Signal 'spinButtonIconSizeChanged'
        QtMocHelpers::SignalData<void(int)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Signal 'displayPrecisionChanged'
        QtMocHelpers::SignalData<void(int)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 },
        }}),
        // Signal 'formatStepChanged'
        QtMocHelpers::SignalData<void(double)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 33 },
        }}),
        // Signal 'scrubbingEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Signal 'scrubSensitivityChanged'
        QtMocHelpers::SignalData<void(double)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 37 },
        }}),
        // Signal 'scrubbingChanged'
        QtMocHelpers::SignalData<void(bool)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 39 },
        }}),
        // Signal 'scrubStarted'
        QtMocHelpers::SignalData<void(double)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 41 },
        }}),
        // Signal 'scrubFinished'
        QtMocHelpers::SignalData<void(double, double, bool)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 41 }, { QMetaType::Double, 43 }, { QMetaType::Bool, 44 },
        }}),
        // Slot 'cancelScrub'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'value'
        QtMocHelpers::PropertyData<double>(3, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'minimum'
        QtMocHelpers::PropertyData<double>(5, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'maximum'
        QtMocHelpers::PropertyData<double>(7, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'smallChange'
        QtMocHelpers::PropertyData<double>(46, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'largeChange'
        QtMocHelpers::PropertyData<double>(47, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'header'
        QtMocHelpers::PropertyData<QString>(48, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'acceptsExpression'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'spinButtonPlacementMode'
        QtMocHelpers::PropertyData<enum SpinButtonPlacementMode>(50, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'spinButtonSize'
        QtMocHelpers::PropertyData<QSize>(51, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
        // property 'inlineSpinButtonSize'
        QtMocHelpers::PropertyData<QSize>(52, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'spinButtonRightMargin'
        QtMocHelpers::PropertyData<int>(53, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'compactSpinButtonReservedWidth'
        QtMocHelpers::PropertyData<int>(54, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'spinButtonSpacing'
        QtMocHelpers::PropertyData<int>(55, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'spinButtonTextGap'
        QtMocHelpers::PropertyData<int>(56, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'spinButtonIconSize'
        QtMocHelpers::PropertyData<int>(57, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'displayPrecision'
        QtMocHelpers::PropertyData<int>(58, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'formatStep'
        QtMocHelpers::PropertyData<double>(59, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'scrubbingEnabled'
        QtMocHelpers::PropertyData<bool>(60, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'scrubSensitivity'
        QtMocHelpers::PropertyData<double>(61, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'scrubbing'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags, 19),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SpinButtonPlacementMode'
        QtMocHelpers::EnumData<enum SpinButtonPlacementMode>(15, 15, QMC::EnumIsScoped).add({
            {   62, SpinButtonPlacementMode::Hidden },
            {   63, SpinButtonPlacementMode::Compact },
            {   64, SpinButtonPlacementMode::Inline },
        }),
    };
    return QtMocHelpers::metaObjectData<NumberBox, qt_meta_tag_ZN6fluent10textfields9NumberBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::textfields::NumberBox::staticMetaObject = { {
    QMetaObject::SuperData::link<LineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields9NumberBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields9NumberBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10textfields9NumberBoxE_t>.metaTypes,
    nullptr
} };

void fluent::textfields::NumberBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NumberBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->minimumChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->maximumChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->smallChangeChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->largeChangeChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->headerChanged(); break;
        case 6: _t->acceptsExpressionChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->spinButtonPlacementModeChanged((*reinterpret_cast<std::add_pointer_t<enum SpinButtonPlacementMode>>(_a[1]))); break;
        case 8: _t->spinButtonSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 9: _t->inlineSpinButtonSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 10: _t->spinButtonRightMarginChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->compactSpinButtonReservedWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->spinButtonSpacingChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->spinButtonTextGapChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->spinButtonIconSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->displayPrecisionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->formatStepChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 17: _t->scrubbingEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->scrubSensitivityChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->scrubbingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->scrubStarted((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 21: _t->scrubFinished((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 22: _t->cancelScrub(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double )>(_a, &NumberBox::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double )>(_a, &NumberBox::minimumChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double )>(_a, &NumberBox::maximumChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double )>(_a, &NumberBox::smallChangeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double )>(_a, &NumberBox::largeChangeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)()>(_a, &NumberBox::headerChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(bool )>(_a, &NumberBox::acceptsExpressionChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(SpinButtonPlacementMode )>(_a, &NumberBox::spinButtonPlacementModeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(const QSize & )>(_a, &NumberBox::spinButtonSizeChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(const QSize & )>(_a, &NumberBox::inlineSpinButtonSizeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(int )>(_a, &NumberBox::spinButtonRightMarginChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(int )>(_a, &NumberBox::compactSpinButtonReservedWidthChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(int )>(_a, &NumberBox::spinButtonSpacingChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(int )>(_a, &NumberBox::spinButtonTextGapChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(int )>(_a, &NumberBox::spinButtonIconSizeChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(int )>(_a, &NumberBox::displayPrecisionChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double )>(_a, &NumberBox::formatStepChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(bool )>(_a, &NumberBox::scrubbingEnabledChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double )>(_a, &NumberBox::scrubSensitivityChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(bool )>(_a, &NumberBox::scrubbingChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double )>(_a, &NumberBox::scrubStarted, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (NumberBox::*)(double , double , bool )>(_a, &NumberBox::scrubFinished, 21))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast<double*>(_v) = _t->smallChange(); break;
        case 4: *reinterpret_cast<double*>(_v) = _t->largeChange(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->header(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->acceptsExpression(); break;
        case 7: *reinterpret_cast<enum SpinButtonPlacementMode*>(_v) = _t->spinButtonPlacementMode(); break;
        case 8: *reinterpret_cast<QSize*>(_v) = _t->spinButtonSize(); break;
        case 9: *reinterpret_cast<QSize*>(_v) = _t->inlineSpinButtonSize(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->spinButtonRightMargin(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->compactSpinButtonReservedWidth(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->spinButtonSpacing(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->spinButtonTextGap(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->spinButtonIconSize(); break;
        case 15: *reinterpret_cast<int*>(_v) = _t->displayPrecision(); break;
        case 16: *reinterpret_cast<double*>(_v) = _t->formatStep(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->isScrubbingEnabled(); break;
        case 18: *reinterpret_cast<double*>(_v) = _t->scrubSensitivity(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->isScrubbing(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast<double*>(_v)); break;
        case 1: _t->setMinimum(*reinterpret_cast<double*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast<double*>(_v)); break;
        case 3: _t->setSmallChange(*reinterpret_cast<double*>(_v)); break;
        case 4: _t->setLargeChange(*reinterpret_cast<double*>(_v)); break;
        case 5: _t->setHeader(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setAcceptsExpression(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setSpinButtonPlacementMode(*reinterpret_cast<enum SpinButtonPlacementMode*>(_v)); break;
        case 8: _t->setSpinButtonSize(*reinterpret_cast<QSize*>(_v)); break;
        case 9: _t->setInlineSpinButtonSize(*reinterpret_cast<QSize*>(_v)); break;
        case 10: _t->setSpinButtonRightMargin(*reinterpret_cast<int*>(_v)); break;
        case 11: _t->setCompactSpinButtonReservedWidth(*reinterpret_cast<int*>(_v)); break;
        case 12: _t->setSpinButtonSpacing(*reinterpret_cast<int*>(_v)); break;
        case 13: _t->setSpinButtonTextGap(*reinterpret_cast<int*>(_v)); break;
        case 14: _t->setSpinButtonIconSize(*reinterpret_cast<int*>(_v)); break;
        case 15: _t->setDisplayPrecision(*reinterpret_cast<int*>(_v)); break;
        case 16: _t->setFormatStep(*reinterpret_cast<double*>(_v)); break;
        case 17: _t->setScrubbingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 18: _t->setScrubSensitivity(*reinterpret_cast<double*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::textfields::NumberBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::textfields::NumberBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields9NumberBoxE_t>.strings))
        return static_cast<void*>(this);
    return LineEdit::qt_metacast(_clname);
}

int fluent::textfields::NumberBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void fluent::textfields::NumberBox::valueChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::textfields::NumberBox::minimumChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::textfields::NumberBox::maximumChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::textfields::NumberBox::smallChangeChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::textfields::NumberBox::largeChangeChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::textfields::NumberBox::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::textfields::NumberBox::acceptsExpressionChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::textfields::NumberBox::spinButtonPlacementModeChanged(SpinButtonPlacementMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::textfields::NumberBox::spinButtonSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::textfields::NumberBox::inlineSpinButtonSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::textfields::NumberBox::spinButtonRightMarginChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::textfields::NumberBox::compactSpinButtonReservedWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::textfields::NumberBox::spinButtonSpacingChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::textfields::NumberBox::spinButtonTextGapChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void fluent::textfields::NumberBox::spinButtonIconSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void fluent::textfields::NumberBox::displayPrecisionChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void fluent::textfields::NumberBox::formatStepChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void fluent::textfields::NumberBox::scrubbingEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void fluent::textfields::NumberBox::scrubSensitivityChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void fluent::textfields::NumberBox::scrubbingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void fluent::textfields::NumberBox::scrubStarted(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void fluent::textfields::NumberBox::scrubFinished(double _t1, double _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
