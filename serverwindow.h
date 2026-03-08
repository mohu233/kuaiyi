#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTextEdit>

class ServerWindow : public QMainWindow {
    Q_OBJECT

public:
    ServerWindow(QWidget *parent = nullptr);
    ~ServerWindow();

private slots:
    void onNewConnection();          // 新客户端连接
    void onReadyRead();              // 接收数据
    void onDisconnected();           // 客户端断开

private:
    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;
    QTextEdit *textEdit;             // 显示接收到的数据
};

#endif // SERVERWINDOW_H
