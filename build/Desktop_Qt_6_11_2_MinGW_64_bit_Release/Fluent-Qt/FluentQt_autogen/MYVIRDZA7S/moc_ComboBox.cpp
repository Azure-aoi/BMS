/****************************************************************************
** Meta object code from reading C++ file 'ComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/basicinput/ComboBox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComboBox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10basicinput20ComboBoxItemDelegateE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::ComboBoxItemDelegate::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput20ComboBoxItemDelegateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::ComboBoxItemDelegate"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ComboBoxItemDelegate, qt_meta_tag_ZN6fluent10basicinput20ComboBoxItemDelegateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::basicinput::ComboBoxItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput20ComboBoxItemDelegateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput20ComboBoxItemDelegateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput20ComboBoxItemDelegateE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::ComboBoxItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ComboBoxItemDelegate *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *fluent::basicinput::ComboBoxItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::ComboBoxItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput20ComboBoxItemDelegateE_t>.strings))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int fluent::basicinput::ComboBoxItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN6fluent10basicinput8ComboBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::ComboBox::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput8ComboBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::ComboBox",
        "fontRoleChanged",
        "",
        "layoutChanged",
        "chevronChanged",
        "fontRole",
        "Typography::FontRole",
        "contentPaddingH",
        "contentPaddingV",
        "chevronGlyph",
        "chevronSize",
        "chevronOffset",
        "QPoint",
        "popupOffset",
        "pressProgress"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'chevronChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(5, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'contentPaddingH'
        QtMocHelpers::PropertyData<int>(7, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'contentPaddingV'
        QtMocHelpers::PropertyData<int>(8, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'chevronGlyph'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'chevronSize'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'chevronOffset'
        QtMocHelpers::PropertyData<QPoint>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'popupOffset'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'pressProgress'
        QtMocHelpers::PropertyData<qreal>(14, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ComboBox, qt_meta_tag_ZN6fluent10basicinput8ComboBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10basicinput8ComboBoxE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::basicinput::ComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput8ComboBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput8ComboBoxE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10basicinput8ComboBoxE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput8ComboBoxE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::ComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ComboBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fontRoleChanged(); break;
        case 1: _t->layoutChanged(); break;
        case 2: _t->chevronChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ComboBox::*)()>(_a, &ComboBox::fontRoleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ComboBox::*)()>(_a, &ComboBox::layoutChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ComboBox::*)()>(_a, &ComboBox::chevronChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Typography::FontRole*>(_v) = _t->fontRole(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->contentPaddingH(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->contentPaddingV(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->chevronGlyph(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->chevronSize(); break;
        case 5: *reinterpret_cast<QPoint*>(_v) = _t->chevronOffset(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->popupOffset(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->pressProgress(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 1: _t->setContentPaddingH(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setContentPaddingV(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setChevronGlyph(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setChevronSize(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setChevronOffset(*reinterpret_cast<QPoint*>(_v)); break;
        case 6: _t->setPopupOffset(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setPressProgress(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::basicinput::ComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::ComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput8ComboBoxE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QComboBox::qt_metacast(_clname);
}

int fluent::basicinput::ComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
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
void fluent::basicinput::ComboBox::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::basicinput::ComboBox::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::basicinput::ComboBox::chevronChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
