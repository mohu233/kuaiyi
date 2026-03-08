#include "subwindow.h"

SubWindow::SubWindow(QWidget *parent) : QDialog(parent) {
    setWindowTitle("子窗口");
    resize(300, 200);

    QVBoxLayout *layout = new QVBoxLayout(this);

    // 输入框
    QLabel *inputLabel = new QLabel("请输入数字:", this);
    inputEdit = new QLineEdit(this);
    layout->addWidget(inputLabel);
    layout->addWidget(inputEdit);

    // 确定按钮
    QPushButton *okBtn = new QPushButton("确定", this);
    connect(okBtn, &QPushButton::clicked, this, &SubWindow::onOkClicked);
    layout->addWidget(okBtn);

    setLayout(layout);
}

void SubWindow::onOkClicked() {
    bool ok;
    int number = inputEdit->text().toInt(&ok);  // 尝试转换为整数

    if (ok) {
        emit dataSent(number);  // 发射信号，传递数据
        close();  // 关闭子窗口
    } else {
        inputEdit->setText("请输入有效数字！");
    }
}
