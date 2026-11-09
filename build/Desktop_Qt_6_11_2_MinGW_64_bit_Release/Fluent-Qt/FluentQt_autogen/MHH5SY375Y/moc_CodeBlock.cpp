/****************************************************************************
** Meta object code from reading C++ file 'CodeBlock.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/textfields/CodeBlock.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CodeBlock.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10textfields9CodeBlockE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::textfields::CodeBlock::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10textfields9CodeBlockE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::textfields::CodeBlock",
        "codeChanged",
        "",
        "code",
        "languageChanged",
        "language",
        "wordWrapChanged",
        "enabled",
        "maxVisibleLinesChanged",
        "lines",
        "copyFinished",
        "success",
        "copy",
        "wordWrap",
        "maxVisibleLines"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'codeChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'languageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'wordWrapChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'maxVisibleLinesChanged'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'copyFinished'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'copy'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'code'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'language'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'wordWrap'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'maxVisibleLines'
        QtMocHelpers::PropertyData<int>(14, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CodeBlock, qt_meta_tag_ZN6fluent10textfields9CodeBlockE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::textfields::CodeBlock::staticMetaObject = { {
    QMetaObject::SuperData::link<layout::Expander::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields9CodeBlockE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields9CodeBlockE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10textfields9CodeBlockE_t>.metaTypes,
    nullptr
} };

void fluent::textfields::CodeBlock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CodeBlock *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->codeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->languageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->wordWrapChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->maxVisibleLinesChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->copyFinished((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->copy(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CodeBlock::*)(const QString & )>(_a, &CodeBlock::codeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CodeBlock::*)(const QString & )>(_a, &CodeBlock::languageChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CodeBlock::*)(bool )>(_a, &CodeBlock::wordWrapChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CodeBlock::*)(int )>(_a, &CodeBlock::maxVisibleLinesChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CodeBlock::*)(bool )>(_a, &CodeBlock::copyFinished, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->code(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->language(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isWordWrapEnabled(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->maxVisibleLines(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCode(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setLanguage(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setWordWrap(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setMaxVisibleLines(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::textfields::CodeBlock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::textfields::CodeBlock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields9CodeBlockE_t>.strings))
        return static_cast<void*>(this);
    return layout::Expander::qt_metacast(_clname);
}

int fluent::textfields::CodeBlock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = layout::Expander::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void fluent::textfields::CodeBlock::codeChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::textfields::CodeBlock::languageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::textfields::CodeBlock::wordWrapChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::textfields::CodeBlock::maxVisibleLinesChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::textfields::CodeBlock::copyFinished(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
