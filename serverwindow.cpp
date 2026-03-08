#include "serverwindow.h"
#include <QVBoxLayout>
#include <QHostAddress>

ServerWindow::ServerWindow(QWidget *parent) : QMainWindow(parent) {
    // 创建 UI
    textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);

    // 初始化 TCP 服务器
    tcpServer = new QTcpServer(this);

    // 监听所有 IPv4 地址的 1234 端口
    if (!tcpServer->listen(QHostAddress::AnyIPv4, 1234)) {
        textEdit->append("Server failed to start!");
        return;
    }

    textEdit->append("Server listening on port 1234...");

    // 连接信号槽
    connect(tcpServer, &QTcpServer::newConnection, this, &ServerWindow::onNewConnection);
}

ServerWindow::~ServerWindow() {
    if (tcpSocket) {
        tcpSocket->disconnectFromHost();
        tcpSocket->deleteLater();
    }
}

void ServerWindow::onNewConnection() {
    tcpSocket = tcpServer->nextPendingConnection();

    textEdit->append("New client connected.");

    // 连接数据接收和断开信号
    connect(tcpSocket, &QTcpSocket::readyRead, this, &ServerWindow::onReadyRead);
    connect(tcpSocket, &QTcpSocket::disconnected, this, &ServerWindow::onDisconnected);
}

void ServerWindow::onReadyRead() {
    QByteArray data = tcpSocket->readAll();

    // 使用 QMetaObject::invokeMethod 确保线程安全（如果通信在非 GUI 线程）
    QMetaObject::invokeMethod(this, [this, data]() {
        textEdit->append("Received: " + QString(data));
    }, Qt::QueuedConnection);
}

void ServerWindow::onDisconnected() {
    QMetaObject::invokeMethod(this, [this]() {
        textEdit->append("Client disconnected.");
    }, Qt::QueuedConnection);

    tcpSocket->deleteLater();
    tcpSocket = nullptr;
}
