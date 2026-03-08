#ifndef NUMBER_H
#define NUMBER_H
#include "tcpclient.h"
#include <QWidget>
#include <QLineEdit>
class Number : public QWidget
{
    Q_OBJECT
public:
    Number(TcpClient* tcpClient, const QString& authKey,QWidget* parent = nullptr);
    ~Number();
signals:

private:
    // TcpClient *tcpClient;
    TcpClient* m_tcpClient;  // 成员变量声明

    QString m_authKey;

    QLineEdit *phoneEdit;
};

#endif // NUMBER_H
