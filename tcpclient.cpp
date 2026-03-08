#include "tcpclient.h"
#include <QJsonDocument>
#include <QJsonObject>

// #include <QDebug>
TcpClient::TcpClient(QObject *parent) : QObject(parent) {
    socket = new QTcpSocket(this);

    connect(socket, &QTcpSocket::readyRead, this, &TcpClient::onReadyRead);
    connect(socket, &QTcpSocket::connected, this, &TcpClient::onConnected);
    connect(socket, &QTcpSocket::disconnected, this, &TcpClient::onDisconnected);
    connect(socket, QOverload<QAbstractSocket::SocketError>::of(&QTcpSocket::errorOccurred),
            this, &TcpClient::onError);
}

bool TcpClient::waitForConnected(int msecs) {
    // 如果已经连接，直接返回 true
    if (socket->state() == QTcpSocket::ConnectedState) {
        return true;
    }

    // 尝试连接到本地主机 1234 端口（实际项目中应从配置读取）
    socket->connectToHost(QHostAddress::LocalHost, 1234);

    // 等待连接成功或超时
    return socket->waitForConnected(msecs);
}

QString stringToHex(const QString &str) {

    // 将QString转换为UTF-8编码的QByteArray
    QByteArray data = str.toUtf8();
    // 转换为十六进制字符串
    QByteArray hexData = data.toHex();
    // 可选：将QByteArray转换为QString
    return QString(hexData);

}




//和土豆服务器优雅连接
void TcpClient::connectToServer(const QString &host, quint16 port) {
    socket->connectToHost(host, port);
}


//和土豆服务器优雅断开连接
void TcpClient::disconnectFromServer() {
    socket->disconnectFromHost();
}


//假如土豆服务器没连上
void TcpClient::sendMessage(const QString &message) {
    if (socket->state() == QTcpSocket::ConnectedState) {
        socket->write(message.toUtf8());
    } else {
        qDebug() << "没有链接到服务器!";
    }
}


//当前土豆服务器连接状态
bool TcpClient::isConnected() const {
    return socket->state() == QTcpSocket::ConnectedState;
}


//假如土豆服务器给你发来消息
void TcpClient::onReadyRead() {
    QByteArray data = socket->readAll();
    // QJsonDocument jsonDoc = QJsonDocument::fromJson(data);  // 解析 JSON
    // QJsonObject jsonObj = jsonDoc.object();
    // QString cod = jsonObj["cod"].toString();


    QString message = QString::fromUtf8(data);
    emit dataReceived(message);//通知mainwindow服务器发来数据
    QString utf8Str = QString::fromUtf8(data);
    // qDebug() << "收到的消息:" << utf8Str;  // 直接输出接收到的消息
}


//假如土豆服务器连上了
void TcpClient::onConnected() {
    qDebug() << "连接成功";  // 直接输出连接成功信息
    QString message = "链接测试";
    QByteArray data = message.toUtf8();  // 转换为 UTF-8 编码的字节数组
    socket->write(data);  // 发送数据
    // 可选：检查是否发送成功
    // if (socket->waitForBytesWritten(1000)) {  // 等待 1 秒确保数据发送
    //     qDebug() << "消息发送成功：" << message;
    // } else {
    //     qDebug() << "消息发送失败：" << socket->errorString();
    // }

}


//假如土豆服务器连后土豆熟了
void TcpClient::onDisconnected() {
    qDebug() << "服务器断开!";  // 直接输出断开连接信息
}

//假如土豆服务器寄了
void TcpClient::onError(QAbstractSocket::SocketError socketError) {
    Q_UNUSED(socketError);
    qDebug() << "错误:" << socket->errorString();  // 直接输出错误信息
}


//这个是mainwindow的传话筒
//这个是修改电话窗口的传话筒
void TcpClient::sendData(const QString &data) {

    bool isOpened = socket->open(QIODevice::ReadWrite);

    qDebug() << "open() returned:" << isOpened; // 打印是否成功

    // socket->open(QIODevice::ReadWrite);


    if (!socket) {

        qDebug() << "Socket 未初始化！";

        return;

    }

    if (socket->state() != QAbstractSocket::ConnectedState) {

        QByteArray sendData = data.toUtf8();
        qDebug() << "未连接服务器，无法发送数据！当前状态：" << socket->state();
        // socket->connectToServer("127.0.0.1", 1234);
        socket->write(sendData);  // 实际发送数据
        qDebug() << "已发送数据：" << data;
        return;
    }
    QByteArray sendData = data.toUtf8();
    socket->write(sendData);  // 实际发送数据
    qDebug() << "已发送数据：" << data;
    // if (socket->state() == QAbstractSocket::ConnectedState) {
    //     QByteArray sendData = data.toUtf8();  // 将 QString 转换为 UTF-8 编码的字节数组
    //     socket->write(sendData);             // 发送数据
    // } else {
    //     qDebug() << "未连接服务器，无法发送数据！";

    // }

}
