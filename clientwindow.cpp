#include "clientwindow.h"
#include <QVBoxLayout>
#include <QHostAddress>

ClientWindow::ClientWindow(QWidget *parent) : QMainWindow(parent) {
    // 创建 UI
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    lineEdit = new QLineEdit(this);
    sendButton = new QPushButton("Send", this);
    textEdit = new QTextEdit(this);

    layout->addWidget(lineEdit);
    layout->addWidget(sendButton);
    layout->addWidget(textEdit);
    setCentralWidget(centralWidget);

    // 初始化 TCP 客户端
    tcpSocket = new QTcpSocket(this);

    // 连接到本地服务端（127.0.0.1:1234）
    tcpSocket->connectToHost(QHostAddress::LocalHost, 1234);

    // 连接信号槽
    connect(tcpSocket, &QTcpSocket::connected, this, &ClientWindow::onConnected);
    connect(tcpSocket, &QTcpSocket::readyRead, this, &ClientWindow::onReadyRead);
    connect(sendButton, &QPushButton::clicked, this, &ClientWindow::onSendClicked);
}

ClientWindow::~ClientWindow() {
    tcpSocket->disconnectFromHost();
}

void ClientWindow::onConnected() {
    textEdit->append("Connected to server!");
}

void ClientWindow::onReadyRead() {
    QByteArray data = tcpSocket->readAll();

    // 使用 QMetaObject::invokeMethod 确保线程安全
    QMetaObject::invokeMethod(this, [this, data]() {
        textEdit->append("Received: " + QString(data));
    }, Qt::QueuedConnection);
}

void ClientWindow::onSendClicked() {
    QString message = lineEdit->text();
    if (!message.isEmpty()) {
        tcpSocket->write(message.toUtf8());
        lineEdit->clear();
    }
}
