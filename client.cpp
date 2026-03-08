#include <QCoreApplication>
#include <QTcpSocket>
#include <QDebug>
#include <QTextStream>

class TcpClient : public QObject {
    Q_OBJECT

public:
    TcpClient(QObject *parent = nullptr) : QObject(parent) {
        socket = new QTcpSocket(this);

        // 连接到服务端
        socket->connectToHost("127.0.0.1", 1234);

        // 检查连接状态
        if (socket->waitForConnected(3000)) {
            qDebug() << "已连接到服务器r!";
        } else {
            qDebug() << "无法连接到服务器";
            return;
        }

        // 接收服务端回复
        connect(socket, &QTcpSocket::readyRead, this, &TcpClient::onReadyRead);
    }

    void sendMessage(const QString &message) {
        if (socket->state() == QTcpSocket::ConnectedState) {
            socket->write(message.toUtf8());
        } else {
            qDebug() << "未连接到服务器！";
        }
    }

private slots:
    void onReadyRead() {
        QByteArray data = socket->readAll();
        qDebug() << "从服务器接收：" << data;
    }

private:
    QTcpSocket *socket;
};

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    TcpClient client;

    QTextStream qin(stdin);
    qDebug() << "输入要发送的消息（输入“exit”退出）";

    while (true) {
        QString message = qin.readLine();
        if (message == "exit") break;

        client.sendMessage(message);
    }

    return a.exec();
}

#include "client.moc"
