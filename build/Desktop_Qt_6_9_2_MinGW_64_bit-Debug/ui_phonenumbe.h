/********************************************************************************
** Form generated from reading UI file 'phonenumbe.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONENUMBE_H
#define UI_PHONENUMBE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_phoneNumbe
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *phoneNumbe)
    {
        if (phoneNumbe->objectName().isEmpty())
            phoneNumbe->setObjectName("phoneNumbe");
        phoneNumbe->resize(800, 600);
        centralwidget = new QWidget(phoneNumbe);
        centralwidget->setObjectName("centralwidget");
        phoneNumbe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(phoneNumbe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        phoneNumbe->setMenuBar(menubar);
        statusbar = new QStatusBar(phoneNumbe);
        statusbar->setObjectName("statusbar");
        phoneNumbe->setStatusBar(statusbar);

        retranslateUi(phoneNumbe);

        QMetaObject::connectSlotsByName(phoneNumbe);
    } // setupUi

    void retranslateUi(QMainWindow *phoneNumbe)
    {
        phoneNumbe->setWindowTitle(QCoreApplication::translate("phoneNumbe", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class phoneNumbe: public Ui_phoneNumbe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONENUMBE_H
