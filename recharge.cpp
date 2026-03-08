#include "recharge.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QFont>
#include <QCryptographicHash>
#include <QDebug>
#include <QMessageBox>
Recharge::Recharge(TcpClient* tcpClient,const QString& authKey,QWidget *parent)
    : QWidget(parent), m_tcpClient(tcpClient),m_authKey(authKey)
{
    // 确保有标题栏和关闭按钮
    setWindowFlags(windowFlags() | Qt::Window);  // 或者使用默认标志
    setWindowTitle("修改密码");
    qDebug() << "开始构造";

    QFont font;
    font.setPointSize(12);
    // 创建控件
    // 创建控件
    QLabel *label_1 = new QLabel(" 旧密码：", this);
    label_1->setFont(font);
    // QLineEdit *pwdEdit_1 = new QLineEdit(this);
    pwdEdit_1 = new QLineEdit(this);  // 初始化为成员变量
    pwdEdit_1->setPlaceholderText("请输入");
    pwdEdit_1->setFont(font);
    pwdEdit_1->setFixedHeight(40);
    qDebug() << "开始构造1";
    QLabel *label_2 = new QLabel(" 新密码：", this);
    label_2 ->setFont(font);
    // QLineEdit *pwdEdit_2 = new QLineEdit(this);
    pwdEdit_2 = new QLineEdit(this);  // 初始化为成员变量
    pwdEdit_2->setPlaceholderText("6-12位数字加字母");
    pwdEdit_2->setFont(font);
    pwdEdit_2->setFixedHeight(40);
    qDebug() << "开始构造2.4";

    QLabel *label_3 = new QLabel("确认密码：", this);
    label_3 -> setFont(font);
    qDebug() << "开始构造2.42";
    // QLineEdit *pwdEdit_3 = new QLineEdit(this);
    pwdEdit_3 = new QLineEdit(this);  // 初始化为成员变量
    pwdEdit_3->setPlaceholderText("请输入");
    qDebug() << "开始构造2.44";
    pwdEdit_3->setFont(font);
    pwdEdit_3->setFixedHeight(40);
    qDebug() << "开始构造2.45";

    QPushButton *cancelButton = new QPushButton("取消", this);
    cancelButton->setFixedHeight(35);
    QPushButton *okButton = new QPushButton("确定", this);
    okButton->setFixedHeight(35);
    qDebug() << "开始构造2.5";

    // 1. 创建输入行的水平布局
    QHBoxLayout *inputLayout_1 = new QHBoxLayout;
    inputLayout_1->setSpacing(10);  // 设置控件间距
    inputLayout_1->addWidget(label_1);
    inputLayout_1->addWidget(pwdEdit_1);

    QHBoxLayout *inputLayout_2 = new QHBoxLayout;
    inputLayout_2->setSpacing(10);  // 设置控件间距
    inputLayout_2->addWidget(label_2);
    inputLayout_2->addWidget(pwdEdit_2);

    QHBoxLayout *inputLayout_3 = new QHBoxLayout;
    inputLayout_3->setSpacing(10);  // 设置控件间距
    inputLayout_3->addWidget(label_3);
    inputLayout_3->addWidget(pwdEdit_3);

    // 2. 创建按钮行的水平布局
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->setSpacing(10);  // 设置控件间距
    // buttonLayout->addStretch();    // 添加弹性空间，使按钮靠右
    buttonLayout->addWidget(cancelButton);
    buttonLayout->addWidget(okButton);

    // 3. 创建主垂直布局
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setSpacing(15);                // 设置布局间距
    mainLayout->setContentsMargins(20, 20, 20, 20);  // 设置边距(左,上,右,下)
    mainLayout->addLayout(inputLayout_1);        // 添加输入行布局
    mainLayout->addLayout(inputLayout_2);
    mainLayout->addLayout(inputLayout_3);
    mainLayout->addLayout(buttonLayout);       // 添加按钮行布局
    qDebug() << "开始构造2";
    connect(okButton, &QPushButton::clicked, this, [this]() {
        qDebug() << "kkk";
        // m_tcpClient->sendData("晓得了");
        QString oldpwd = pwdEdit_1->text();
        QString newpwd = pwdEdit_2->text();
        QString newpwd_ok = pwdEdit_3->text();

        //检测密码状态
        QByteArray newpwd_ok_bytes = newpwd_ok.toUtf8();  // 转换为 UTF-8 编码的字节数组
        int byteLength = newpwd_ok_bytes.size();  // 获取字节长度


        QByteArray newpwd_bytes = newpwd.toUtf8();  // 转换为 UTF-8 编码的字节数组
        int byteLength1 = newpwd_bytes.size();  // 获取字节长度

        if ((byteLength1 < 6) or (byteLength < 6)){
            QMessageBox::information(this, "提示", "新密码太短，最少6个字符");
        }else{
            qDebug() << "密码明文:"+m_authKey+":"+oldpwd+":"+newpwd+":"+newpwd_ok;
            QCryptographicHash hashold(QCryptographicHash::Sha256);
            hashold.addData(oldpwd.toUtf8());
            QByteArray hash_oldpwd = hashold.result().toHex();
            QCryptographicHash hashnew(QCryptographicHash::Sha256);
            hashnew.addData(newpwd.toUtf8());
            QByteArray hash_newpwd = hashnew.result().toHex();
            QCryptographicHash hashnewok(QCryptographicHash::Sha256);
            hashnewok.addData(newpwd_ok.toUtf8());
            QByteArray hash_newpwd_ok = hashnewok.result().toHex();

            qDebug() << "密码密文:"+hash_oldpwd +":"+ hash_newpwd+":" +hash_newpwd_ok;

            QString reply = "请求修改密码:"+m_authKey+":"+hash_oldpwd+":"+hash_newpwd+":"+hash_newpwd_ok;
            m_tcpClient->sendData(reply);
        }

    });
    connect(cancelButton, &QPushButton::clicked, this, &Recharge::close);
    // connect(cancelButton, &QPushButton::clicked, this, [this]() {
    //     qDebug() << "kkk";
    //     // m_tcpClient->sendData("晓得了");



    //     // QString reply = "接收修改密码";
    //     // m_tcpClient->sendData(reply);

    // });



    resize(400, 400);
}
Recharge::~Recharge()
{
}
