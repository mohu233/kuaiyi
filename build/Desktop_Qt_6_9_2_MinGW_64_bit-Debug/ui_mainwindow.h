/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget_2;
    QWidget *tab_9;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_33;
    QWidget *tab;
    QTableWidget *tableWidget_7;
    QPushButton *pushButton_38;
    QWidget *tab_10;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton_34;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QWidget *tab_14;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QTableWidget *tableWidget_4;
    QWidget *tab_15;
    QCalendarWidget *calendarWidget;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QCalendarWidget *calendarWidget_2;
    QPushButton *pushButton_22;
    QLabel *label_3;
    QLabel *label_6;
    QPushButton *pushButton_23;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_5;
    QTableWidget *tableWidget_5;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_37;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QLabel *label_27;
    QLabel *label_33;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QWidget *tab_13;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_32;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_20;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_21;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_23;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_25;
    QLabel *label_26;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_16;
    QTabWidget *tabWidget_3;
    QWidget *tab_11;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QLabel *label_5;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QPushButton *pushButton_4;
    QWidget *tab_12;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *tableWidget_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1249, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8("build/Desktop_Qt_6_9_2_MinGW_64_bit-Debug/debug/images/iocn.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(10, 70, 931, 521));
        QFont font;
        font.setPointSize(14);
        tabWidget_2->setFont(font);
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        tableWidget_2 = new QTableWidget(tab_9);
        if (tableWidget_2->columnCount() < 8)
            tableWidget_2->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(0, 10, 921, 451));
        QFont font1;
        font1.setPointSize(9);
        tableWidget_2->setFont(font1);
        tableWidget_2->setRowCount(1);
        pushButton_33 = new QPushButton(tab_9);
        pushButton_33->setObjectName("pushButton_33");
        pushButton_33->setGeometry(QRect(790, 10, 61, 31));
        tabWidget_2->addTab(tab_9, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tableWidget_7 = new QTableWidget(tab);
        if (tableWidget_7->columnCount() < 9)
            tableWidget_7->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(7, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(8, __qtablewidgetitem16);
        if (tableWidget_7->rowCount() < 1)
            tableWidget_7->setRowCount(1);
        tableWidget_7->setObjectName("tableWidget_7");
        tableWidget_7->setGeometry(QRect(0, 10, 921, 451));
        tableWidget_7->setFont(font1);
        tableWidget_7->setRowCount(1);
        pushButton_38 = new QPushButton(tab);
        pushButton_38->setObjectName("pushButton_38");
        pushButton_38->setGeometry(QRect(790, 10, 61, 31));
        tabWidget_2->addTab(tab, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        tableWidget_3 = new QTableWidget(tab_10);
        if (tableWidget_3->columnCount() < 9)
            tableWidget_3->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(7, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(8, __qtablewidgetitem25);
        if (tableWidget_3->rowCount() < 1)
            tableWidget_3->setRowCount(1);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setGeometry(QRect(0, 10, 921, 441));
        tableWidget_3->setFont(font1);
        tableWidget_3->setRowCount(1);
        pushButton_34 = new QPushButton(tab_10);
        pushButton_34->setObjectName("pushButton_34");
        pushButton_34->setGeometry(QRect(790, 10, 91, 31));
        horizontalLayoutWidget_4 = new QWidget(tab_10);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(30, 450, 701, 41));
        horizontalLayout_17 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(horizontalLayoutWidget_4);
        label_34->setObjectName("label_34");

        horizontalLayout_17->addWidget(label_34);

        label_35 = new QLabel(horizontalLayoutWidget_4);
        label_35->setObjectName("label_35");

        horizontalLayout_17->addWidget(label_35);

        label_36 = new QLabel(horizontalLayoutWidget_4);
        label_36->setObjectName("label_36");

        horizontalLayout_17->addWidget(label_36);

        label_37 = new QLabel(horizontalLayoutWidget_4);
        label_37->setObjectName("label_37");

        horizontalLayout_17->addWidget(label_37);

        label_39 = new QLabel(horizontalLayoutWidget_4);
        label_39->setObjectName("label_39");

        horizontalLayout_17->addWidget(label_39);

        label_40 = new QLabel(horizontalLayoutWidget_4);
        label_40->setObjectName("label_40");

        horizontalLayout_17->addWidget(label_40);

        label_41 = new QLabel(horizontalLayoutWidget_4);
        label_41->setObjectName("label_41");

        horizontalLayout_17->addWidget(label_41);

        tabWidget_2->addTab(tab_10, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName("tab_14");
        pushButton_18 = new QPushButton(tab_14);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(130, 30, 81, 21));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_18->setIcon(icon1);
        pushButton_18->setIconSize(QSize(80, 20));
        pushButton_19 = new QPushButton(tab_14);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(230, 30, 81, 21));
        pushButton_19->setIcon(icon1);
        pushButton_19->setIconSize(QSize(80, 20));
        pushButton_20 = new QPushButton(tab_14);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(330, 30, 81, 21));
        pushButton_20->setIcon(icon1);
        pushButton_20->setIconSize(QSize(80, 20));
        pushButton_21 = new QPushButton(tab_14);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(30, 30, 81, 21));
        pushButton_21->setIcon(icon1);
        pushButton_21->setIconSize(QSize(80, 20));
        tableWidget_4 = new QTableWidget(tab_14);
        if (tableWidget_4->columnCount() < 4)
            tableWidget_4->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem29);
        if (tableWidget_4->rowCount() < 1)
            tableWidget_4->setRowCount(1);
        tableWidget_4->setObjectName("tableWidget_4");
        tableWidget_4->setGeometry(QRect(0, 10, 841, 451));
        tableWidget_4->setFont(font1);
        tableWidget_4->setRowCount(1);
        tabWidget_2->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName("tab_15");
        calendarWidget = new QCalendarWidget(tab_15);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(30, 50, 271, 201));
        dateEdit = new QDateEdit(tab_15);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(110, 20, 171, 22));
        dateEdit_2 = new QDateEdit(tab_15);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(290, 20, 181, 22));
        calendarWidget_2 = new QCalendarWidget(tab_15);
        calendarWidget_2->setObjectName("calendarWidget_2");
        calendarWidget_2->setGeometry(QRect(300, 50, 271, 201));
        pushButton_22 = new QPushButton(tab_15);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(100, 10, 371, 41));
        label_3 = new QLabel(tab_15);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 91, 41));
        label_6 = new QLabel(tab_15);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(500, 10, 91, 41));
        pushButton_23 = new QPushButton(tab_15);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(730, 10, 71, 41));
        verticalLayoutWidget = new QWidget(tab_15);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(580, 10, 131, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_5 = new QComboBox(verticalLayoutWidget);
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContents);

        verticalLayout->addWidget(comboBox_5);

        tableWidget_5 = new QTableWidget(tab_15);
        if (tableWidget_5->columnCount() < 8)
            tableWidget_5->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(6, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(7, __qtablewidgetitem37);
        if (tableWidget_5->rowCount() < 1)
            tableWidget_5->setRowCount(1);
        tableWidget_5->setObjectName("tableWidget_5");
        tableWidget_5->setGeometry(QRect(0, 60, 921, 391));
        tableWidget_5->setFont(font1);
        tableWidget_5->setRowCount(1);
        pushButton_25 = new QPushButton(tab_15);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setGeometry(QRect(30, 60, 81, 21));
        pushButton_25->setIcon(icon1);
        pushButton_25->setIconSize(QSize(80, 20));
        pushButton_26 = new QPushButton(tab_15);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(130, 60, 81, 21));
        pushButton_26->setIcon(icon1);
        pushButton_26->setIconSize(QSize(80, 20));
        pushButton_27 = new QPushButton(tab_15);
        pushButton_27->setObjectName("pushButton_27");
        pushButton_27->setGeometry(QRect(230, 60, 81, 21));
        pushButton_27->setIcon(icon1);
        pushButton_27->setIconSize(QSize(80, 20));
        pushButton_28 = new QPushButton(tab_15);
        pushButton_28->setObjectName("pushButton_28");
        pushButton_28->setGeometry(QRect(330, 60, 81, 21));
        pushButton_28->setIcon(icon1);
        pushButton_28->setIconSize(QSize(80, 20));
        pushButton_29 = new QPushButton(tab_15);
        pushButton_29->setObjectName("pushButton_29");
        pushButton_29->setGeometry(QRect(530, 60, 81, 21));
        pushButton_29->setIcon(icon1);
        pushButton_29->setIconSize(QSize(80, 20));
        pushButton_30 = new QPushButton(tab_15);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(630, 60, 81, 21));
        pushButton_30->setIcon(icon1);
        pushButton_30->setIconSize(QSize(80, 20));
        pushButton_37 = new QPushButton(tab_15);
        pushButton_37->setObjectName("pushButton_37");
        pushButton_37->setGeometry(QRect(430, 60, 81, 21));
        pushButton_37->setIcon(icon1);
        pushButton_37->setIconSize(QSize(80, 20));
        horizontalLayoutWidget_3 = new QWidget(tab_15);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(30, 450, 801, 41));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(horizontalLayoutWidget_3);
        label_13->setObjectName("label_13");

        horizontalLayout_16->addWidget(label_13);

        label_27 = new QLabel(horizontalLayoutWidget_3);
        label_27->setObjectName("label_27");

        horizontalLayout_16->addWidget(label_27);

        label_33 = new QLabel(horizontalLayoutWidget_3);
        label_33->setObjectName("label_33");

        horizontalLayout_16->addWidget(label_33);

        label_28 = new QLabel(horizontalLayoutWidget_3);
        label_28->setObjectName("label_28");

        horizontalLayout_16->addWidget(label_28);

        label_29 = new QLabel(horizontalLayoutWidget_3);
        label_29->setObjectName("label_29");

        horizontalLayout_16->addWidget(label_29);

        label_30 = new QLabel(horizontalLayoutWidget_3);
        label_30->setObjectName("label_30");

        horizontalLayout_16->addWidget(label_30);

        label_31 = new QLabel(horizontalLayoutWidget_3);
        label_31->setObjectName("label_31");

        horizontalLayout_16->addWidget(label_31);

        label_32 = new QLabel(horizontalLayoutWidget_3);
        label_32->setObjectName("label_32");

        horizontalLayout_16->addWidget(label_32);

        tabWidget_2->addTab(tab_15, QString());
        dateEdit->raise();
        dateEdit_2->raise();
        pushButton_22->raise();
        label_3->raise();
        label_6->raise();
        pushButton_23->raise();
        verticalLayoutWidget->raise();
        pushButton_25->raise();
        pushButton_26->raise();
        pushButton_27->raise();
        pushButton_28->raise();
        pushButton_29->raise();
        pushButton_30->raise();
        pushButton_37->raise();
        tableWidget_5->raise();
        calendarWidget->raise();
        calendarWidget_2->raise();
        horizontalLayoutWidget_3->raise();
        tab_13 = new QWidget();
        tab_13->setObjectName("tab_13");
        gridLayoutWidget_2 = new QWidget(tab_13);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(20, 30, 371, 221));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName("label_10");

        horizontalLayout_3->addWidget(label_10);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName("label_15");

        horizontalLayout_3->addWidget(label_15);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_15->addWidget(pushButton_3);


        horizontalLayout_3->addLayout(horizontalLayout_15);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName("label_12");

        horizontalLayout_2->addWidget(label_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        pushButton_2 = new QPushButton(gridLayoutWidget_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_14->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(horizontalLayout_14);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");

        horizontalLayout->addWidget(label_8);

        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName("label_14");

        horizontalLayout->addWidget(label_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        pushButton = new QPushButton(gridLayoutWidget_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout_13->addWidget(pushButton);


        horizontalLayout->addLayout(horizontalLayout_13);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_11->addWidget(label_7);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName("label_11");

        horizontalLayout_11->addWidget(label_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        pushButton_32 = new QPushButton(gridLayoutWidget_2);
        pushButton_32->setObjectName("pushButton_32");

        horizontalLayout_12->addWidget(pushButton_32);


        horizontalLayout_11->addLayout(horizontalLayout_12);


        gridLayout_2->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_13, QString());
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 600, 981, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_17 = new QLabel(horizontalLayoutWidget);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_6->addWidget(label_17);

        label_18 = new QLabel(horizontalLayoutWidget);
        label_18->setObjectName("label_18");

        horizontalLayout_6->addWidget(label_18);


        horizontalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_20 = new QLabel(horizontalLayoutWidget);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->addWidget(label_20);

        label_19 = new QLabel(horizontalLayoutWidget);
        label_19->setObjectName("label_19");

        horizontalLayout_7->addWidget(label_19);


        horizontalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_21 = new QLabel(horizontalLayoutWidget);
        label_21->setObjectName("label_21");
        label_21->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(label_21);

        label_22 = new QLabel(horizontalLayoutWidget);
        label_22->setObjectName("label_22");

        horizontalLayout_5->addWidget(label_22);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_23 = new QLabel(horizontalLayoutWidget);
        label_23->setObjectName("label_23");
        label_23->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_8->addWidget(label_23);

        label_24 = new QLabel(horizontalLayoutWidget);
        label_24->setObjectName("label_24");

        horizontalLayout_8->addWidget(label_24);


        horizontalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_25 = new QLabel(horizontalLayoutWidget);
        label_25->setObjectName("label_25");
        label_25->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_9->addWidget(label_25);

        label_26 = new QLabel(horizontalLayoutWidget);
        label_26->setObjectName("label_26");

        horizontalLayout_9->addWidget(label_26);


        horizontalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, -10, 1231, 80));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(horizontalLayoutWidget_2);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_16);

        tabWidget_3 = new QTabWidget(centralwidget);
        tabWidget_3->setObjectName("tabWidget_3");
        tabWidget_3->setGeometry(QRect(950, 100, 281, 491));
        tabWidget_3->setFont(font);
        tab_11 = new QWidget();
        tab_11->setObjectName("tab_11");
        gridLayoutWidget = new QWidget(tab_11);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 261, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName("comboBox");
        comboBox->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContents);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName("comboBox_2");

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(1000000);

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);

        spinBox_2 = new QSpinBox(gridLayoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(100000);

        gridLayout->addWidget(spinBox_2, 3, 1, 1, 1);

        pushButton_4 = new QPushButton(tab_11);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(80, 370, 131, 41));
        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName("tab_12");
        scrollArea = new QScrollArea(tab_12);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 30, 271, 411));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 409));
        tableWidget_6 = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidget_6->columnCount() < 3)
            tableWidget_6->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(2, __qtablewidgetitem40);
        if (tableWidget_6->rowCount() < 1)
            tableWidget_6->setRowCount(1);
        tableWidget_6->setObjectName("tableWidget_6");
        tableWidget_6->setGeometry(QRect(10, 20, 251, 391));
        tableWidget_6->setFont(font1);
        tableWidget_6->setRowCount(1);
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget_3->addTab(tab_12, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1249, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(4);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\345\223\201\347\247\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\247\224\346\211\230\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\345\220\210\347\272\246\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\345\247\224\346\211\230\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\345\247\224\346\211\230\346\227\266\351\227\264", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "\346\222\244\345\215\225", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("MainWindow", "\345\247\224\346\211\230\350\256\242\345\215\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_7->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\345\223\201\347\247\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_7->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_7->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_7->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\345\247\224\346\211\230\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_7->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\345\271\263\344\273\223\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_7->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\345\220\210\347\272\246\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_7->horizontalHeaderItem(7);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\345\247\224\346\211\230\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_7->horizontalHeaderItem(8);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\345\247\224\346\211\230\346\227\266\351\227\264", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "\346\222\244\345\215\225", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("MainWindow", "\345\247\224\346\211\230\345\271\263\344\273\223", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\345\223\201\347\247\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "\346\210\220\344\272\244\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "\345\220\210\347\272\246\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "\346\210\220\344\272\244\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_3->horizontalHeaderItem(7);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\347\233\210\344\272\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_3->horizontalHeaderItem(8);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "\346\210\220\344\272\244\346\227\266\351\227\264", nullptr));
        pushButton_34->setText(QCoreApplication::translate("MainWindow", "\345\271\263\344\273\223\350\275\254\350\256\251", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\346\261\207\346\200\273", nullptr));
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_39->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_41->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QCoreApplication::translate("MainWindow", "\346\214\201\344\273\223\346\230\216\347\273\206", nullptr));
        pushButton_18->setText(QString());
        pushButton_19->setText(QString());
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\345\223\201\347\247\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "\346\261\207\346\200\273\345\235\207\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "\346\261\207\346\200\273\346\225\260\351\207\217", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QCoreApplication::translate("MainWindow", "\345\235\207\344\273\267\346\261\207\346\200\273", nullptr));
        pushButton_22->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\265\267\346\255\242\346\227\245\346\234\237\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\345\223\201\347\247\215\357\274\232", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\345\223\201\347\247\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\230\223\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "\346\210\220\344\272\244\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "\345\220\210\347\272\246\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_5->horizontalHeaderItem(5);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "\346\210\220\344\272\244\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_5->horizontalHeaderItem(6);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "\347\233\210\344\272\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_5->horizontalHeaderItem(7);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "\346\210\220\344\272\244\346\227\266\351\227\264", nullptr));
        pushButton_25->setText(QString());
        pushButton_26->setText(QString());
        pushButton_27->setText(QString());
        pushButton_28->setText(QString());
        pushButton_29->setText(QString());
        pushButton_30->setText(QString());
        pushButton_37->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "\346\261\207\346\200\273", nullptr));
        label_27->setText(QString());
        label_33->setText(QString());
        label_28->setText(QString());
        label_29->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_32->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_15), QCoreApplication::translate("MainWindow", "\346\210\220\344\272\244\350\256\242\345\215\225", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267\345\257\206\347\240\201", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\350\265\204\351\207\221", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\205\205\345\200\274", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\347\273\221\345\256\232\346\211\213\346\234\272", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\273\221\345\256\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267id", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "HHH", nullptr));
        pushButton_32->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_13), QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\227\245\346\234\237\357\274\232</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">2025</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\264\246\346\210\267\347\261\273\345\236\213\357\274\232</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\273\203\344\271\240\350\264\246\346\210\267</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\264\246\346\210\267\346\211\213\347\273\255\350\264\271\357\274\232</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">1900</span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\264\246\346\210\267\350\275\254\350\256\251\347\233\210\344\272\217\357\274\232</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">+200</span></p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\250\241\346\213\237\350\265\204\351\207\221\357\274\232</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">5000</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">\345\277\253\346\215\267\346\250\241\346\213\237\344\272\244\346\230\223\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\250\241\346\213\237\344\272\244\346\230\223\345\223\201\347\247\215\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\250\241\346\213\237\344\272\244\346\230\223\347\261\273\345\236\213\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\250\241\346\213\237\345\274\200\344\273\223\344\273\267\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\250\241\346\213\237\345\274\200\344\273\223\346\225\260\351\207\217\357\274\232</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\344\272\244\346\230\223", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\223\215\344\275\234\345\214\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_6->horizontalHeaderItem(0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "\345\223\201\347\247\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_6->horizontalHeaderItem(1);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_6->horizontalHeaderItem(2);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "\345\220\210\347\272\246\344\273\267", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QCoreApplication::translate("MainWindow", "\346\233\264\345\244\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
