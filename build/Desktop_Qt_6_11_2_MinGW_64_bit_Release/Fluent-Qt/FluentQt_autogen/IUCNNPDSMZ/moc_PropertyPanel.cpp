/****************************************************************************
** Meta object code from reading C++ file 'PropertyPanel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/layout/PropertyPanel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyPanel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent6layout18PropertyDefinitionE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::layout::PropertyDefinition::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6layout18PropertyDefinitionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::layout::PropertyDefinition",
        "Type",
        "Text",
        "Number",
        "Boolean",
        "Choice",
        "Color"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Type'
        QtMocHelpers::EnumData<enum Type>(1, 1, QMC::EnumFlags{}).add({
            {    2, Type::Text },
            {    3, Type::Number },
            {    4, Type::Boolean },
            {    5, Type::Choice },
            {    6, Type::Color },
        }),
    };
    return QtMocHelpers::metaObjectData<PropertyDefinition, qt_meta_tag_ZN6fluent6layout18PropertyDefinitionE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::layout::PropertyDefinition::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout18PropertyDefinitionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout18PropertyDefinitionE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6layout18PropertyDefinitionE_t>.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN6fluent6layout13PropertyPanelE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::layout::PropertyPanel::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6layout13PropertyPanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::layout::PropertyPanel",
        "propertiesChanged",
        "",
        "searchTextChanged",
        "text",
        "readOnlyChanged",
        "readOnly",
        "valueEdited",
        "key",
        "QVariant",
        "value",
        "layoutModeChanged",
        "LayoutMode",
        "mode",
        "searchVisibilityChanged",
        "SearchVisibility",
        "visibility",
        "modifiedPropertiesChanged",
        "searchText",
        "layoutMode",
        "searchVisibility",
        "modifiedPropertyKeys",
        "Automatic",
        "Stacked",
        "Inline",
        "Visible",
        "Hidden"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'propertiesChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'readOnlyChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'valueEdited'
        QtMocHelpers::SignalData<void(const QString &, const QVariant &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Signal 'layoutModeChanged'
        QtMocHelpers::SignalData<void(enum LayoutMode)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Signal 'searchVisibilityChanged'
        QtMocHelpers::SignalData<void(enum SearchVisibility)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'modifiedPropertiesChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'searchText'
        QtMocHelpers::PropertyData<QString>(18, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'readOnly'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'layoutMode'
        QtMocHelpers::PropertyData<enum LayoutMode>(19, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'searchVisibility'
        QtMocHelpers::PropertyData<enum SearchVisibility>(20, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'modifiedPropertyKeys'
        QtMocHelpers::PropertyData<QStringList>(21, QMetaType::QStringList, QMC::DefaultPropertyFlags, 6),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'LayoutMode'
        QtMocHelpers::EnumData<enum LayoutMode>(12, 12, QMC::EnumIsScoped).add({
            {   22, LayoutMode::Automatic },
            {   23, LayoutMode::Stacked },
            {   24, LayoutMode::Inline },
        }),
        // enum 'SearchVisibility'
        QtMocHelpers::EnumData<enum SearchVisibility>(15, 15, QMC::EnumIsScoped).add({
            {   22, SearchVisibility::Automatic },
            {   25, SearchVisibility::Visible },
            {   26, SearchVisibility::Hidden },
        }),
    };
    return QtMocHelpers::metaObjectData<PropertyPanel, qt_meta_tag_ZN6fluent6layout13PropertyPanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::layout::PropertyPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout13PropertyPanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout13PropertyPanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6layout13PropertyPanelE_t>.metaTypes,
    nullptr
} };

void fluent::layout::PropertyPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PropertyPanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->propertiesChanged(); break;
        case 1: _t->searchTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->readOnlyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->valueEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 4: _t->layoutModeChanged((*reinterpret_cast<std::add_pointer_t<enum LayoutMode>>(_a[1]))); break;
        case 5: _t->searchVisibilityChanged((*reinterpret_cast<std::add_pointer_t<enum SearchVisibility>>(_a[1]))); break;
        case 6: _t->modifiedPropertiesChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PropertyPanel::*)()>(_a, &PropertyPanel::propertiesChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PropertyPanel::*)(const QString & )>(_a, &PropertyPanel::searchTextChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PropertyPanel::*)(bool )>(_a, &PropertyPanel::readOnlyChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PropertyPanel::*)(const QString & , const QVariant & )>(_a, &PropertyPanel::valueEdited, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PropertyPanel::*)(LayoutMode )>(_a, &PropertyPanel::layoutModeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PropertyPanel::*)(SearchVisibility )>(_a, &PropertyPanel::searchVisibilityChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PropertyPanel::*)()>(_a, &PropertyPanel::modifiedPropertiesChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->searchText(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isReadOnly(); break;
        case 2: *reinterpret_cast<enum LayoutMode*>(_v) = _t->layoutMode(); break;
        case 3: *reinterpret_cast<enum SearchVisibility*>(_v) = _t->searchVisibility(); break;
        case 4: *reinterpret_cast<QStringList*>(_v) = _t->modifiedPropertyKeys(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSearchText(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setReadOnly(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setLayoutMode(*reinterpret_cast<enum LayoutMode*>(_v)); break;
        case 3: _t->setSearchVisibility(*reinterpret_cast<enum SearchVisibility*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::layout::PropertyPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::layout::PropertyPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout13PropertyPanelE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::layout::PropertyPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void fluent::layout::PropertyPanel::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::layout::PropertyPanel::searchTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::layout::PropertyPanel::readOnlyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::layout::PropertyPanel::valueEdited(const QString & _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void fluent::layout::PropertyPanel::layoutModeChanged(LayoutMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::layout::PropertyPanel::searchVisibilityChanged(SearchVisibility _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::layout::PropertyPanel::modifiedPropertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
