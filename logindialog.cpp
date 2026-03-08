#include "logindialog.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QJsonDocument>
#include <QByteArray>
#include <QJsonObject>
#include <QPainter>
#include <QTimer>
#include <QRandomGenerator>
#include <QMouseEvent>
class ParticleWidget : public QWidget {
public:
    ParticleWidget(QWidget *parent = nullptr) : QWidget(parent) {
        QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &ParticleWidget::updateParticles);
        timer->start(50); // 每50毫秒更新一次粒子位置
    }

protected:
    void paintEvent(QPaintEvent *event) override {
        Q_UNUSED(event);
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
    }

private slots:
    void updateParticles() {
        update(); // 触发重绘
    }
};

LoginDialog::LoginDialog(TcpClient* tcpClient, QWidget *parent)
    : QDialog(parent), m_tcpClient(tcpClient)
{


    setWindowFlags(Qt::FramelessWindowHint);
    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    mainLayout->setContentsMargins(0, 0, 0, 0);

    mainLayout->setSpacing(0);
    // ========== 左侧图片区域 ==========

    QWidget *leftWidget = new QWidget(this);

    QVBoxLayout *leftLayout = new QVBoxLayout(leftWidget);
    leftWidget->setStyleSheet("background: rgba(42, 58, 90,1);");

    leftLayout->setAlignment(Qt::AlignCenter); // 图片垂直居中
    QLabel *imageLabel = new QLabel(leftWidget);
    QPixmap pixmap(":/images/images/logo.png"); // 从资源文件加载图片

    if (!pixmap.isNull()) {

        imageLabel->setPixmap(pixmap.scaled(280, 280, Qt::KeepAspectRatio, Qt::SmoothTransformation));

    } else {
        imageLabel->setText("图片未找到");
        imageLabel->setAlignment(Qt::AlignCenter);
    }
    leftLayout->addWidget(imageLabel);
    // ========== 右侧表单区域 ==========

    QWidget *rightWidget = new QWidget(this);

    QVBoxLayout *rightLayout = new QVBoxLayout(rightWidget);
    // rightWidget->setStyleSheet("background: rgba(33, 84, 125,1);");
    rightWidget->setStyleSheet("background: rgba(42, 58, 90,1);");


    rightLayout->setAlignment(Qt::AlignCenter); // 控件垂直居中
    rightLayout->setSpacing(30);  // 增大整体间距
    rightLayout->setContentsMargins(0, 58, 0, 0);  // 左上右下，这里设置顶部边距为 50px



    QLabel *titleLabel = new QLabel("欢迎使用", this);

    titleLabel->setAlignment(Qt::AlignCenter);

    titleLabel->setStyleSheet("color: white; font-size: 24px;");
    usernameEdit = new QLineEdit(this);
    passwordEdit = new QLineEdit(this);
    passwordEdit->setEchoMode(QLineEdit::Password);
    loginButton = new QPushButton("登录", this);
    loginButton->setFixedWidth(200);   // 设置固定宽度
    statusLabel = new QLabel(this);

    usernameEdit->setPlaceholderText("用户名");
    usernameEdit->setFixedWidth(200);  // 设置固定宽度

    passwordEdit->setPlaceholderText("密码");
    passwordEdit->setFixedWidth(200);  // 设置固定宽度

    statusLabel->setAlignment(Qt::AlignCenter);
    rightLayout->addWidget(titleLabel);

    rightLayout->addWidget(usernameEdit);
    rightLayout->addWidget(passwordEdit);

    rightLayout->addWidget(loginButton);
    rightLayout->addWidget(statusLabel);
    // ========== 将左右部分添加到主布局 ==========
    mainLayout->addWidget(leftWidget, 1); // 左侧占1份、
    mainLayout->addWidget(rightWidget, 1); // 右侧占1份

    // ========== 窗口设置 ==========

    setWindowTitle("登录");

    resize(800, 500); // 初始窗口大小
    // ========== 信号槽连接 ==========

    connect(loginButton, &QPushButton::clicked, this, &LoginDialog::onLoginClicked);

    connect(m_tcpClient, &TcpClient::dataReceived, this, &LoginDialog::onServerResponse);




    QPushButton *closeButton = new QPushButton("×",this);
    closeButton->setFixedSize(30, 30); // 设置按钮大小
    closeButton->setObjectName("pushButton_6");  // 唯一标识
    closeButton->setStyleSheet(
        "QPushButton#pushButton_6 {"
        "   width: 20px;"  // 宽度 50px（部分Qt版本可能需要用固定尺寸或字体控制）
        "   height: 50px;" // 高度 50px
        "   background: rgba(0, 120, 215, 200);"  // 蓝色背景（带透明度）
        // "   border: 2px solid rgba(100, 180, 255, 150);"  // 浅蓝色边框
        "   border-radius: 25px;"  // 圆角（50x50 的按钮，半径 25px 变成圆形）
        "   color: white;"  // 文字颜色（如果加文字）
        "   font: bold 14px;"  // 字体加粗，14px
        "   margin: 5px;"
        "}"
        "QPushButton:hover {"
        "   background: rgba(0, 100, 200, 255);"  // 悬停时更深蓝色
        "   border: 2px solid rgba(80, 160, 255, 255);"  // 悬停时边框更深
        "}"
        // 如果要加文字，可以这样（但通常关闭按钮用图标，这里可选）
        // "   content: '关闭';"  // 这种方式在某些Qt版本可能不适用，推荐用QLabel或直接设置文字
        );
    // 设置关闭按钮的位置（右上角）
    closeButton->move(this->width() - closeButton->width() - 10, 10);
    // 连接关闭按钮的点击信号
    connect(closeButton, &QPushButton::clicked, this, &LoginDialog::reject);

    QPushButton *closeButton1 = new QPushButton("-",this);
    closeButton1->setFixedSize(30, 30); // 设置按钮大小
    closeButton1->setObjectName("pushButton_6");  // 唯一标识
    closeButton1->setStyleSheet(
        "QPushButton#pushButton_6 {"
        "   width: 20px;"  // 宽度 50px（部分Qt版本可能需要用固定尺寸或字体控制）
        "   height: 50px;" // 高度 50px
        "   background: rgba(0, 120, 215, 200);"  // 蓝色背景（带透明度）
        // "   border: 2px solid rgba(100, 180, 255, 150);"  // 浅蓝色边框
        "   border-radius: 25px;"  // 圆角（50x50 的按钮，半径 25px 变成圆形）
        "   color: white;"  // 文字颜色（如果加文字）
        "   font: bold 14px;"  // 字体加粗，14px
        "   margin: 5px;"
        "}"
        "QPushButton:hover {"
        "   background: rgba(0, 100, 200, 255);"  // 悬停时更深蓝色
        "   border: 2px solid rgba(80, 160, 255, 255);"  // 悬停时边框更深
        "}"
        // 如果要加文字，可以这样（但通常关闭按钮用图标，这里可选）
        // "   content: '关闭';"  // 这种方式在某些Qt版本可能不适用，推荐用QLabel或直接设置文字
        );
    // 设置关闭按钮的位置（右上角）
    closeButton1->move(this->width() - closeButton->width() - 50, 10);
    // 连接关闭按钮的点击信号
    connect(closeButton1, &QPushButton::clicked, this, &LoginDialog::showMinimized);




}

void LoginDialog::resizeEvent(QResizeEvent *event)

{

    Q_UNUSED(event);

    // 调整关闭按钮位置（窗口右上角）

    // if (closeButton) { // 假设 closeButton 是成员变量（见下方修改）

    //     closeButton->move(this->width() - closeButton->width() - 10, 10);

    // }

}
// void LoginDialog::resizeEvent(QResizeEvent *event) {

//     Q_UNUSED(event);

//     // 如果需要，可以在这里调整粒子效果或其他逻辑

//     // 通常不需要，因为布局管理器会自动处理

// }

void LoginDialog::onLoginClicked()
{
    QString username = usernameEdit->text();
    QString password = passwordEdit->text();
    QCryptographicHash hash(QCryptographicHash::Sha256);

    // 将QString转换为QByteArray，并添加到哈希计算中
    hash.addData(password.toUtf8());

    // 获取哈希结果，并转换为十六进制字符串
    QByteArray hashedPassword = hash.result().toHex();

    // 检查 TCP 是否已连接
    if (!m_tcpClient->isConnected()) {
        QMessageBox::warning(this, "错误", "未连接到服务器！");
        return;
    }
    statusLabel->setText("登录中...");
    QString loginRequest = "LOGIN:" + username + ":" + hashedPassword;
    m_tcpClient->sendData(loginRequest);
}
void LoginDialog::onServerResponse(const QString &response) {
    loginButton->setEnabled(true);
    // qDebug() << "即将调用 accept()";
    QByteArray jsonData = response.toUtf8();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    QString cod;
    cod = jsonDoc["cod"].toString();
    if (cod == "SUCCESS") {
        m_key = jsonDoc["key"].toString();
        // qDebug() << "即将调用 accept()";
            done(QDialog::Accepted); // 确保在主线程执行
            // done(QDialog::Accepted); // 确保在主线程执行
            // deleteLater();  // 确保窗口被销毁（如果父对象未管理）

            qDebug() << "done(Accepted) 已调用";
        // done(QDialog::Accepted); // 强制关闭，效果类似 accept(
        qDebug() << "accept() 已调用";

    } else if (cod == "failure") {

        statusLabel->setText("用户名或密码错误！");

        QMessageBox::warning(this, "错误", "登录失败！");

    }

}

void LoginDialog::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_dragging = true;
        m_dragStartPos = this->pos();  // 窗口当前位置
        m_mouseStartPos = event->globalPos();  // 鼠标全局坐标
    }
    QDialog::mousePressEvent(event);  // 可选：保留默认行为
}

void LoginDialog::mouseMoveEvent(QMouseEvent *event) {
    if (m_dragging) {
        QPoint delta = event->globalPos() - m_mouseStartPos;  // 鼠标移动距离
        this->move(m_dragStartPos + delta);  // 更新窗口位置
    }
    QDialog::mouseMoveEvent(event);  // 可选：保留默认行为
}

void LoginDialog::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_dragging = false;
    }
    QDialog::mouseReleaseEvent(event);  // 可选：保留默认行为
}
