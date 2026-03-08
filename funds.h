#ifndef FUNDS_H
#define FUNDS_H
#include "tcpclient.h"
#include <QWidget>

class Funds : public QWidget
{
    Q_OBJECT
public:
    explicit Funds(TcpClient* tcpClient,QWidget *parent = nullptr);
    ~Funds();
signals:

private:
    // TcpClient *tcpClient;
    TcpClient* tcpClient;  // 成员变量声明
};

#endif // FUNDS_H
