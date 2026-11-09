/****************************************************************************
** Meta object code from reading C++ file 'InfoBadge.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/status_info/InfoBadge.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InfoBadge.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11status_info9InfoBadgeE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::status_info::InfoBadge::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11status_info9InfoBadgeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::status_info::InfoBadge",
        "valueChanged",
        "",
        "value",
        "iconGlyphChanged",
        "glyph",
        "displayModeChanged",
        "InfoBadgeDisplayMode",
        "mode",
        "statusChanged",
        "InfoBadgeStatus",
        "status",
        "badgeOpacityChanged",
        "opacity",
        "customBackgroundColorChanged",
        "QColor",
        "color",
        "customTextColorChanged",
        "valueFontRoleChanged",
        "Typography::FontRole",
        "role",
        "beaconDiameterChanged",
        "diameter",
        "badgeHeightChanged",
        "height",
        "valueHorizontalPaddingChanged",
        "padding",
        "iconGlyphSizeChanged",
        "size",
        "iconFontFamilyChanged",
        "family",
        "badgeBackgroundInsetChanged",
        "inset",
        "contentOffsetChanged",
        "QPoint",
        "offset",
        "iconGlyph",
        "displayMode",
        "badgeOpacity",
        "customBackgroundColor",
        "customTextColor",
        "valueFontRole",
        "beaconDiameter",
        "badgeHeight",
        "valueHorizontalPadding",
        "iconGlyphSize",
        "iconFontFamily",
        "badgeBackgroundInset",
        "contentOffset",
        "Auto",
        "Dot",
        "Icon",
        "Value",
        "Informational",
        "Attention",
        "Caution",
        "Success",
        "Critical"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'iconGlyphChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'displayModeChanged'
        QtMocHelpers::SignalData<void(enum InfoBadgeDisplayMode)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void(enum InfoBadgeStatus)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'badgeOpacityChanged'
        QtMocHelpers::SignalData<void(qreal)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 13 },
        }}),
        // Signal 'customBackgroundColorChanged'
        QtMocHelpers::SignalData<void(const QColor &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'customTextColorChanged'
        QtMocHelpers::SignalData<void(const QColor &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'valueFontRoleChanged'
        QtMocHelpers::SignalData<void(Typography::FontRole)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'beaconDiameterChanged'
        QtMocHelpers::SignalData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Signal 'badgeHeightChanged'
        QtMocHelpers::SignalData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Signal 'valueHorizontalPaddingChanged'
        QtMocHelpers::SignalData<void(int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Signal 'iconGlyphSizeChanged'
        QtMocHelpers::SignalData<void(int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
        // Signal 'iconFontFamilyChanged'
        QtMocHelpers::SignalData<void(const QString &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 30 },
        }}),
        // Signal 'badgeBackgroundInsetChanged'
        QtMocHelpers::SignalData<void(int)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 32 },
        }}),
        // Signal 'contentOffsetChanged'
        QtMocHelpers::SignalData<void(const QPoint &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 34, 35 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'value'
        QtMocHelpers::PropertyData<int>(3, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'iconGlyph'
        QtMocHelpers::PropertyData<QString>(36, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'displayMode'
        QtMocHelpers::PropertyData<enum InfoBadgeDisplayMode>(37, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'status'
        QtMocHelpers::PropertyData<enum InfoBadgeStatus>(11, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'badgeOpacity'
        QtMocHelpers::PropertyData<qreal>(38, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'customBackgroundColor'
        QtMocHelpers::PropertyData<QColor>(39, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'customTextColor'
        QtMocHelpers::PropertyData<QColor>(40, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'valueFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(41, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'beaconDiameter'
        QtMocHelpers::PropertyData<int>(42, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'badgeHeight'
        QtMocHelpers::PropertyData<int>(43, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'valueHorizontalPadding'
        QtMocHelpers::PropertyData<int>(44, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'iconGlyphSize'
        QtMocHelpers::PropertyData<int>(45, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'iconFontFamily'
        QtMocHelpers::PropertyData<QString>(46, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'badgeBackgroundInset'
        QtMocHelpers::PropertyData<int>(47, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'contentOffset'
        QtMocHelpers::PropertyData<QPoint>(48, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 14),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'InfoBadgeDisplayMode'
        QtMocHelpers::EnumData<enum InfoBadgeDisplayMode>(7, 7, QMC::EnumIsScoped).add({
            {   49, InfoBadgeDisplayMode::Auto },
            {   50, InfoBadgeDisplayMode::Dot },
            {   51, InfoBadgeDisplayMode::Icon },
            {   52, InfoBadgeDisplayMode::Value },
        }),
        // enum 'InfoBadgeStatus'
        QtMocHelpers::EnumData<enum InfoBadgeStatus>(10, 10, QMC::EnumIsScoped).add({
            {   53, InfoBadgeStatus::Informational },
            {   54, InfoBadgeStatus::Attention },
            {   55, InfoBadgeStatus::Caution },
            {   56, InfoBadgeStatus::Success },
            {   57, InfoBadgeStatus::Critical },
        }),
    };
    return QtMocHelpers::metaObjectData<InfoBadge, qt_meta_tag_ZN6fluent11status_info9InfoBadgeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent11status_info9InfoBadgeE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::status_info::InfoBadge::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info9InfoBadgeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info9InfoBadgeE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent11status_info9InfoBadgeE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11status_info9InfoBadgeE_t>.metaTypes,
    nullptr
} };

void fluent::status_info::InfoBadge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InfoBadge *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->iconGlyphChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->displayModeChanged((*reinterpret_cast<std::add_pointer_t<enum InfoBadgeDisplayMode>>(_a[1]))); break;
        case 3: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<enum InfoBadgeStatus>>(_a[1]))); break;
        case 4: _t->badgeOpacityChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 5: _t->customBackgroundColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 6: _t->customTextColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 7: _t->valueFontRoleChanged((*reinterpret_cast<std::add_pointer_t<Typography::FontRole>>(_a[1]))); break;
        case 8: _t->beaconDiameterChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->badgeHeightChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->valueHorizontalPaddingChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->iconGlyphSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->iconFontFamilyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->badgeBackgroundInsetChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->contentOffsetChanged((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Typography::FontRole >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(int )>(_a, &InfoBadge::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(const QString & )>(_a, &InfoBadge::iconGlyphChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(InfoBadgeDisplayMode )>(_a, &InfoBadge::displayModeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(InfoBadgeStatus )>(_a, &InfoBadge::statusChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(qreal )>(_a, &InfoBadge::badgeOpacityChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(const QColor & )>(_a, &InfoBadge::customBackgroundColorChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(const QColor & )>(_a, &InfoBadge::customTextColorChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(Typography::FontRole )>(_a, &InfoBadge::valueFontRoleChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(int )>(_a, &InfoBadge::beaconDiameterChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(int )>(_a, &InfoBadge::badgeHeightChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(int )>(_a, &InfoBadge::valueHorizontalPaddingChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(int )>(_a, &InfoBadge::iconGlyphSizeChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(const QString & )>(_a, &InfoBadge::iconFontFamilyChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(int )>(_a, &InfoBadge::badgeBackgroundInsetChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBadge::*)(const QPoint & )>(_a, &InfoBadge::contentOffsetChanged, 14))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->iconGlyph(); break;
        case 2: *reinterpret_cast<enum InfoBadgeDisplayMode*>(_v) = _t->displayMode(); break;
        case 3: *reinterpret_cast<enum InfoBadgeStatus*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->badgeOpacity(); break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->customBackgroundColor(); break;
        case 6: *reinterpret_cast<QColor*>(_v) = _t->customTextColor(); break;
        case 7: *reinterpret_cast<Typography::FontRole*>(_v) = _t->valueFontRole(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->beaconDiameter(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->badgeHeight(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->valueHorizontalPadding(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->iconGlyphSize(); break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->iconFontFamily(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->badgeBackgroundInset(); break;
        case 14: *reinterpret_cast<QPoint*>(_v) = _t->contentOffset(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setIconGlyph(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setDisplayMode(*reinterpret_cast<enum InfoBadgeDisplayMode*>(_v)); break;
        case 3: _t->setStatus(*reinterpret_cast<enum InfoBadgeStatus*>(_v)); break;
        case 4: _t->setBadgeOpacity(*reinterpret_cast<qreal*>(_v)); break;
        case 5: _t->setCustomBackgroundColor(*reinterpret_cast<QColor*>(_v)); break;
        case 6: _t->setCustomTextColor(*reinterpret_cast<QColor*>(_v)); break;
        case 7: _t->setValueFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 8: _t->setBeaconDiameter(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setBadgeHeight(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setValueHorizontalPadding(*reinterpret_cast<int*>(_v)); break;
        case 11: _t->setIconGlyphSize(*reinterpret_cast<int*>(_v)); break;
        case 12: _t->setIconFontFamily(*reinterpret_cast<QString*>(_v)); break;
        case 13: _t->setBadgeBackgroundInset(*reinterpret_cast<int*>(_v)); break;
        case 14: _t->setContentOffset(*reinterpret_cast<QPoint*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::status_info::InfoBadge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::status_info::InfoBadge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info9InfoBadgeE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::status_info::InfoBadge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void fluent::status_info::InfoBadge::valueChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::status_info::InfoBadge::iconGlyphChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::status_info::InfoBadge::displayModeChanged(InfoBadgeDisplayMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::status_info::InfoBadge::statusChanged(InfoBadgeStatus _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::status_info::InfoBadge::badgeOpacityChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::status_info::InfoBadge::customBackgroundColorChanged(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::status_info::InfoBadge::customTextColorChanged(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::status_info::InfoBadge::valueFontRoleChanged(Typography::FontRole _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::status_info::InfoBadge::beaconDiameterChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::status_info::InfoBadge::badgeHeightChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::status_info::InfoBadge::valueHorizontalPaddingChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::status_info::InfoBadge::iconGlyphSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::status_info::InfoBadge::iconFontFamilyChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::status_info::InfoBadge::badgeBackgroundInsetChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void fluent::status_info::InfoBadge::contentOffsetChanged(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}
QT_WARNING_POP
