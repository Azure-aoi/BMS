/****************************************************************************
** Meta object code from reading C++ file 'TabView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/navigation/TabView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10navigation8TabStripE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::navigation::TabStrip::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10navigation8TabStripE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::navigation::TabStrip",
        "selectedIndexRequested",
        "",
        "index",
        "tabCloseRequested",
        "addTabRequested",
        "tabMoveRequested",
        "from",
        "to",
        "animatedIndicatorRect",
        "QRect"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectedIndexRequested'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'tabCloseRequested'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'addTabRequested'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabMoveRequested'
        QtMocHelpers::SignalData<void(int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'animatedIndicatorRect'
        QtMocHelpers::PropertyData<QRect>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TabStrip, qt_meta_tag_ZN6fluent10navigation8TabStripE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::navigation::TabStrip::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation8TabStripE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation8TabStripE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10navigation8TabStripE_t>.metaTypes,
    nullptr
} };

void fluent::navigation::TabStrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TabStrip *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectedIndexRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->tabCloseRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->addTabRequested(); break;
        case 3: _t->tabMoveRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TabStrip::*)(int )>(_a, &TabStrip::selectedIndexRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabStrip::*)(int )>(_a, &TabStrip::tabCloseRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabStrip::*)()>(_a, &TabStrip::addTabRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabStrip::*)(int , int )>(_a, &TabStrip::tabMoveRequested, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QRect*>(_v) = _t->animatedIndicatorRect(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimatedIndicatorRect(*reinterpret_cast<QRect*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::navigation::TabStrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::navigation::TabStrip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation8TabStripE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::navigation::TabStrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void fluent::navigation::TabStrip::selectedIndexRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::navigation::TabStrip::tabCloseRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::navigation::TabStrip::addTabRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::navigation::TabStrip::tabMoveRequested(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN6fluent10navigation7TabViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::navigation::TabView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10navigation7TabViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::navigation::TabView",
        "tabsChanged",
        "",
        "selectedIndexChanged",
        "index",
        "currentChanged",
        "tabWidthModeChanged",
        "TabWidthMode",
        "mode",
        "closeButtonOverlayModeChanged",
        "CloseButtonOverlayMode",
        "tabsClosableChanged",
        "closable",
        "addTabButtonVisibleChanged",
        "visible",
        "tabReorderEnabledChanged",
        "enabled",
        "keyboardAcceleratorsEnabledChanged",
        "tabFontRoleChanged",
        "Typography::FontRole",
        "role",
        "iconFontFamilyChanged",
        "family",
        "tabCloseRequested",
        "addTabRequested",
        "tabMoved",
        "from",
        "to",
        "tabCount",
        "selectedIndex",
        "tabWidthMode",
        "closeButtonOverlayMode",
        "tabsClosable",
        "addTabButtonVisible",
        "tabReorderEnabled",
        "keyboardAcceleratorsEnabled",
        "tabFontRole",
        "iconFontFamily",
        "Equal",
        "SizeToContent",
        "Compact",
        "Auto",
        "OnHover",
        "Always"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'tabsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedIndexChanged'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Signal 'currentChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Signal 'tabWidthModeChanged'
        QtMocHelpers::SignalData<void(enum TabWidthMode)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'closeButtonOverlayModeChanged'
        QtMocHelpers::SignalData<void(enum CloseButtonOverlayMode)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 8 },
        }}),
        // Signal 'tabsClosableChanged'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Signal 'addTabButtonVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Signal 'tabReorderEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'keyboardAcceleratorsEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'tabFontRoleChanged'
        QtMocHelpers::SignalData<void(Typography::FontRole)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'iconFontFamilyChanged'
        QtMocHelpers::SignalData<void(const QString &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 22 },
        }}),
        // Signal 'tabCloseRequested'
        QtMocHelpers::SignalData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Signal 'addTabRequested'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabMoved'
        QtMocHelpers::SignalData<void(int, int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 }, { QMetaType::Int, 27 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'tabCount'
        QtMocHelpers::PropertyData<int>(28, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'selectedIndex'
        QtMocHelpers::PropertyData<int>(29, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'tabWidthMode'
        QtMocHelpers::PropertyData<enum TabWidthMode>(30, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'closeButtonOverlayMode'
        QtMocHelpers::PropertyData<enum CloseButtonOverlayMode>(31, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'tabsClosable'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'addTabButtonVisible'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'tabReorderEnabled'
        QtMocHelpers::PropertyData<bool>(34, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'keyboardAcceleratorsEnabled'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'tabFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(36, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'iconFontFamily'
        QtMocHelpers::PropertyData<QString>(37, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'TabWidthMode'
        QtMocHelpers::EnumData<enum TabWidthMode>(7, 7, QMC::EnumIsScoped).add({
            {   38, TabWidthMode::Equal },
            {   39, TabWidthMode::SizeToContent },
            {   40, TabWidthMode::Compact },
        }),
        // enum 'CloseButtonOverlayMode'
        QtMocHelpers::EnumData<enum CloseButtonOverlayMode>(10, 10, QMC::EnumIsScoped).add({
            {   41, CloseButtonOverlayMode::Auto },
            {   42, CloseButtonOverlayMode::OnHover },
            {   43, CloseButtonOverlayMode::Always },
        }),
    };
    return QtMocHelpers::metaObjectData<TabView, qt_meta_tag_ZN6fluent10navigation7TabViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10navigation7TabViewE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::navigation::TabView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation7TabViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation7TabViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10navigation7TabViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10navigation7TabViewE_t>.metaTypes,
    nullptr
} };

void fluent::navigation::TabView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TabView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->tabsChanged(); break;
        case 1: _t->selectedIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->tabWidthModeChanged((*reinterpret_cast<std::add_pointer_t<enum TabWidthMode>>(_a[1]))); break;
        case 4: _t->closeButtonOverlayModeChanged((*reinterpret_cast<std::add_pointer_t<enum CloseButtonOverlayMode>>(_a[1]))); break;
        case 5: _t->tabsClosableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->addTabButtonVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->tabReorderEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->keyboardAcceleratorsEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->tabFontRoleChanged((*reinterpret_cast<std::add_pointer_t<Typography::FontRole>>(_a[1]))); break;
        case 10: _t->iconFontFamilyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->tabCloseRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->addTabRequested(); break;
        case 13: _t->tabMoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Typography::FontRole >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TabView::*)()>(_a, &TabView::tabsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(int )>(_a, &TabView::selectedIndexChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(int )>(_a, &TabView::currentChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(TabWidthMode )>(_a, &TabView::tabWidthModeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(CloseButtonOverlayMode )>(_a, &TabView::closeButtonOverlayModeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(bool )>(_a, &TabView::tabsClosableChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(bool )>(_a, &TabView::addTabButtonVisibleChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(bool )>(_a, &TabView::tabReorderEnabledChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(bool )>(_a, &TabView::keyboardAcceleratorsEnabledChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(Typography::FontRole )>(_a, &TabView::tabFontRoleChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(const QString & )>(_a, &TabView::iconFontFamilyChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(int )>(_a, &TabView::tabCloseRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)()>(_a, &TabView::addTabRequested, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabView::*)(int , int )>(_a, &TabView::tabMoved, 13))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->tabCount(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->selectedIndex(); break;
        case 2: *reinterpret_cast<enum TabWidthMode*>(_v) = _t->tabWidthMode(); break;
        case 3: *reinterpret_cast<enum CloseButtonOverlayMode*>(_v) = _t->closeButtonOverlayMode(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->tabsClosable(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->addTabButtonVisible(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->tabReorderEnabled(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->keyboardAcceleratorsEnabled(); break;
        case 8: *reinterpret_cast<Typography::FontRole*>(_v) = _t->tabFontRole(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->iconFontFamily(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSelectedIndex(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setTabWidthMode(*reinterpret_cast<enum TabWidthMode*>(_v)); break;
        case 3: _t->setCloseButtonOverlayMode(*reinterpret_cast<enum CloseButtonOverlayMode*>(_v)); break;
        case 4: _t->setTabsClosable(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setAddTabButtonVisible(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setTabReorderEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setKeyboardAcceleratorsEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setTabFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 9: _t->setIconFontFamily(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::navigation::TabView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::navigation::TabView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation7TabViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "fluent::QMLPlus"))
        return static_cast< fluent::QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::navigation::TabView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void fluent::navigation::TabView::tabsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::navigation::TabView::selectedIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::navigation::TabView::currentChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::navigation::TabView::tabWidthModeChanged(TabWidthMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::navigation::TabView::closeButtonOverlayModeChanged(CloseButtonOverlayMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::navigation::TabView::tabsClosableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::navigation::TabView::addTabButtonVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::navigation::TabView::tabReorderEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::navigation::TabView::keyboardAcceleratorsEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::navigation::TabView::tabFontRoleChanged(Typography::FontRole _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::navigation::TabView::iconFontFamilyChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::navigation::TabView::tabCloseRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::navigation::TabView::addTabRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void fluent::navigation::TabView::tabMoved(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}
QT_WARNING_POP
