#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>

class ClientWindow : public QMainWindow {
    Q_OBJECT

public:
    ClientWindow(QWidget *parent = nullptr);
    ~ClientWindow();

private slots:
    void onConnected();              // 连接成功
    void onReadyRead();              // 接收服务端数据
    void onSendClicked();            // 发送数据

private:
    QTcpSocket *tcpSocket;
    QLineEdit *lineEdit;             // 输入框
    QPushButton *sendButton;         // 发送按钮
    QTextEdit *textEdit;             // 显示接收到的数据
};

#endif // CLIENTWINDOW_H
