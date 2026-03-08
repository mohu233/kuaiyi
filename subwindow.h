#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class SubWindow : public QDialog {
    Q_OBJECT  // 必须使用 Q_OBJECT 宏才能使用信号与槽

public:
    explicit SubWindow(QWidget *parent = nullptr);

signals:
    // 定义信号，用于向主窗口发送数据
    void dataSent(int number);

private slots:
    void onOkClicked();

private:
    QLineEdit *inputEdit;
};

#endif // SUBWINDOW_H
