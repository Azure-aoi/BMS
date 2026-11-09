/****************************************************************************
** Meta object code from reading C++ file 'PipsPager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/scrolling/PipsPager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PipsPager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9scrolling9PipsPagerE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::scrolling::PipsPager::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9scrolling9PipsPagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::scrolling::PipsPager",
        "numberOfPagesChanged",
        "",
        "pages",
        "selectedPageIndexChanged",
        "index",
        "selectedIndexChanged",
        "oldIndex",
        "newIndex",
        "maxVisiblePipsChanged",
        "count",
        "orientationChanged",
        "Qt::Orientation",
        "orientation",
        "previousButtonVisibilityChanged",
        "PipsPagerButtonVisibility",
        "visibility",
        "nextButtonVisibilityChanged",
        "pipCellSizeChanged",
        "size",
        "inactivePipDiameterChanged",
        "diameter",
        "selectedPipDiameterChanged",
        "navigationButtonSizeChanged",
        "navigationIconSizeChanged",
        "selectionAnimationEnabledChanged",
        "enabled",
        "selectionAnimationDurationChanged",
        "durationMs",
        "numberOfPages",
        "selectedPageIndex",
        "maxVisiblePips",
        "previousButtonVisibility",
        "nextButtonVisibility",
        "pipCellSize",
        "inactivePipDiameter",
        "selectedPipDiameter",
        "navigationButtonSize",
        "navigationIconSize",
        "selectionAnimationEnabled",
        "selectionAnimationDuration",
        "selectedVisualOffset",
        "visibleWindowOffset",
        "Collapsed",
        "Visible",
        "VisibleOnPointerOver"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'numberOfPagesChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'selectedPageIndexChanged'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'selectedIndexChanged'
        QtMocHelpers::SignalData<void(int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Signal 'maxVisiblePipsChanged'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'orientationChanged'
        QtMocHelpers::SignalData<void(Qt::Orientation)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Signal 'previousButtonVisibilityChanged'
        QtMocHelpers::SignalData<void(enum PipsPagerButtonVisibility)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'nextButtonVisibilityChanged'
        QtMocHelpers::SignalData<void(enum PipsPagerButtonVisibility)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'pipCellSizeChanged'
        QtMocHelpers::SignalData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Signal 'inactivePipDiameterChanged'
        QtMocHelpers::SignalData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Signal 'selectedPipDiameterChanged'
        QtMocHelpers::SignalData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Signal 'navigationButtonSizeChanged'
        QtMocHelpers::SignalData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Signal 'navigationIconSizeChanged'
        QtMocHelpers::SignalData<void(int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Signal 'selectionAnimationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Signal 'selectionAnimationDurationChanged'
        QtMocHelpers::SignalData<void(int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'numberOfPages'
        QtMocHelpers::PropertyData<int>(29, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'selectedPageIndex'
        QtMocHelpers::PropertyData<int>(30, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'maxVisiblePips'
        QtMocHelpers::PropertyData<int>(31, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'orientation'
        QtMocHelpers::PropertyData<Qt::Orientation>(13, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'previousButtonVisibility'
        QtMocHelpers::PropertyData<enum PipsPagerButtonVisibility>(32, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'nextButtonVisibility'
        QtMocHelpers::PropertyData<enum PipsPagerButtonVisibility>(33, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'pipCellSize'
        QtMocHelpers::PropertyData<int>(34, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'inactivePipDiameter'
        QtMocHelpers::PropertyData<int>(35, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'selectedPipDiameter'
        QtMocHelpers::PropertyData<int>(36, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'navigationButtonSize'
        QtMocHelpers::PropertyData<int>(37, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'navigationIconSize'
        QtMocHelpers::PropertyData<int>(38, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'selectionAnimationEnabled'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'selectionAnimationDuration'
        QtMocHelpers::PropertyData<int>(40, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'selectedVisualOffset'
        QtMocHelpers::PropertyData<qreal>(41, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'visibleWindowOffset'
        QtMocHelpers::PropertyData<qreal>(42, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PipsPagerButtonVisibility'
        QtMocHelpers::EnumData<enum PipsPagerButtonVisibility>(15, 15, QMC::EnumIsScoped).add({
            {   43, PipsPagerButtonVisibility::Collapsed },
            {   44, PipsPagerButtonVisibility::Visible },
            {   45, PipsPagerButtonVisibility::VisibleOnPointerOver },
        }),
    };
    return QtMocHelpers::metaObjectData<PipsPager, qt_meta_tag_ZN6fluent9scrolling9PipsPagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::scrolling::PipsPager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling9PipsPagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling9PipsPagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9scrolling9PipsPagerE_t>.metaTypes,
    nullptr
} };

void fluent::scrolling::PipsPager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PipsPager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->numberOfPagesChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->selectedPageIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->selectedIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->maxVisiblePipsChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->orientationChanged((*reinterpret_cast<std::add_pointer_t<Qt::Orientation>>(_a[1]))); break;
        case 5: _t->previousButtonVisibilityChanged((*reinterpret_cast<std::add_pointer_t<enum PipsPagerButtonVisibility>>(_a[1]))); break;
        case 6: _t->nextButtonVisibilityChanged((*reinterpret_cast<std::add_pointer_t<enum PipsPagerButtonVisibility>>(_a[1]))); break;
        case 7: _t->pipCellSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->inactivePipDiameterChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->selectedPipDiameterChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->navigationButtonSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->navigationIconSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->selectionAnimationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->selectionAnimationDurationChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::numberOfPagesChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::selectedPageIndexChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int , int )>(_a, &PipsPager::selectedIndexChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::maxVisiblePipsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(Qt::Orientation )>(_a, &PipsPager::orientationChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(PipsPagerButtonVisibility )>(_a, &PipsPager::previousButtonVisibilityChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(PipsPagerButtonVisibility )>(_a, &PipsPager::nextButtonVisibilityChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::pipCellSizeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::inactivePipDiameterChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::selectedPipDiameterChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::navigationButtonSizeChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::navigationIconSizeChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(bool )>(_a, &PipsPager::selectionAnimationEnabledChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (PipsPager::*)(int )>(_a, &PipsPager::selectionAnimationDurationChanged, 13))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->numberOfPages(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->selectedPageIndex(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->maxVisiblePips(); break;
        case 3: *reinterpret_cast<Qt::Orientation*>(_v) = _t->orientation(); break;
        case 4: *reinterpret_cast<enum PipsPagerButtonVisibility*>(_v) = _t->previousButtonVisibility(); break;
        case 5: *reinterpret_cast<enum PipsPagerButtonVisibility*>(_v) = _t->nextButtonVisibility(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->pipCellSize(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->inactivePipDiameter(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->selectedPipDiameter(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->navigationButtonSize(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->navigationIconSize(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->selectionAnimationEnabled(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->selectionAnimationDuration(); break;
        case 13: *reinterpret_cast<qreal*>(_v) = _t->selectedVisualOffset(); break;
        case 14: *reinterpret_cast<qreal*>(_v) = _t->visibleWindowOffset(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNumberOfPages(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setSelectedPageIndex(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setMaxVisiblePips(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setOrientation(*reinterpret_cast<Qt::Orientation*>(_v)); break;
        case 4: _t->setPreviousButtonVisibility(*reinterpret_cast<enum PipsPagerButtonVisibility*>(_v)); break;
        case 5: _t->setNextButtonVisibility(*reinterpret_cast<enum PipsPagerButtonVisibility*>(_v)); break;
        case 6: _t->setPipCellSize(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setInactivePipDiameter(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setSelectedPipDiameter(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setNavigationButtonSize(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setNavigationIconSize(*reinterpret_cast<int*>(_v)); break;
        case 11: _t->setSelectionAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 12: _t->setSelectionAnimationDuration(*reinterpret_cast<int*>(_v)); break;
        case 13: _t->setSelectedVisualOffset(*reinterpret_cast<qreal*>(_v)); break;
        case 14: _t->setVisibleWindowOffset(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::scrolling::PipsPager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::scrolling::PipsPager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling9PipsPagerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::scrolling::PipsPager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
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
void fluent::scrolling::PipsPager::numberOfPagesChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::scrolling::PipsPager::selectedPageIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::scrolling::PipsPager::selectedIndexChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void fluent::scrolling::PipsPager::maxVisiblePipsChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::scrolling::PipsPager::orientationChanged(Qt::Orientation _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::scrolling::PipsPager::previousButtonVisibilityChanged(PipsPagerButtonVisibility _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::scrolling::PipsPager::nextButtonVisibilityChanged(PipsPagerButtonVisibility _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::scrolling::PipsPager::pipCellSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::scrolling::PipsPager::inactivePipDiameterChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::scrolling::PipsPager::selectedPipDiameterChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::scrolling::PipsPager::navigationButtonSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::scrolling::PipsPager::navigationIconSizeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::scrolling::PipsPager::selectionAnimationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::scrolling::PipsPager::selectionAnimationDurationChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}
QT_WARNING_POP
