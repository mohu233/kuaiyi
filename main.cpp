#include <QApplication>
#include <QFile>
#include <QTextStream>
#include "tcpclient.h"
#include "logindialog.h"
#include "mainwindow.h"
#include "QResource"
// #include <iostream>
#include <QFile>

QString loadStyleSheet(const QString &filePath) {
    QFile file(filePath);
    if (file.open(QFile::ReadOnly | QFile::Text)) {
        QTextStream stream(&file);
        return stream.readAll();
    }
    qWarning("无法加载样式表文件: %s", qPrintable(filePath));
    return "";
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // 加载全局 QSS
    QString styleSheet = loadStyleSheet(":/style.qss");
    if (!styleSheet.isEmpty()) {
        a.setStyleSheet(styleSheet);
    }
    qDebug() << "加载的 QSS:\n" << styleSheet;
 // 如果用二进制资源
    // 或直接检查文件是否存在
    qDebug() << "QSS 文件是否存在:" << QResource("style.qss").isValid();



    QFile file(":/ip.txt"); // 尝试打开文件

    // // 方法1：检查文件是否成功打开
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {

        qDebug() << "文件打开失败！";
        return 1; // 退出程序或处理错误
    }
    QTextStream in(&file);

    QString content = in.readAll().trimmed(); // 读取并去除首尾空白

    file.close();



    // 检查内容是否包含 ':'

    int colonPos = content.indexOf(':');
    if (colonPos == -1) {
        qDebug() << "文件格式错误，缺少 ':' 分隔符！";
    }
    // 拆分 IP 和端口
    QString ip = content.left(colonPos);
    QString portStr = content.mid(colonPos + 1);
    bool ok; // 用于检查转换是否成功

    int host = portStr.toInt(&ok); // 传递 bool 指针接收状态
    QScopedPointer<TcpClient> tcpClient(new TcpClient());
    // qDebug
    tcpClient->connectToServer("127.0.0.1", 5555);
    // tcpClient->connectToServer(ip, host);
    LoginDialog loginDialog(tcpClient.data());
    if (loginDialog.exec() == QDialog::Accepted) {
        QString key = loginDialog.getKey();
        qDebug() << "登录成功！密钥:" << key;
        MainWindow *mainWindow = new MainWindow(tcpClient.data(), key);
        mainWindow->show();
        return a.exec();
    }

    return a.exec();
}
