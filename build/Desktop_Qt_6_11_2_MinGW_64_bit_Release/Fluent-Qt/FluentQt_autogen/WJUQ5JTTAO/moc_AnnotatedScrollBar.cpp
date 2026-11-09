/****************************************************************************
** Meta object code from reading C++ file 'AnnotatedScrollBar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/scrolling/AnnotatedScrollBar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnnotatedScrollBar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9scrolling18AnnotatedScrollBarE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::scrolling::AnnotatedScrollBar::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9scrolling18AnnotatedScrollBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::scrolling::AnnotatedScrollBar",
        "rangeChanged",
        "",
        "minimum",
        "maximum",
        "valueChanged",
        "value",
        "pageStepChanged",
        "pageStep",
        "labelsChanged",
        "layoutMetricsChanged",
        "detailLabelRequested",
        "offset",
        "scrollRequested",
        "labelActivated",
        "text",
        "preferredSize",
        "QSize",
        "minimumBarSize",
        "verticalPadding",
        "caretSize",
        "labelColumnWidth",
        "labelLineHeight",
        "minimumLabelSpacing",
        "indicatorWidth",
        "indicatorThickness",
        "lineStepFallback"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'rangeChanged'
        QtMocHelpers::SignalData<void(int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'pageStepChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'labelsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutMetricsChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'detailLabelRequested'
        QtMocHelpers::SignalData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'scrollRequested'
        QtMocHelpers::SignalData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'labelActivated'
        QtMocHelpers::SignalData<void(int, const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::QString, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'minimum'
        QtMocHelpers::PropertyData<int>(3, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'maximum'
        QtMocHelpers::PropertyData<int>(4, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'value'
        QtMocHelpers::PropertyData<int>(6, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'pageStep'
        QtMocHelpers::PropertyData<int>(8, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'preferredSize'
        QtMocHelpers::PropertyData<QSize>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'minimumBarSize'
        QtMocHelpers::PropertyData<QSize>(18, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'verticalPadding'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'caretSize'
        QtMocHelpers::PropertyData<QSize>(20, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'labelColumnWidth'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'labelLineHeight'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'minimumLabelSpacing'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'indicatorWidth'
        QtMocHelpers::PropertyData<int>(24, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'indicatorThickness'
        QtMocHelpers::PropertyData<int>(25, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'lineStepFallback'
        QtMocHelpers::PropertyData<int>(26, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnnotatedScrollBar, qt_meta_tag_ZN6fluent9scrolling18AnnotatedScrollBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::scrolling::AnnotatedScrollBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling18AnnotatedScrollBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling18AnnotatedScrollBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9scrolling18AnnotatedScrollBarE_t>.metaTypes,
    nullptr
} };

void fluent::scrolling::AnnotatedScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnnotatedScrollBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->pageStepChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->labelsChanged(); break;
        case 4: _t->layoutMetricsChanged(); break;
        case 5: _t->detailLabelRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->scrollRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->labelActivated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AnnotatedScrollBar::*)(int , int )>(_a, &AnnotatedScrollBar::rangeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnnotatedScrollBar::*)(int )>(_a, &AnnotatedScrollBar::valueChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnnotatedScrollBar::*)(int )>(_a, &AnnotatedScrollBar::pageStepChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnnotatedScrollBar::*)()>(_a, &AnnotatedScrollBar::labelsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnnotatedScrollBar::*)()>(_a, &AnnotatedScrollBar::layoutMetricsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnnotatedScrollBar::*)(int )>(_a, &AnnotatedScrollBar::detailLabelRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnnotatedScrollBar::*)(int )>(_a, &AnnotatedScrollBar::scrollRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnnotatedScrollBar::*)(int , const QString & )>(_a, &AnnotatedScrollBar::labelActivated, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->value(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->pageStep(); break;
        case 4: *reinterpret_cast<QSize*>(_v) = _t->preferredSize(); break;
        case 5: *reinterpret_cast<QSize*>(_v) = _t->minimumBarSize(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->verticalPadding(); break;
        case 7: *reinterpret_cast<QSize*>(_v) = _t->caretSize(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->labelColumnWidth(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->labelLineHeight(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->minimumLabelSpacing(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->indicatorWidth(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->indicatorThickness(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->lineStepFallback(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setPageStep(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setPreferredSize(*reinterpret_cast<QSize*>(_v)); break;
        case 5: _t->setMinimumBarSize(*reinterpret_cast<QSize*>(_v)); break;
        case 6: _t->setVerticalPadding(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setCaretSize(*reinterpret_cast<QSize*>(_v)); break;
        case 8: _t->setLabelColumnWidth(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setLabelLineHeight(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setMinimumLabelSpacing(*reinterpret_cast<int*>(_v)); break;
        case 11: _t->setIndicatorWidth(*reinterpret_cast<int*>(_v)); break;
        case 12: _t->setIndicatorThickness(*reinterpret_cast<int*>(_v)); break;
        case 13: _t->setLineStepFallback(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::scrolling::AnnotatedScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::scrolling::AnnotatedScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling18AnnotatedScrollBarE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::scrolling::AnnotatedScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void fluent::scrolling::AnnotatedScrollBar::rangeChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void fluent::scrolling::AnnotatedScrollBar::valueChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::scrolling::AnnotatedScrollBar::pageStepChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::scrolling::AnnotatedScrollBar::labelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::scrolling::AnnotatedScrollBar::layoutMetricsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::scrolling::AnnotatedScrollBar::detailLabelRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::scrolling::AnnotatedScrollBar::scrollRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::scrolling::AnnotatedScrollBar::labelActivated(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}
QT_WARNING_POP
