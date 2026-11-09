/****************************************************************************
** Meta object code from reading C++ file 'TextEdit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/textfields/TextEdit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextEdit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10textfields8TextEditE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::textfields::TextEdit::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10textfields8TextEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::textfields::TextEdit",
        "autoResizeEnabledChanged",
        "",
        "frameVisibleChanged",
        "textChanged",
        "cursorPositionChanged",
        "selectionChanged",
        "contentMarginsChanged",
        "fontRoleChanged",
        "focusedBorderWidthChanged",
        "unfocusedBorderWidthChanged",
        "layoutMetricsChanged",
        "tabChangesFocusChanged",
        "scrollChainingEnabledChanged",
        "contentMargins",
        "QMargins",
        "fontRole",
        "Typography::FontRole",
        "focusedBorderWidth",
        "unfocusedBorderWidth",
        "lineHeight",
        "minVisibleLines",
        "maxVisibleLines",
        "tabChangesFocus",
        "scrollChainingEnabled",
        "autoResizeEnabled",
        "frameVisible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'autoResizeEnabledChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'frameVisibleChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cursorPositionChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contentMarginsChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusedBorderWidthChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unfocusedBorderWidthChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutMetricsChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabChangesFocusChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollChainingEnabledChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'contentMargins'
        QtMocHelpers::PropertyData<QMargins>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'focusedBorderWidth'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'unfocusedBorderWidth'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'lineHeight'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'minVisibleLines'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'maxVisibleLines'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'tabChangesFocus'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'scrollChainingEnabled'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'autoResizeEnabled'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'frameVisible'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextEdit, qt_meta_tag_ZN6fluent10textfields8TextEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10textfields8TextEditE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::textfields::TextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields8TextEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields8TextEditE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10textfields8TextEditE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10textfields8TextEditE_t>.metaTypes,
    nullptr
} };

void fluent::textfields::TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->autoResizeEnabledChanged(); break;
        case 1: _t->frameVisibleChanged(); break;
        case 2: _t->textChanged(); break;
        case 3: _t->cursorPositionChanged(); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->contentMarginsChanged(); break;
        case 6: _t->fontRoleChanged(); break;
        case 7: _t->focusedBorderWidthChanged(); break;
        case 8: _t->unfocusedBorderWidthChanged(); break;
        case 9: _t->layoutMetricsChanged(); break;
        case 10: _t->tabChangesFocusChanged(); break;
        case 11: _t->scrollChainingEnabledChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::autoResizeEnabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::frameVisibleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::textChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::cursorPositionChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::selectionChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::contentMarginsChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::fontRoleChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::focusedBorderWidthChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::unfocusedBorderWidthChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::layoutMetricsChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::tabChangesFocusChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextEdit::*)()>(_a, &TextEdit::scrollChainingEnabledChanged, 11))
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
        case 2: *reinterpret_cast<int*>(_v) = _t->focusedBorderWidth(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->unfocusedBorderWidth(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->lineHeight(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->minVisibleLines(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->maxVisibleLines(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->tabChangesFocus(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isScrollChainingEnabled(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isAutoResizeEnabled(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isFrameVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentMargins(*reinterpret_cast<QMargins*>(_v)); break;
        case 1: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 2: _t->setFocusedBorderWidth(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setUnfocusedBorderWidth(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setLineHeight(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setMinVisibleLines(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setMaxVisibleLines(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setTabChangesFocus(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setScrollChainingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setAutoResizeEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setFrameVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::textfields::TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::textfields::TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields8TextEditE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::textfields::TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void fluent::textfields::TextEdit::autoResizeEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::textfields::TextEdit::frameVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::textfields::TextEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::textfields::TextEdit::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::textfields::TextEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::textfields::TextEdit::contentMarginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::textfields::TextEdit::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::textfields::TextEdit::focusedBorderWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fluent::textfields::TextEdit::unfocusedBorderWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void fluent::textfields::TextEdit::layoutMetricsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fluent::textfields::TextEdit::tabChangesFocusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void fluent::textfields::TextEdit::scrollChainingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
