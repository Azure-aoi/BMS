/****************************************************************************
** Meta object code from reading C++ file 'InfoBar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/status_info/InfoBar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InfoBar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11status_info7InfoBarE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::status_info::InfoBar::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11status_info7InfoBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::status_info::InfoBar",
        "isOpenChanged",
        "",
        "open",
        "titleChanged",
        "title",
        "messageChanged",
        "message",
        "severityChanged",
        "InfoBarSeverity",
        "severity",
        "isClosableChanged",
        "closable",
        "isIconVisibleChanged",
        "visible",
        "singleLineChanged",
        "singleLine",
        "preferredWidthChanged",
        "width",
        "singleLineHeightChanged",
        "height",
        "multiLineMinHeightChanged",
        "multiLineActionMinHeightChanged",
        "actionWidgetChanged",
        "QWidget*",
        "widget",
        "contentMarginsChanged",
        "QMargins",
        "margins",
        "closeButtonSizeChanged",
        "size",
        "closeButtonAccessibleNameChanged",
        "name",
        "iconTextSpacingChanged",
        "spacing",
        "titleMessageSpacingChanged",
        "cornerRadiusChanged",
        "radius",
        "severityIconSizeChanged",
        "severityIconGlyphSizeChanged",
        "severityIconBackgroundInsetChanged",
        "inset",
        "titleFontRoleChanged",
        "Typography::FontRole",
        "role",
        "messageFontRoleChanged",
        "informationalIconGlyphChanged",
        "glyph",
        "successIconGlyphChanged",
        "warningIconGlyphChanged",
        "errorIconGlyphChanged",
        "closed",
        "isOpen",
        "isClosable",
        "isIconVisible",
        "preferredWidth",
        "singleLineHeight",
        "multiLineMinHeight",
        "multiLineActionMinHeight",
        "actionWidget",
        "contentMargins",
        "closeButtonSize",
        "closeButtonAccessibleName",
        "iconTextSpacing",
        "titleMessageSpacing",
        "cornerRadius",
        "severityIconSize",
        "severityIconGlyphSize",
        "severityIconBackgroundInset",
        "titleFontRole",
        "messageFontRole",
        "informationalIconGlyph",
        "successIconGlyph",
        "warningIconGlyph",
        "errorIconGlyph",
        "Informational",
        "Success",
        "Warning",
        "Error"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'isOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'titleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'messageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'severityChanged'
        QtMocHelpers::SignalData<void(enum InfoBarSeverity)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'isClosableChanged'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Signal 'isIconVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Signal 'singleLineChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'preferredWidthChanged'
        QtMocHelpers::SignalData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Signal 'singleLineHeightChanged'
        QtMocHelpers::SignalData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Signal 'multiLineMinHeightChanged'
        QtMocHelpers::SignalData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Signal 'multiLineActionMinHeightChanged'
        QtMocHelpers::SignalData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Signal 'actionWidgetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Signal 'contentMarginsChanged'
        QtMocHelpers::SignalData<void(const QMargins &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Signal 'closeButtonSizeChanged'
        QtMocHelpers::SignalData<void(int)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Signal 'closeButtonAccessibleNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 },
        }}),
        // Signal 'iconTextSpacingChanged'
        QtMocHelpers::SignalData<void(int)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 34 },
        }}),
        // Signal 'titleMessageSpacingChanged'
        QtMocHelpers::SignalData<void(int)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 34 },
        }}),
        // Signal 'cornerRadiusChanged'
        QtMocHelpers::SignalData<void(int)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 37 },
        }}),
        // Signal 'severityIconSizeChanged'
        QtMocHelpers::SignalData<void(int)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Signal 'severityIconGlyphSizeChanged'
        QtMocHelpers::SignalData<void(int)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Signal 'severityIconBackgroundInsetChanged'
        QtMocHelpers::SignalData<void(int)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 41 },
        }}),
        // Signal 'titleFontRoleChanged'
        QtMocHelpers::SignalData<void(Typography::FontRole)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Signal 'messageFontRoleChanged'
        QtMocHelpers::SignalData<void(Typography::FontRole)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Signal 'informationalIconGlyphChanged'
        QtMocHelpers::SignalData<void(const QString &)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 47 },
        }}),
        // Signal 'successIconGlyphChanged'
        QtMocHelpers::SignalData<void(const QString &)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 47 },
        }}),
        // Signal 'warningIconGlyphChanged'
        QtMocHelpers::SignalData<void(const QString &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 47 },
        }}),
        // Signal 'errorIconGlyphChanged'
        QtMocHelpers::SignalData<void(const QString &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 47 },
        }}),
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isOpen'
        QtMocHelpers::PropertyData<bool>(52, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'title'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'message'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'severity'
        QtMocHelpers::PropertyData<enum InfoBarSeverity>(10, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'isClosable'
        QtMocHelpers::PropertyData<bool>(53, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'isIconVisible'
        QtMocHelpers::PropertyData<bool>(54, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'singleLine'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'preferredWidth'
        QtMocHelpers::PropertyData<int>(55, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'singleLineHeight'
        QtMocHelpers::PropertyData<int>(56, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'multiLineMinHeight'
        QtMocHelpers::PropertyData<int>(57, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'multiLineActionMinHeight'
        QtMocHelpers::PropertyData<int>(58, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'actionWidget'
        QtMocHelpers::PropertyData<QWidget*>(59, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 11),
        // property 'contentMargins'
        QtMocHelpers::PropertyData<QMargins>(60, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 12),
        // property 'closeButtonSize'
        QtMocHelpers::PropertyData<int>(61, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'closeButtonAccessibleName'
        QtMocHelpers::PropertyData<QString>(62, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'iconTextSpacing'
        QtMocHelpers::PropertyData<int>(63, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'titleMessageSpacing'
        QtMocHelpers::PropertyData<int>(64, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'cornerRadius'
        QtMocHelpers::PropertyData<int>(65, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'severityIconSize'
        QtMocHelpers::PropertyData<int>(66, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'severityIconGlyphSize'
        QtMocHelpers::PropertyData<int>(67, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 19),
        // property 'severityIconBackgroundInset'
        QtMocHelpers::PropertyData<int>(68, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 20),
        // property 'titleFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(69, 0x80000000 | 43, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 21),
        // property 'messageFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(70, 0x80000000 | 43, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 22),
        // property 'informationalIconGlyph'
        QtMocHelpers::PropertyData<QString>(71, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 23),
        // property 'successIconGlyph'
        QtMocHelpers::PropertyData<QString>(72, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 24),
        // property 'warningIconGlyph'
        QtMocHelpers::PropertyData<QString>(73, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 25),
        // property 'errorIconGlyph'
        QtMocHelpers::PropertyData<QString>(74, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 26),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'InfoBarSeverity'
        QtMocHelpers::EnumData<enum InfoBarSeverity>(9, 9, QMC::EnumFlags{}).add({
            {   75, InfoBarSeverity::Informational },
            {   76, InfoBarSeverity::Success },
            {   77, InfoBarSeverity::Warning },
            {   78, InfoBarSeverity::Error },
        }),
    };
    return QtMocHelpers::metaObjectData<InfoBar, qt_meta_tag_ZN6fluent11status_info7InfoBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent11status_info7InfoBarE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::status_info::InfoBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info7InfoBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info7InfoBarE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent11status_info7InfoBarE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11status_info7InfoBarE_t>.metaTypes,
    nullptr
} };

void fluent::status_info::InfoBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InfoBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->isOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->messageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->severityChanged((*reinterpret_cast<std::add_pointer_t<enum InfoBarSeverity>>(_a[1]))); break;
        case 4: _t->isClosableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->isIconVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->singleLineChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->preferredWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->singleLineHeightChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->multiLineMinHeightChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->multiLineActionMinHeightChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->actionWidgetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 12: _t->contentMarginsChanged((*reinterpret_cast<std::add_pointer_t<QMargins>>(_a[1]))); break;
        case 13: _t->closeButtonSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->closeButtonAccessibleNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->iconTextSpacingChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->titleMessageSpacingChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->cornerRadiusChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->severityIconSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->severityIconGlyphSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->severityIconBackgroundInsetChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->titleFontRoleChanged((*reinterpret_cast<std::add_pointer_t<Typography::FontRole>>(_a[1]))); break;
        case 22: _t->messageFontRoleChanged((*reinterpret_cast<std::add_pointer_t<Typography::FontRole>>(_a[1]))); break;
        case 23: _t->informationalIconGlyphChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->successIconGlyphChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->warningIconGlyphChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->errorIconGlyphChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->closed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Typography::FontRole >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Typography::FontRole >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(bool )>(_a, &InfoBar::isOpenChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(const QString & )>(_a, &InfoBar::titleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(const QString & )>(_a, &InfoBar::messageChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(InfoBarSeverity )>(_a, &InfoBar::severityChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(bool )>(_a, &InfoBar::isClosableChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(bool )>(_a, &InfoBar::isIconVisibleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(bool )>(_a, &InfoBar::singleLineChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::preferredWidthChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::singleLineHeightChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::multiLineMinHeightChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::multiLineActionMinHeightChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(QWidget * )>(_a, &InfoBar::actionWidgetChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(const QMargins & )>(_a, &InfoBar::contentMarginsChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::closeButtonSizeChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(const QString & )>(_a, &InfoBar::closeButtonAccessibleNameChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::iconTextSpacingChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::titleMessageSpacingChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::cornerRadiusChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::severityIconSizeChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::severityIconGlyphSizeChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(int )>(_a, &InfoBar::severityIconBackgroundInsetChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(Typography::FontRole )>(_a, &InfoBar::titleFontRoleChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(Typography::FontRole )>(_a, &InfoBar::messageFontRoleChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(const QString & )>(_a, &InfoBar::informationalIconGlyphChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(const QString & )>(_a, &InfoBar::successIconGlyphChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(const QString & )>(_a, &InfoBar::warningIconGlyphChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)(const QString & )>(_a, &InfoBar::errorIconGlyphChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoBar::*)()>(_a, &InfoBar::closed, 27))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        case 22:
        case 21:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->message(); break;
        case 3: *reinterpret_cast<enum InfoBarSeverity*>(_v) = _t->severity(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isClosable(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isIconVisible(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->singleLine(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->preferredWidth(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->singleLineHeight(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->multiLineMinHeight(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->multiLineActionMinHeight(); break;
        case 11: *reinterpret_cast<QWidget**>(_v) = _t->actionWidget(); break;
        case 12: *reinterpret_cast<QMargins*>(_v) = _t->contentMargins(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->closeButtonSize(); break;
        case 14: *reinterpret_cast<QString*>(_v) = _t->closeButtonAccessibleName(); break;
        case 15: *reinterpret_cast<int*>(_v) = _t->iconTextSpacing(); break;
        case 16: *reinterpret_cast<int*>(_v) = _t->titleMessageSpacing(); break;
        case 17: *reinterpret_cast<int*>(_v) = _t->cornerRadius(); break;
        case 18: *reinterpret_cast<int*>(_v) = _t->severityIconSize(); break;
        case 19: *reinterpret_cast<int*>(_v) = _t->severityIconGlyphSize(); break;
        case 20: *reinterpret_cast<int*>(_v) = _t->severityIconBackgroundInset(); break;
        case 21: *reinterpret_cast<Typography::FontRole*>(_v) = _t->titleFontRole(); break;
        case 22: *reinterpret_cast<Typography::FontRole*>(_v) = _t->messageFontRole(); break;
        case 23: *reinterpret_cast<QString*>(_v) = _t->informationalIconGlyph(); break;
        case 24: *reinterpret_cast<QString*>(_v) = _t->successIconGlyph(); break;
        case 25: *reinterpret_cast<QString*>(_v) = _t->warningIconGlyph(); break;
        case 26: *reinterpret_cast<QString*>(_v) = _t->errorIconGlyph(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsOpen(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setMessage(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSeverity(*reinterpret_cast<enum InfoBarSeverity*>(_v)); break;
        case 4: _t->setIsClosable(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setIsIconVisible(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setSingleLine(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setPreferredWidth(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setSingleLineHeight(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setMultiLineMinHeight(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setMultiLineActionMinHeight(*reinterpret_cast<int*>(_v)); break;
        case 11: _t->setActionWidget(*reinterpret_cast<QWidget**>(_v)); break;
        case 12: _t->setContentMargins(*reinterpret_cast<QMargins*>(_v)); break;
        case 13: _t->setCloseButtonSize(*reinterpret_cast<int*>(_v)); break;
        case 14: _t->setCloseButtonAccessibleName(*reinterpret_cast<QString*>(_v)); break;
        case 15: _t->setIconTextSpacing(*reinterpret_cast<int*>(_v)); break;
        case 16: _t->setTitleMessageSpacing(*reinterpret_cast<int*>(_v)); break;
        case 17: _t->setCornerRadius(*reinterpret_cast<int*>(_v)); break;
        case 18: _t->setSeverityIconSize(*reinterpret_cast<int*>(_v)); break;
        case 19: _t->setSeverityIconGlyphSize(*reinterpret_cast<int*>(_v)); break;
        case 20: _t->setSeverityIconBackgroundInset(*reinterpret_cast<int*>(_v)); break;
        case 21: _t->setTitleFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 22: _t->setMessageFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 23: _t->setInformationalIconGlyph(*reinterpret_cast<QString*>(_v)); break;
        case 24: _t->setSuccessIconGlyph(*reinterpret_cast<QString*>(_v)); break;
        case 25: _t->setWarningIconGlyph(*reinterpret_cast<QString*>(_v)); break;
        case 26: _t->setErrorIconGlyph(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::status_info::InfoBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::status_info::InfoBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info7InfoBarE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::status_info::InfoBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void fluent::status_info::InfoBar::isOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::status_info::InfoBar::titleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::status_info::InfoBar::messageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::status_info::InfoBar::severityChanged(InfoBarSeverity _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::status_info::InfoBar::isClosableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::status_info::InfoBar::isIconVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::status_info::InfoBar::singleLineChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::status_info::InfoBar::preferredWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::status_info::InfoBar::singleLineHeightChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::status_info::InfoBar::multiLineMinHeightChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::status_info::InfoBar::multiLineActionMinHeightChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::status_info::InfoBar::actionWidgetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::status_info::InfoBar::contentMarginsChanged(const QMargins & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::status_info::InfoBar::closeButtonSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void fluent::status_info::InfoBar::closeButtonAccessibleNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void fluent::status_info::InfoBar::iconTextSpacingChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void fluent::status_info::InfoBar::titleMessageSpacingChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void fluent::status_info::InfoBar::cornerRadiusChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void fluent::status_info::InfoBar::severityIconSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void fluent::status_info::InfoBar::severityIconGlyphSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void fluent::status_info::InfoBar::severityIconBackgroundInsetChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void fluent::status_info::InfoBar::titleFontRoleChanged(Typography::FontRole _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void fluent::status_info::InfoBar::messageFontRoleChanged(Typography::FontRole _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1);
}

// SIGNAL 23
void fluent::status_info::InfoBar::informationalIconGlyphChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void fluent::status_info::InfoBar::successIconGlyphChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}

// SIGNAL 25
void fluent::status_info::InfoBar::warningIconGlyphChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1);
}

// SIGNAL 26
void fluent::status_info::InfoBar::errorIconGlyphChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}

// SIGNAL 27
void fluent::status_info::InfoBar::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}
QT_WARNING_POP
