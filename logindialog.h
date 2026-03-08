#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "tcpclient.h"

class QLineEdit;
class QPushButton;
class QLabel;

class LoginDialog : public QDialog
{
    Q_OBJECT
public:
    explicit LoginDialog(TcpClient* tcpClient, QWidget *parent = nullptr);
    QString getKey() const { return m_key; }  // 提供获取 key 的方法

private slots:
    void onLoginClicked();
    void onServerResponse(const QString &response);
    // void onServerResponse();

protected:

    // 重写鼠标事件，实现窗口拖动

    void mousePressEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;


private:
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QLabel *statusLabel;

    TcpClient* m_tcpClient;
    QString m_key;
    void resizeEvent(QResizeEvent *event) override; // 关键：确保声明了 resizeEvent

    QPushButton *closeButton; // 关闭按钮


    bool m_dragging = false;  // 是否正在拖动

    QPoint m_dragStartPos;    // 拖动起始位置（窗口坐标）

    QPoint m_mouseStartPos;   // 拖动起始位置（鼠标坐标）


};

#endif // LOGINDIALOG_H
