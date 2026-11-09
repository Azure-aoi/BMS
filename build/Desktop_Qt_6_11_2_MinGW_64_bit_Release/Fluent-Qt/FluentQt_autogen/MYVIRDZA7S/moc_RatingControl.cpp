/****************************************************************************
** Meta object code from reading C++ file 'RatingControl.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/basicinput/RatingControl.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RatingControl.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10basicinput13RatingControlE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::RatingControl::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput13RatingControlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::RatingControl",
        "valueChanged",
        "",
        "value",
        "placeholderValueChanged",
        "captionChanged",
        "caption",
        "isClearEnabledChanged",
        "enabled",
        "isReadOnlyChanged",
        "readOnly",
        "maxRatingChanged",
        "rating",
        "starSizeChanged",
        "size",
        "fontRoleChanged",
        "captionFontRoleChanged",
        "placeholderValue",
        "isClearEnabled",
        "isReadOnly",
        "maxRating",
        "starSize",
        "fontRole",
        "Typography::FontRole",
        "captionFontRole"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(double)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 },
        }}),
        // Signal 'placeholderValueChanged'
        QtMocHelpers::SignalData<void(double)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 },
        }}),
        // Signal 'captionChanged'
        QtMocHelpers::SignalData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'isClearEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'isReadOnlyChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Signal 'maxRatingChanged'
        QtMocHelpers::SignalData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'starSizeChanged'
        QtMocHelpers::SignalData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'captionFontRoleChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'value'
        QtMocHelpers::PropertyData<double>(3, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'placeholderValue'
        QtMocHelpers::PropertyData<double>(17, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'caption'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'isClearEnabled'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'isReadOnly'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'maxRating'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'starSize'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'captionFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(24, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RatingControl, qt_meta_tag_ZN6fluent10basicinput13RatingControlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10basicinput13RatingControlE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::basicinput::RatingControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput13RatingControlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput13RatingControlE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10basicinput13RatingControlE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput13RatingControlE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::RatingControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RatingControl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->placeholderValueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->captionChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->isClearEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->isReadOnlyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->maxRatingChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->starSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->fontRoleChanged(); break;
        case 8: _t->captionFontRoleChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)(double )>(_a, &RatingControl::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)(double )>(_a, &RatingControl::placeholderValueChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)(const QString & )>(_a, &RatingControl::captionChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)(bool )>(_a, &RatingControl::isClearEnabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)(bool )>(_a, &RatingControl::isReadOnlyChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)(int )>(_a, &RatingControl::maxRatingChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)(int )>(_a, &RatingControl::starSizeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)()>(_a, &RatingControl::fontRoleChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (RatingControl::*)()>(_a, &RatingControl::captionFontRoleChanged, 8))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->placeholderValue(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->caption(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isClearEnabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isReadOnly(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->maxRating(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->starSize(); break;
        case 7: *reinterpret_cast<Typography::FontRole*>(_v) = _t->fontRole(); break;
        case 8: *reinterpret_cast<Typography::FontRole*>(_v) = _t->captionFontRole(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast<double*>(_v)); break;
        case 1: _t->setPlaceholderValue(*reinterpret_cast<double*>(_v)); break;
        case 2: _t->setCaption(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setIsClearEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setIsReadOnly(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setMaxRating(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setStarSize(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 8: _t->setCaptionFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::basicinput::RatingControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::RatingControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput13RatingControlE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::basicinput::RatingControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void fluent::basicinput::RatingControl::valueChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::basicinput::RatingControl::placeholderValueChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::basicinput::RatingControl::captionChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::basicinput::RatingControl::isClearEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::basicinput::RatingControl::isReadOnlyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::basicinput::RatingControl::maxRatingChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::basicinput::RatingControl::starSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::basicinput::RatingControl::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fluent::basicinput::RatingControl::captionFontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
