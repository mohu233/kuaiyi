#include "funds.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QHeaderView>
Funds::Funds(TcpClient* tcpClient,QWidget *parent)
    : QWidget(parent), tcpClient(tcpClient)
{
    // 确保有标题栏和关闭按钮
    setWindowFlags(windowFlags() | Qt::Window);  // 或者使用默认标志
    setWindowTitle("Number Window");



    QTableWidget *table = new QTableWidget(this);
    table->setColumnCount(4);  // 4列
    table->setRowCount(3);     // 3行

    // 设置表头
    table->setHorizontalHeaderLabels({"价格", "使用时长", "说明", "操作"});

    // 填充数据
    // 第1行
    table->setItem(0, 0, new QTableWidgetItem("5"));
    table->setItem(0, 1, new QTableWidgetItem("一天"));
    table->setItem(0, 2, new QTableWidgetItem("每天自动更新10000模拟金币"));
    QPushButton *btn1 = new QPushButton("充值");
    table->setCellWidget(0, 3, btn1);
    // table->resizeColumnToContents(3);
     table->setColumnWidth(2, 200);

    // 第2行
    table->setItem(1, 0, new QTableWidgetItem("99"));
    table->setItem(1, 1, new QTableWidgetItem("一个月"));
    table->setItem(1, 2, new QTableWidgetItem("每天自动更新10000模拟金币"));
    QPushButton *btn2 = new QPushButton("充值");
    table->setCellWidget(1, 3, btn2);

    // 第3行
    table->setItem(2, 0, new QTableWidgetItem("268"));
    table->setItem(2, 1, new QTableWidgetItem("一季度"));
    table->setItem(2, 2, new QTableWidgetItem("每天自动更新10000模拟金币"));
    QPushButton *btn3 = new QPushButton("充值");
    table->setCellWidget(2, 3, btn3);

    // 设置表格样式
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // 列宽自适应
    table->verticalHeader()->setVisible(false);  // 隐藏行头
    table->setSelectionMode(QAbstractItemView::NoSelection);  // 禁止选中行

    // 连接按钮信号
    connect(btn1, &QPushButton::clicked, this, []() {
        QString reply = "发送修改电话指令";
        // m_tcpClient->sendData(reply);
        QMessageBox::information(nullptr, "提示", "您点击了10元的充值按钮");
    });
    connect(btn2, &QPushButton::clicked, this, []() {
        QMessageBox::information(nullptr, "提示", "您点击了100元的充值按钮");
    });
    connect(btn3, &QPushButton::clicked, this, []() {
        QMessageBox::information(nullptr, "提示", "您点击了200元的充值按钮");
    });

    // 布局
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(table);


    // // 创建控件
    // QLabel *label = new QLabel("This is a child window", this);
    // QPushButton *closeButton = new QPushButton("Close", this);
    // // 点击按钮关闭窗口
    // connect(closeButton, &QPushButton::clicked, this, &Funds::close);
    // // 布局
    // QVBoxLayout *layout_1 = new QVBoxLayout(this);
    // layout_1->addWidget(label);
    // layout_1->addWidget(closeButton);
    // setLayout(layout);

    resize(600, 400);
}
Funds::~Funds()
{
}
