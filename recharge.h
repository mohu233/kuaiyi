#ifndef RECHARGE_H
#define RECHARGE_H
#include "tcpclient.h"
#include <QWidget>
#include <QLineEdit>
class Recharge : public QWidget
{
    Q_OBJECT
public:
    // explicit Recharge(QWidget *parent = nullptr);
    Recharge(TcpClient* tcpClient,const QString& authKey,QWidget *parent = nullptr);
    ~Recharge();
signals:

private:
    // TcpClient *tcpClient;
    TcpClient* m_tcpClient;  // 成员变量声明
    QString m_authKey;
    QLineEdit *pwdEdit_1;
    QLineEdit *pwdEdit_2;
    QLineEdit *pwdEdit_3;


};

#endif // FUNDS_H
