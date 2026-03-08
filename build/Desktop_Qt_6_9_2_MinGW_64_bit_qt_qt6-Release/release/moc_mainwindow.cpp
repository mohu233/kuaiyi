/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../untitled3/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "onDataReceived",
        "",
        "data",
        "updateBalanceAndFee",
        "obj",
        "Ui::MainWindow*",
        "ui",
        "updatePriceTable",
        "updateOrderTable",
        "updatePositionTable",
        "updateTradeTable",
        "updateCloseTable",
        "on_pushButton_clicked",
        "on_pushButton_2_clicked",
        "on_pushButton_3_clicked",
        "on_dateEdit_userDateChanged",
        "date",
        "on_calendarWidget_clicked",
        "on_calendarWidget_2_clicked",
        "on_pushButton_4_clicked",
        "on_pushButton_23_clicked",
        "onRadioButtonToggled",
        "checked",
        "onRadioButtonClicked",
        "on_pushButton_34_clicked",
        "openSubWindow",
        "on_pushButton_33_clicked",
        "on_pushButton_38_clicked",
        "on_pushButton_22_clicked",
        "on_pushButton_6_clicked",
        "on_pushButton_7_clicked",
        "on_pushButton_9_clicked",
        "on_pushButton_8_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onDataReceived'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'updateBalanceAndFee'
        QtMocHelpers::SlotData<void(const QJsonObject &, Ui::MainWindow *)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'updatePriceTable'
        QtMocHelpers::SlotData<void(const QJsonObject &, Ui::MainWindow *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'updateOrderTable'
        QtMocHelpers::SlotData<void(const QJsonObject &, Ui::MainWindow *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'updatePositionTable'
        QtMocHelpers::SlotData<void(const QJsonObject &, Ui::MainWindow *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'updateTradeTable'
        QtMocHelpers::SlotData<void(const QJsonObject &, Ui::MainWindow *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'updateCloseTable'
        QtMocHelpers::SlotData<void(const QJsonObject &, Ui::MainWindow *)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'on_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_2_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_3_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_dateEdit_userDateChanged'
        QtMocHelpers::SlotData<void(const QDate &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QDate, 17 },
        }}),
        // Slot 'on_calendarWidget_clicked'
        QtMocHelpers::SlotData<void(const QDate &)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QDate, 17 },
        }}),
        // Slot 'on_calendarWidget_2_clicked'
        QtMocHelpers::SlotData<void(const QDate &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QDate, 17 },
        }}),
        // Slot 'on_pushButton_4_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_23_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRadioButtonToggled'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'onRadioButtonClicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_34_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openSubWindow'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_33_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_38_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_22_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_6_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_7_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_9_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_8_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onDataReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->updateBalanceAndFee((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Ui::MainWindow*>>(_a[2]))); break;
        case 2: _t->updatePriceTable((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Ui::MainWindow*>>(_a[2]))); break;
        case 3: _t->updateOrderTable((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Ui::MainWindow*>>(_a[2]))); break;
        case 4: _t->updatePositionTable((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Ui::MainWindow*>>(_a[2]))); break;
        case 5: _t->updateTradeTable((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Ui::MainWindow*>>(_a[2]))); break;
        case 6: _t->updateCloseTable((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Ui::MainWindow*>>(_a[2]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_pushButton_3_clicked(); break;
        case 10: _t->on_dateEdit_userDateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 11: _t->on_calendarWidget_clicked((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 12: _t->on_calendarWidget_2_clicked((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 13: _t->on_pushButton_4_clicked(); break;
        case 14: _t->on_pushButton_23_clicked(); break;
        case 15: _t->onRadioButtonToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onRadioButtonClicked(); break;
        case 17: _t->on_pushButton_34_clicked(); break;
        case 18: _t->openSubWindow(); break;
        case 19: _t->on_pushButton_33_clicked(); break;
        case 20: _t->on_pushButton_38_clicked(); break;
        case 21: _t->on_pushButton_22_clicked(); break;
        case 22: _t->on_pushButton_6_clicked(); break;
        case 23: _t->on_pushButton_7_clicked(); break;
        case 24: _t->on_pushButton_9_clicked(); break;
        case 25: _t->on_pushButton_8_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
