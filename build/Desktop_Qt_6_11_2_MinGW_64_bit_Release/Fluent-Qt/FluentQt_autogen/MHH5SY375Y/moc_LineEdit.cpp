/****************************************************************************
** Meta object code from reading C++ file 'LineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/textfields/LineEdit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineEdit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10textfields8LineEditE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::textfields::LineEdit::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10textfields8LineEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::textfields::LineEdit",
        "contentMarginsChanged",
        "",
        "fontRoleChanged",
        "clearButtonEnabledChanged",
        "clearButtonSizeChanged",
        "clearButtonOffsetChanged",
        "focusedBorderWidthChanged",
        "unfocusedBorderWidthChanged",
        "frameVisibleChanged",
        "contentMargins",
        "QMargins",
        "fontRole",
        "Typography::FontRole",
        "clearButtonEnabled",
        "clearButtonSize",
        "clearButtonOffset",
        "QPoint",
        "focusedBorderWidth",
        "unfocusedBorderWidth",
        "frameVisible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'contentMarginsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clearButtonEnabledChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clearButtonSizeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clearButtonOffsetChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusedBorderWidthChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unfocusedBorderWidthChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'frameVisibleChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'contentMargins'
        QtMocHelpers::PropertyData<QMargins>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'clearButtonEnabled'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'clearButtonSize'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'clearButtonOffset'
        QtMocHelpers::PropertyData<QPoint>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'focusedBorderWidth'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'unfocusedBorderWidth'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'frameVisible'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LineEdit, qt_meta_tag_ZN6fluent10textfields8LineEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10textfields8LineEditE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::textfields::LineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields8LineEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields8LineEditE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10textfields8LineEditE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10textfields8LineEditE_t>.metaTypes,
    nullptr
} };

void fluent::textfields::LineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LineEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->contentMarginsChanged(); break;
        case 1: _t->fontRoleChanged(); break;
        case 2: _t->clearButtonEnabledChanged(); break;
        case 3: _t->clearButtonSizeChanged(); break;
        case 4: _t->clearButtonOffsetChanged(); break;
        case 5: _t->focusedBorderWidthChanged(); break;
        case 6: _t->unfocusedBorderWidthChanged(); break;
        case 7: _t->frameVisibleChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LineEdit::*)()>(_a, &LineEdit::contentMarginsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LineEdit::*)()>(_a, &LineEdit::fontRoleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LineEdit::*)()>(_a, &LineEdit::clearButtonEnabledChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LineEdit::*)()>(_a, &LineEdit::clearButtonSizeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LineEdit::*)()>(_a, &LineEdit::clearButtonOffsetChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (LineEdit::*)()>(_a, &LineEdit::focusedBorderWidthChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (LineEdit::*)()>(_a, &LineEdit::unfocusedBorderWidthChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (LineEdit::*)()>(_a, &LineEdit::frameVisibleChanged, 7))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QMargins*>(_v) = _t->contentMargins(); break;
        case 1: *reinterpret_cast<Typography::FontRole*>(_v) = _t->fontRole(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isClearButtonEnabled(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->clearButtonSize(); break;
        case 4: *reinterpret_cast<QPoint*>(_v) = _t->clearButtonOffset(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->focusedBorderWidth(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->unfocusedBorderWidth(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isFrameVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentMargins(*reinterpret_cast<QMargins*>(_v)); break;
        case 1: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 2: _t->setClearButtonEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setClearButtonSize(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setClearButtonOffset(*reinterpret_cast<QPoint*>(_v)); break;
        case 5: _t->setFocusedBorderWidth(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setUnfocusedBorderWidth(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setFrameVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::textfields::LineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::textfields::LineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields8LineEditE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int fluent::textfields::LineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
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
void fluent::textfields::LineEdit::contentMarginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::textfields::LineEdit::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::textfields::LineEdit::clearButtonEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::textfields::LineEdit::clearButtonSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::textfields::LineEdit::clearButtonOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::textfields::LineEdit::focusedBorderWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::textfields::LineEdit::unfocusedBorderWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::textfields::LineEdit::frameVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
