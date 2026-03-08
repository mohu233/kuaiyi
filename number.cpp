#include "number.h"
#include "tcpclient.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>
#include <QRegularExpression>
#include <QMessageBox>
Number::Number(TcpClient* tcpClient,const QString& authKey,QWidget *parent)
    : QWidget(parent), m_tcpClient(tcpClient),m_authKey(authKey)
{
    // // 确保有标题栏和关闭按钮
    setWindowFlags(windowFlags() | Qt::Window);  // 或者使用默认标志
    setWindowTitle("Window");
    //
    // 创建控件
    QLabel *label = new QLabel("新手机号：", this);
    // QLineEdit *phoneEdit = new QLineEdit(this);
    phoneEdit = new QLineEdit(this);
    phoneEdit->setPlaceholderText("请输入");

    QPushButton *cancelButton = new QPushButton("取消", this);
    QPushButton *okButton = new QPushButton("确定", this);

    // 1. 创建输入行的水平布局
    QHBoxLayout *inputLayout = new QHBoxLayout;
    inputLayout->setSpacing(10);  // 设置控件间距
    inputLayout->addWidget(label);
    inputLayout->addWidget(phoneEdit);

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
    mainLayout->addLayout(inputLayout);        // 添加输入行布局
    mainLayout->addLayout(buttonLayout);       // 添加按钮行布局


    // if (!m_tcpClient->isConnected()) {

    //     qDebug() << "TCP 未连接，尝试重新连接...";



    // }

    // 连接按钮信号（可选）
    connect(cancelButton, &QPushButton::clicked, this, &Number::close);
    connect(okButton, &QPushButton::clicked, this, [this]() {
        qDebug() << "连接按钮信号"+m_authKey;
        QString phone = phoneEdit->text();
        QByteArray phone_bytes = phone.toUtf8();  // 转换为 UTF-8 编码的字节数组
        int byteLength = phone_bytes.size();  // 获取字节长度

        QRegularExpression regex("^1[2-9]\\d{9}$");  // 匹配 11 位手机号，且第二位不是 0 或 1
        QRegularExpressionMatch match = regex.match(phone);

        if (match.hasMatch()) {
            qDebug() << "有效的手机号码：" << phone;
            QString reply = "请求修改电话号码:"+m_authKey+":"+phone;
            m_tcpClient->sendData(reply);

        } else {
            qDebug() << "无效的手机号码！必须以 1 开头，且是 11 位有效数字（不能是 10 或 11 开头）";
            QMessageBox::information(this, "提示", "无效的手机号码");
        }


        // m_tcpClient->sendData("晓得了");


    });

    // 设置窗口大小
    resize(300, 150);





}


// void Number::on_okButton_clicked(){
//     qDebug() << "qqqq";
// }

Number::~Number()
{
}
