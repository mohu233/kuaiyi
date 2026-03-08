/********************************************************************************
** Form generated from reading UI file 'phonenumber.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONENUMBER_H
#define UI_PHONENUMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneNumber
{
public:

    void setupUi(QWidget *PhoneNumber)
    {
        if (PhoneNumber->objectName().isEmpty())
            PhoneNumber->setObjectName("PhoneNumber");
        PhoneNumber->resize(400, 300);

        retranslateUi(PhoneNumber);

        QMetaObject::connectSlotsByName(PhoneNumber);
    } // setupUi

    void retranslateUi(QWidget *PhoneNumber)
    {
        PhoneNumber->setWindowTitle(QCoreApplication::translate("PhoneNumber", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhoneNumber: public Ui_PhoneNumber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONENUMBER_H
