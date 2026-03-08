#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tcpclient.h"
#include "subwindow.h"
// QT_BEGIN_NAMESPACE



namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class Number;  // 前向声明，避免直接包含头文件
class Funds;
class Recharge;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // mainwindow.h
    explicit MainWindow(TcpClient* tcpClient, const QString &authKey,QWidget *parent = nullptr);  // 移除 authKey 参数
    // explicit MainWindow(TcpClient *tcpClient, const QString &authKey, QWidget *parent = nullptr);
    // explicit MainWindow(TcpClient* tcpClient, QWidget *parent = nullptr);

    ~MainWindow();

    // MainWindow(QWidget *parent = nullptr);
    // ~MainWindow();
protected:

    void mousePressEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;
private slots:



    void onDataReceived(const QString &data); // 用于更新UI的槽函数


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    // void on_pushButton_5_clicked();

    // void on_pushButton_7_clicked();

    // void on_pushButton_6_clicked();

    // void on_pushButton_8_clicked();

    // void on_pushButton_9_clicked();

    // void on_pushButton_10_clicked();

    // void on_pushButton_12_clicked();

    // void on_pushButton_16_clicked();

    // void on_pushButton_14_clicked();

    // void on_pushButton_15_clicked();

    // void on_pushButton_11_clicked();

    // void on_pushButton_13_clicked();

    // void on_pushButton_17_clicked();

    // void on_pushButton_18_clicked();

    // void on_pushButton_21_clicked();

    // void on_pushButton_19_clicked();

    // void on_pushButton_20_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);

    // void on_pushButton_22_clicked();

    // void on_pushButton_25_clicked();

    // void on_pushButton_26_clicked();

    // void on_pushButton_27_clicked();

    // void on_pushButton_28_clicked();

    // void on_pushButton_29_clicked();

    // void on_pushButton_30_clicked();

    // void on_pushButton_31_clicked();

    // void on_calendarWidget_activated(const QDate &date);

    void on_calendarWidget_clicked(const QDate &date);

    void on_calendarWidget_2_clicked(const QDate &date);

    // void on_pushButton_34_clicked();

    // void on_pushButton_33_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_23_clicked();

    void onRadioButtonToggled(bool checked);
    void onRadioButtonClicked();

    // void on_tableWidget_6_cellActivated(int row, int column);

    void on_pushButton_34_clicked();

    // void on_pushButton_35_clicked();

    // void on_pushButton_36_clicked();

    // void on_pushButton_37_clicked();
    void openSubWindow(); // 函数声明
    void on_pushButton_33_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_22_clicked();

    // void on_calendarWidget_activated(const QDate &date);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

private:

    QPoint m_dragPos;  // 记录鼠标拖动位置

    QPushButton *m_closeButton;  // 关闭按钮
    QString m_authKey;
    TcpClient *tcpClient;
    // TcpClient *tcpClient;

    // Number *m_number = nullptr;
    TcpClient *m_tcpClient;

    Ui::MainWindow *ui;
    // TcpClient *tcpClient;
    Number *m_number;  // 子窗口指针
    Funds *m_funds;
    Recharge *m_recharge;



    QStringList imagePaths;  // 存储图片路径
    int currentIndex = 0;    // 当前图片索引

    QStringList imagePaths_2;
    int currentIndex_2 = 0;

    QStringList imagePaths_3;
    int currentIndex_3 = 0;

    QStringList imagePaths_4;
    int currentIndex_4 = 0;

    QStringList imagePaths_5;
    int currentIndex_5 = 0;

    QStringList imagePaths_6;
    int currentIndex_6 = 0;




    QStringList imagePaths_7;
    int currentIndex_7 = 0;

    QStringList imagePaths_8;
    int currentIndex_8 = 0;

    QStringList imagePaths_9;
    int currentIndex_9 = 0;

    QStringList imagePaths_10;
    int currentIndex_10 = 0;

    QStringList imagePaths_11;
    int currentIndex_11 = 0;

    QStringList imagePaths_12;
    int currentIndex_12 = 0;

    QStringList imagePaths_13;
    int currentIndex_13 = 0;




    QStringList imagePaths_14;
    int currentIndex_14 = 0;

    QStringList imagePaths_15;
    int currentIndex_15 = 0;

    QStringList imagePaths_16;
    int currentIndex_16 = 0;

    QStringList imagePaths_17;
    int currentIndex_17 = 0;




    QStringList imagePaths_18;
    int currentIndex_18 = 0;

    QStringList imagePaths_19;
    int currentIndex_19 = 0;

    QStringList imagePaths_20;
    int currentIndex_20 = 0;

    QStringList imagePaths_21;
    int currentIndex_21 = 0;

    QStringList imagePaths_22;
    int currentIndex_22 = 0;

    QStringList imagePaths_23;
    int currentIndex_23 = 0;

    QStringList imagePaths_24;
    int currentIndex_24 = 0;

    QStringList imagePaths_25;
    int currentIndex_25 = 0;

    QStringList imagePaths_26;
    int currentIndex_26 = 0;

    QStringList imagePaths_27;
    int currentIndex_27 = 0;



    bool win_time = false;//时间窗口状态
    QLabel *resultLabel;
    void handleDataFromSub(int number);


};

#endif // MAINWINDOW_H
