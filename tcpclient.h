#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class TcpClient : public QObject {
    Q_OBJECT
public:
    explicit TcpClient(QObject *parent = nullptr);
    void sendMessage(const QString &message);
    bool isConnected() const;
    bool waitForConnected(int msecs = 3000);  // 声明方法
    void sendData(const QString &data);  // 新增：发送数据的方法

signals:
    void messageReceived(const QString &message);
    void connectionStatusChanged(bool connected);
    void dataReceived(const QString &data);

public slots:
    void connectToServer(const QString &host, quint16 port);
    void disconnectFromServer();

private slots:
    void onReadyRead();
    void onConnected();
    void onDisconnected();
    void onError(QAbstractSocket::SocketError socketError);

private:
    QTcpSocket *socket;

};

#endif // TCPCLIENT_H
