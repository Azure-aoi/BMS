/****************************************************************************
** Meta object code from reading C++ file 'AutoSuggestBox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/textfields/AutoSuggestBox.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoSuggestBox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10textfields14AutoSuggestBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::textfields::AutoSuggestBox::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10textfields14AutoSuggestBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::textfields::AutoSuggestBox",
        "textChangedWithReason",
        "",
        "text",
        "AutoSuggestBox::TextChangeReason",
        "reason",
        "suggestionChosen",
        "QVariant",
        "item",
        "querySubmitted",
        "queryText",
        "chosenSuggestion",
        "suggestionsChanged",
        "headerChanged",
        "queryIconGlyphChanged",
        "queryIconVisibleChanged",
        "queryButtonPlacementChanged",
        "inputHeightChanged",
        "queryButtonSizeChanged",
        "suggestionFontRoleChanged",
        "suggestionItemHeightChanged",
        "suggestionListOpenChanged",
        "open",
        "suggestionModelChanged",
        "QAbstractItemModel*",
        "model",
        "suggestionCountChanged",
        "count",
        "asyncSuggestionsEnabledChanged",
        "enabled",
        "debounceIntervalChanged",
        "milliseconds",
        "loadStateChanged",
        "LoadState",
        "state",
        "hasMoreSuggestionsChanged",
        "hasMore",
        "loadingTextChanged",
        "emptyTextChanged",
        "emptyDescriptionChanged",
        "loadingMoreTextChanged",
        "moreResultsTextChanged",
        "retryTextChanged",
        "loadMoreTextChanged",
        "suggestionsRequested",
        "query",
        "requestId",
        "append",
        "suggestionRequestCanceled",
        "setSuggestions",
        "suggestions",
        "clearSuggestions",
        "requestSuggestions",
        "loadMoreSuggestions",
        "retrySuggestions",
        "cancelSuggestions",
        "clearButtonEnabledChanged",
        "clearButtonSizeChanged",
        "header",
        "queryIconGlyph",
        "queryIconVisible",
        "clearButtonEnabled",
        "queryButtonPlacement",
        "QueryButtonPlacement",
        "inputHeight",
        "queryButtonSize",
        "clearButtonSize",
        "suggestionFontRole",
        "Typography::FontRole",
        "suggestionItemHeight",
        "isSuggestionListOpen",
        "suggestionModel",
        "suggestionCount",
        "asyncSuggestionsEnabled",
        "debounceInterval",
        "loadState",
        "hasMoreSuggestions",
        "loadingText",
        "emptyText",
        "emptyDescription",
        "loadingMoreText",
        "moreResultsText",
        "retryText",
        "loadMoreText",
        "TextChangeReason",
        "UserInput",
        "ProgrammaticChange",
        "SuggestionChosen",
        "Right",
        "Left",
        "Idle",
        "Loading",
        "Ready",
        "Failed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'textChangedWithReason'
        QtMocHelpers::SignalData<void(const QString &, AutoSuggestBox::TextChangeReason)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'suggestionChosen'
        QtMocHelpers::SignalData<void(const QVariant &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'querySubmitted'
        QtMocHelpers::SignalData<void(const QString &, const QVariant &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { 0x80000000 | 7, 11 },
        }}),
        // Signal 'suggestionsChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'headerChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'queryIconGlyphChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'queryIconVisibleChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'queryButtonPlacementChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inputHeightChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'queryButtonSizeChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'suggestionFontRoleChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'suggestionItemHeightChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'suggestionListOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Signal 'suggestionModelChanged'
        QtMocHelpers::SignalData<void(QAbstractItemModel *)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Signal 'suggestionCountChanged'
        QtMocHelpers::SignalData<void(int)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Signal 'asyncSuggestionsEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Signal 'debounceIntervalChanged'
        QtMocHelpers::SignalData<void(int)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 },
        }}),
        // Signal 'loadStateChanged'
        QtMocHelpers::SignalData<void(enum LoadState)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Signal 'hasMoreSuggestionsChanged'
        QtMocHelpers::SignalData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Signal 'loadingTextChanged'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'emptyTextChanged'
        QtMocHelpers::SignalData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'emptyDescriptionChanged'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loadingMoreTextChanged'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'moreResultsTextChanged'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'retryTextChanged'
        QtMocHelpers::SignalData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loadMoreTextChanged'
        QtMocHelpers::SignalData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'suggestionsRequested'
        QtMocHelpers::SignalData<void(const QString &, quint64, bool)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 45 }, { QMetaType::ULongLong, 46 }, { QMetaType::Bool, 47 },
        }}),
        // Signal 'suggestionRequestCanceled'
        QtMocHelpers::SignalData<void(quint64)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::ULongLong, 46 },
        }}),
        // Slot 'setSuggestions'
        QtMocHelpers::SlotData<void(const QStringList &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 50 },
        }}),
        // Slot 'clearSuggestions'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestSuggestions'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadMoreSuggestions'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'retrySuggestions'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cancelSuggestions'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'suggestions'
        QtMocHelpers::PropertyData<QStringList>(50, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'header'
        QtMocHelpers::PropertyData<QString>(58, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'queryIconGlyph'
        QtMocHelpers::PropertyData<QString>(59, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'queryIconVisible'
        QtMocHelpers::PropertyData<bool>(60, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'clearButtonEnabled'
        QtMocHelpers::PropertyData<bool>(61, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0x70000000 | 56),
        // property 'queryButtonPlacement'
        QtMocHelpers::PropertyData<enum QueryButtonPlacement>(62, 0x80000000 | 63, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'inputHeight'
        QtMocHelpers::PropertyData<int>(64, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'queryButtonSize'
        QtMocHelpers::PropertyData<int>(65, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'clearButtonSize'
        QtMocHelpers::PropertyData<int>(66, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0x70000000 | 57),
        // property 'suggestionFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(67, 0x80000000 | 68, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 10),
        // property 'suggestionItemHeight'
        QtMocHelpers::PropertyData<int>(69, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'isSuggestionListOpen'
        QtMocHelpers::PropertyData<bool>(70, QMetaType::Bool, QMC::DefaultPropertyFlags, 12),
        // property 'suggestionModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(71, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 13),
        // property 'suggestionCount'
        QtMocHelpers::PropertyData<int>(72, QMetaType::Int, QMC::DefaultPropertyFlags, 14),
        // property 'asyncSuggestionsEnabled'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'debounceInterval'
        QtMocHelpers::PropertyData<int>(74, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'loadState'
        QtMocHelpers::PropertyData<enum LoadState>(75, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 17),
        // property 'hasMoreSuggestions'
        QtMocHelpers::PropertyData<bool>(76, QMetaType::Bool, QMC::DefaultPropertyFlags, 18),
        // property 'loadingText'
        QtMocHelpers::PropertyData<QString>(77, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 19),
        // property 'emptyText'
        QtMocHelpers::PropertyData<QString>(78, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 20),
        // property 'emptyDescription'
        QtMocHelpers::PropertyData<QString>(79, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 21),
        // property 'loadingMoreText'
        QtMocHelpers::PropertyData<QString>(80, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 22),
        // property 'moreResultsText'
        QtMocHelpers::PropertyData<QString>(81, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 23),
        // property 'retryText'
        QtMocHelpers::PropertyData<QString>(82, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 24),
        // property 'loadMoreText'
        QtMocHelpers::PropertyData<QString>(83, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 25),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'TextChangeReason'
        QtMocHelpers::EnumData<enum TextChangeReason>(84, 84, QMC::EnumIsScoped).add({
            {   85, TextChangeReason::UserInput },
            {   86, TextChangeReason::ProgrammaticChange },
            {   87, TextChangeReason::SuggestionChosen },
        }),
        // enum 'QueryButtonPlacement'
        QtMocHelpers::EnumData<enum QueryButtonPlacement>(63, 63, QMC::EnumIsScoped).add({
            {   88, QueryButtonPlacement::Right },
            {   89, QueryButtonPlacement::Left },
        }),
        // enum 'LoadState'
        QtMocHelpers::EnumData<enum LoadState>(33, 33, QMC::EnumIsScoped).add({
            {   90, LoadState::Idle },
            {   91, LoadState::Loading },
            {   92, LoadState::Ready },
            {   93, LoadState::Failed },
        }),
    };
    return QtMocHelpers::metaObjectData<AutoSuggestBox, qt_meta_tag_ZN6fluent10textfields14AutoSuggestBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10textfields14AutoSuggestBoxE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::textfields::AutoSuggestBox::staticMetaObject = { {
    QMetaObject::SuperData::link<LineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields14AutoSuggestBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields14AutoSuggestBoxE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10textfields14AutoSuggestBoxE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10textfields14AutoSuggestBoxE_t>.metaTypes,
    nullptr
} };

void fluent::textfields::AutoSuggestBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AutoSuggestBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textChangedWithReason((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<AutoSuggestBox::TextChangeReason>>(_a[2]))); break;
        case 1: _t->suggestionChosen((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 2: _t->querySubmitted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 3: _t->suggestionsChanged(); break;
        case 4: _t->headerChanged(); break;
        case 5: _t->queryIconGlyphChanged(); break;
        case 6: _t->queryIconVisibleChanged(); break;
        case 7: _t->queryButtonPlacementChanged(); break;
        case 8: _t->inputHeightChanged(); break;
        case 9: _t->queryButtonSizeChanged(); break;
        case 10: _t->suggestionFontRoleChanged(); break;
        case 11: _t->suggestionItemHeightChanged(); break;
        case 12: _t->suggestionListOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->suggestionModelChanged((*reinterpret_cast<std::add_pointer_t<QAbstractItemModel*>>(_a[1]))); break;
        case 14: _t->suggestionCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->asyncSuggestionsEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->debounceIntervalChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->loadStateChanged((*reinterpret_cast<std::add_pointer_t<enum LoadState>>(_a[1]))); break;
        case 18: _t->hasMoreSuggestionsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->loadingTextChanged(); break;
        case 20: _t->emptyTextChanged(); break;
        case 21: _t->emptyDescriptionChanged(); break;
        case 22: _t->loadingMoreTextChanged(); break;
        case 23: _t->moreResultsTextChanged(); break;
        case 24: _t->retryTextChanged(); break;
        case 25: _t->loadMoreTextChanged(); break;
        case 26: _t->suggestionsRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint64>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 27: _t->suggestionRequestCanceled((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1]))); break;
        case 28: _t->setSuggestions((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 29: _t->clearSuggestions(); break;
        case 30: _t->requestSuggestions(); break;
        case 31: _t->loadMoreSuggestions(); break;
        case 32: _t->retrySuggestions(); break;
        case 33: _t->cancelSuggestions(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(const QString & , AutoSuggestBox::TextChangeReason )>(_a, &AutoSuggestBox::textChangedWithReason, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(const QVariant & )>(_a, &AutoSuggestBox::suggestionChosen, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(const QString & , const QVariant & )>(_a, &AutoSuggestBox::querySubmitted, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::suggestionsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::headerChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::queryIconGlyphChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::queryIconVisibleChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::queryButtonPlacementChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::inputHeightChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::queryButtonSizeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::suggestionFontRoleChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::suggestionItemHeightChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(bool )>(_a, &AutoSuggestBox::suggestionListOpenChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(QAbstractItemModel * )>(_a, &AutoSuggestBox::suggestionModelChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(int )>(_a, &AutoSuggestBox::suggestionCountChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(bool )>(_a, &AutoSuggestBox::asyncSuggestionsEnabledChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(int )>(_a, &AutoSuggestBox::debounceIntervalChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(LoadState )>(_a, &AutoSuggestBox::loadStateChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(bool )>(_a, &AutoSuggestBox::hasMoreSuggestionsChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::loadingTextChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::emptyTextChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::emptyDescriptionChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::loadingMoreTextChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::moreResultsTextChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::retryTextChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)()>(_a, &AutoSuggestBox::loadMoreTextChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(const QString & , quint64 , bool )>(_a, &AutoSuggestBox::suggestionsRequested, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (AutoSuggestBox::*)(quint64 )>(_a, &AutoSuggestBox::suggestionRequestCanceled, 27))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QStringList*>(_v) = _t->suggestions(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->header(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->queryIconGlyph(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isQueryIconVisible(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isClearButtonEnabled(); break;
        case 5: *reinterpret_cast<enum QueryButtonPlacement*>(_v) = _t->queryButtonPlacement(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->inputHeight(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->queryButtonSize(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->clearButtonSize(); break;
        case 9: *reinterpret_cast<Typography::FontRole*>(_v) = _t->suggestionFontRole(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->suggestionItemHeight(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isSuggestionListOpen(); break;
        case 12: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->suggestionModel(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->suggestionCount(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->isAsyncSuggestionsEnabled(); break;
        case 15: *reinterpret_cast<int*>(_v) = _t->debounceInterval(); break;
        case 16: *reinterpret_cast<enum LoadState*>(_v) = _t->loadState(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->hasMoreSuggestions(); break;
        case 18: *reinterpret_cast<QString*>(_v) = _t->loadingText(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->emptyText(); break;
        case 20: *reinterpret_cast<QString*>(_v) = _t->emptyDescription(); break;
        case 21: *reinterpret_cast<QString*>(_v) = _t->loadingMoreText(); break;
        case 22: *reinterpret_cast<QString*>(_v) = _t->moreResultsText(); break;
        case 23: *reinterpret_cast<QString*>(_v) = _t->retryText(); break;
        case 24: *reinterpret_cast<QString*>(_v) = _t->loadMoreText(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSuggestions(*reinterpret_cast<QStringList*>(_v)); break;
        case 1: _t->setHeader(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setQueryIconGlyph(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setQueryIconVisible(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setClearButtonEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setQueryButtonPlacement(*reinterpret_cast<enum QueryButtonPlacement*>(_v)); break;
        case 6: _t->setInputHeight(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setQueryButtonSize(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setClearButtonSize(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setSuggestionFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 10: _t->setSuggestionItemHeight(*reinterpret_cast<int*>(_v)); break;
        case 12: _t->setSuggestionModel(*reinterpret_cast<QAbstractItemModel**>(_v)); break;
        case 14: _t->setAsyncSuggestionsEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 15: _t->setDebounceInterval(*reinterpret_cast<int*>(_v)); break;
        case 18: _t->setLoadingText(*reinterpret_cast<QString*>(_v)); break;
        case 19: _t->setEmptyText(*reinterpret_cast<QString*>(_v)); break;
        case 20: _t->setEmptyDescription(*reinterpret_cast<QString*>(_v)); break;
        case 21: _t->setLoadingMoreText(*reinterpret_cast<QString*>(_v)); break;
        case 22: _t->setMoreResultsText(*reinterpret_cast<QString*>(_v)); break;
        case 23: _t->setRetryText(*reinterpret_cast<QString*>(_v)); break;
        case 24: _t->setLoadMoreText(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::textfields::AutoSuggestBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::textfields::AutoSuggestBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields14AutoSuggestBoxE_t>.strings))
        return static_cast<void*>(this);
    return LineEdit::qt_metacast(_clname);
}

int fluent::textfields::AutoSuggestBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void fluent::textfields::AutoSuggestBox::textChangedWithReason(const QString & _t1, AutoSuggestBox::TextChangeReason _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void fluent::textfields::AutoSuggestBox::suggestionChosen(const QVariant & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::textfields::AutoSuggestBox::querySubmitted(const QString & _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void fluent::textfields::AutoSuggestBox::suggestionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::textfields::AutoSuggestBox::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::textfields::AutoSuggestBox::queryIconGlyphChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::textfields::AutoSuggestBox::queryIconVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::textfields::AutoSuggestBox::queryButtonPlacementChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fluent::textfields::AutoSuggestBox::inputHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void fluent::textfields::AutoSuggestBox::queryButtonSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fluent::textfields::AutoSuggestBox::suggestionFontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void fluent::textfields::AutoSuggestBox::suggestionItemHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void fluent::textfields::AutoSuggestBox::suggestionListOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::textfields::AutoSuggestBox::suggestionModelChanged(QAbstractItemModel * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void fluent::textfields::AutoSuggestBox::suggestionCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void fluent::textfields::AutoSuggestBox::asyncSuggestionsEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void fluent::textfields::AutoSuggestBox::debounceIntervalChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void fluent::textfields::AutoSuggestBox::loadStateChanged(LoadState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void fluent::textfields::AutoSuggestBox::hasMoreSuggestionsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void fluent::textfields::AutoSuggestBox::loadingTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void fluent::textfields::AutoSuggestBox::emptyTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void fluent::textfields::AutoSuggestBox::emptyDescriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void fluent::textfields::AutoSuggestBox::loadingMoreTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void fluent::textfields::AutoSuggestBox::moreResultsTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void fluent::textfields::AutoSuggestBox::retryTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void fluent::textfields::AutoSuggestBox::loadMoreTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void fluent::textfields::AutoSuggestBox::suggestionsRequested(const QString & _t1, quint64 _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1, _t2, _t3);
}

// SIGNAL 27
void fluent::textfields::AutoSuggestBox::suggestionRequestCanceled(quint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1);
}
namespace CheckNotifySignalValidity_ZN6fluent10textfields14AutoSuggestBoxE {
template<typename T> using has_nullary_clearButtonEnabledChanged = decltype(std::declval<T>().clearButtonEnabledChanged());
template<typename T> using has_unary_clearButtonEnabledChanged = decltype(std::declval<T>().clearButtonEnabledChanged(std::declval<bool>()));
static_assert(qxp::is_detected_v<has_nullary_clearButtonEnabledChanged, fluent::textfields::AutoSuggestBox> || qxp::is_detected_v<has_unary_clearButtonEnabledChanged, fluent::textfields::AutoSuggestBox>,
              "NOTIFY signal clearButtonEnabledChanged does not exist in class (or is private in its parent)");
template<typename T> using has_nullary_clearButtonSizeChanged = decltype(std::declval<T>().clearButtonSizeChanged());
template<typename T> using has_unary_clearButtonSizeChanged = decltype(std::declval<T>().clearButtonSizeChanged(std::declval<int>()));
static_assert(qxp::is_detected_v<has_nullary_clearButtonSizeChanged, fluent::textfields::AutoSuggestBox> || qxp::is_detected_v<has_unary_clearButtonSizeChanged, fluent::textfields::AutoSuggestBox>,
              "NOTIFY signal clearButtonSizeChanged does not exist in class (or is private in its parent)");
}
QT_WARNING_POP
