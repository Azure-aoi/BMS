/****************************************************************************
** Meta object code from reading C++ file 'Field.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/layout/Field.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Field.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent6layout5FieldE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::layout::Field::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6layout5FieldE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::layout::Field",
        "labelTextChanged",
        "",
        "text",
        "labelPositionChanged",
        "LabelPosition",
        "position",
        "labelWidthChanged",
        "width",
        "requiredChanged",
        "required",
        "helperTextChanged",
        "validationMessageChanged",
        "validationStateChanged",
        "ValidationState",
        "state",
        "editorChanged",
        "QWidget*",
        "widget",
        "editorOwnershipChanged",
        "WidgetOwnership",
        "ownership",
        "labelText",
        "labelPosition",
        "labelWidth",
        "helperText",
        "validationMessage",
        "validationState",
        "editor",
        "Top",
        "Leading",
        "None",
        "Error",
        "Warning",
        "Success",
        "Validating"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'labelTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'labelPositionChanged'
        QtMocHelpers::SignalData<void(enum LabelPosition)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'labelWidthChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'requiredChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Signal 'helperTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'validationMessageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'validationStateChanged'
        QtMocHelpers::SignalData<void(enum ValidationState)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'editorChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'editorOwnershipChanged'
        QtMocHelpers::SignalData<void(WidgetOwnership)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'labelText'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'labelPosition'
        QtMocHelpers::PropertyData<enum LabelPosition>(23, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'labelWidth'
        QtMocHelpers::PropertyData<int>(24, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'required'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'helperText'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'validationMessage'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'validationState'
        QtMocHelpers::PropertyData<enum ValidationState>(27, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'editor'
        QtMocHelpers::PropertyData<QWidget*>(28, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'LabelPosition'
        QtMocHelpers::EnumData<enum LabelPosition>(5, 5, QMC::EnumIsScoped).add({
            {   29, LabelPosition::Top },
            {   30, LabelPosition::Leading },
        }),
        // enum 'ValidationState'
        QtMocHelpers::EnumData<enum ValidationState>(14, 14, QMC::EnumIsScoped).add({
            {   31, ValidationState::None },
            {   32, ValidationState::Error },
            {   33, ValidationState::Warning },
            {   34, ValidationState::Success },
            {   35, ValidationState::Validating },
        }),
    };
    return QtMocHelpers::metaObjectData<Field, qt_meta_tag_ZN6fluent6layout5FieldE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::layout::Field::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout5FieldE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout5FieldE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6layout5FieldE_t>.metaTypes,
    nullptr
} };

void fluent::layout::Field::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Field *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->labelTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->labelPositionChanged((*reinterpret_cast<std::add_pointer_t<enum LabelPosition>>(_a[1]))); break;
        case 2: _t->labelWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->requiredChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->helperTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->validationMessageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->validationStateChanged((*reinterpret_cast<std::add_pointer_t<enum ValidationState>>(_a[1]))); break;
        case 7: _t->editorChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 8: _t->editorOwnershipChanged((*reinterpret_cast<std::add_pointer_t<WidgetOwnership>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Field::*)(const QString & )>(_a, &Field::labelTextChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Field::*)(LabelPosition )>(_a, &Field::labelPositionChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Field::*)(int )>(_a, &Field::labelWidthChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Field::*)(bool )>(_a, &Field::requiredChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Field::*)(const QString & )>(_a, &Field::helperTextChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Field::*)(const QString & )>(_a, &Field::validationMessageChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Field::*)(ValidationState )>(_a, &Field::validationStateChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Field::*)(QWidget * )>(_a, &Field::editorChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Field::*)(WidgetOwnership )>(_a, &Field::editorOwnershipChanged, 8))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->labelText(); break;
        case 1: *reinterpret_cast<enum LabelPosition*>(_v) = _t->labelPosition(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->labelWidth(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isRequired(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->helperText(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->validationMessage(); break;
        case 6: *reinterpret_cast<enum ValidationState*>(_v) = _t->validationState(); break;
        case 7: *reinterpret_cast<QWidget**>(_v) = _t->editor(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabelText(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setLabelPosition(*reinterpret_cast<enum LabelPosition*>(_v)); break;
        case 2: _t->setLabelWidth(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setRequired(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setHelperText(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setValidationMessage(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setValidationState(*reinterpret_cast<enum ValidationState*>(_v)); break;
        case 7: _t->setEditor(*reinterpret_cast<QWidget**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::layout::Field::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::layout::Field::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout5FieldE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::layout::Field::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
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
void fluent::layout::Field::labelTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::layout::Field::labelPositionChanged(LabelPosition _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::layout::Field::labelWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::layout::Field::requiredChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::layout::Field::helperTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::layout::Field::validationMessageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::layout::Field::validationStateChanged(ValidationState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::layout::Field::editorChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::layout::Field::editorOwnershipChanged(WidgetOwnership _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
