


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "number.h"
#include "funds.h"
#include "recharge.h"

#include <QMouseEvent>
#include <QDate>
#include <QJsonArray>
#include <QLabel>
#include <QMenu>
#include <QAction>
#include <QList>
#include <QDebug>
#include <algorithm>
#include <QJsonDocument>
#include <QApplication>
#include <QTableWidget>
#include <QHeaderView>
#include <QIcon>
#include <QPixmap>
#include <QJsonObject>
#include <QHBoxLayout>
#include <QPushButton>
#include <QDir>
#include <QMessageBox>
#include <QVariant>
#include <QRadioButton>
#include <QStyledItemDelegate>
#include <QProcess>
// #include <QTextCodec>
// #include <QTextCodec>


// #ifdef Q_OS_WIN

// // Windows 系统下可以通过样式表修改标题栏（有限支持）

// setStyleSheet("QDialog { background: #1e3f5a; } "

//               "QDialog[windowTitle='登录'] { background: #1e3f5a; } " // 尝试匹配标题

//               // 注意：系统标题栏样式支持有限

//               );


MainWindow::MainWindow(TcpClient* tcpClient,const QString &authKey,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_number(nullptr)
    , m_funds(nullptr)
    , m_recharge(nullptr)
    ,m_tcpClient(tcpClient)
    , m_authKey(authKey)


{

    // setWindowFlags(Qt::FramelessWindowHint);
    // setAttribute(Qt::WA_TranslucentBackground);

    // 自定义标题栏（示例：一个水平布局，包含标题和关闭按钮）



    setWindowFlags(Qt::FramelessWindowHint);

    QWidget *titleBar = new QWidget(this);
    QHBoxLayout *titleLayout = new QHBoxLayout(titleBar);
    // QWidget *titleBar = new QWidget(this);

    titleBar->setFixedHeight(30);

    titleBar->setStyleSheet("background: #1e3f5a;"); // 蓝色背景



    QLabel *titleLabel = new QLabel("快易模拟交易系统", this);
    titleLabel->setStyleSheet("color: #b0e0ff; font: 12pt 'Orbitron';");

    m_closeButton = new QPushButton("×", this);
    m_closeButton->setFixedSize(30, 30);
    m_closeButton->setStyleSheet(R"(
        QPushButton {
            background: rgba(255, 0, 0, 0.3);
            color: white;
            border: none;
            border-radius: 15px;
        }
        QPushButton:hover {
            background: rgba(255, 0, 0, 0.6);
        }
    )");






    // ui ->pushButton_6->setObjectName("pushButton_6");  //
    connect(m_closeButton, &QPushButton::clicked, this, &MainWindow::close);

    titleLayout->addWidget(titleLabel);
    titleLayout->addStretch();
    titleLayout->addWidget(m_closeButton);
    titleBar->setLayout(titleLayout);

    // 主布局（示例）
    QWidget *central = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(central);
    mainLayout->addWidget(titleBar);
    mainLayout->addStretch();
    setCentralWidget(central);




    //images/iocn.png
     // qDebug() << "MainWindow 构造函数开始";
     // qDebug() << "Auth Key:" << m_authKey;
    // 在主窗口的构造函数或初始化函数中添加
   // 设置窗口无边框
    // setWindowFlags(Qt::FramelessWindowHint);



    // 确保背景透明（可选）

    // setAttribute(Qt::WA_TranslucentBackground);

    ui->setupUi(this);
    // resultLabel = new QLabel(this);
    bool connected = connect(tcpClient, &TcpClient::dataReceived, this, &MainWindow::onDataReceived);

    if (!connected) {

        qDebug() << "信号槽连接失败！";
    }


    // 示例：连接到本地服务器
    // m_tcpClient->connectToServer("127.0.0.1", 1234);



    // setWindowIcon(QIcon("images/iocn.png"));

    QString appDir = QApplication::applicationDirPath();
    QString image_Path1 = QDir(appDir).filePath("images/icon.png");
    QIcon icon(image_Path1);
    if (icon.isNull()) {
        qDebug() << "Failed to load icon!"<<image_Path1;;
    }else{
        qDebug() << "icon读取成功"<<image_Path1;
    }

    // setWindowFlags(windowFlags() | Qt::CustomizeWindowHint);  // 允许自定义窗口

    // setWindowFlags(windowFlags() & ~Qt::WindowSystemMenuHint);
    // setWindowIcon(QIcon()); // 清空窗口图标


    // setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    // setStyleSheet("QMainWindow::icon { width: 0; height: 0; }");

    setWindowTitle(" ");
    // setWindowFlags(Qt::FramelessWindowHint);
    // this->setStyleSheet("background-color: lightblue;");
    // connect(ui->pushButton_34, &QPushButton::clicked, this, &MainWindow::close);

    //初始化

    ui->pushButton_22->setStyleSheet(
        "background: transparent; border: none;"


        );

    ui->pushButton_6->setStyleSheet(
        "background: transparent; border: none;"
        );
    ui->pushButton_7->setStyleSheet(
        "background: transparent; border: none;"
        );

    ui->calendarWidget->setVisible(win_time);
    ui->calendarWidget_2->setVisible(win_time);

    ui -> pushButton_38->setStyleSheet(R"(
        QPushButton {
color: #FF0000;  /* 红色字体（十六进制颜色码） */
}

    )");
    ui -> pushButton_33->setStyleSheet(R"(
        QPushButton {
color: #FF0000;  /* 红色字体（十六进制颜色码） */
}

    )");
    ui -> pushButton_34->setStyleSheet(R"(
        QPushButton {
color: #FF0000;  /* 红色字体（十六进制颜色码） */
}
    )");



    ui->pushButton_32->setStyleSheet(
        "QPushButton {"
        "   background-color: rgba(0, 120, 215, 0%);"  // 蓝色，50% 透明
        "   color: white;"  // 文字颜色
        "   border: none;"  // 无边框
        "   padding: 8px 16px;"  // 内边距
        "   border-radius: 4px;"  // 圆角
        "}"
        );
    ui->pushButton_5->setStyleSheet(
        "QPushButton {"
        "   background-color: rgba(0, 120, 215, 0%);"  // 蓝色，50% 透明
        "   color: white;"  // 文字颜色
        "   border: none;"  // 无边框
        "   padding: 8px 16px;"  // 内边距
        "   border-radius: 4px;"  // 圆角
        "}"
        );
    ui->pushButton_8->setObjectName("pushButton_6");  // 唯一标识
    ui->pushButton_9->setObjectName("pushButton_6");  // 唯一标识


    ui->tableWidget_3->setColumnWidth(0, 25);
    ui->tableWidget_2->setColumnWidth(0, 25);
    ui->tableWidget_7->setColumnWidth(0, 25);
    ui->tableWidget_3->setColumnWidth(8, 150);
    ui->tableWidget_2->setColumnWidth(7, 150);
    ui->tableWidget_7->setColumnWidth(8, 150);
    ui->tableWidget_5->setColumnWidth(8, 150);
    ui->tableWidget_3->setColumnWidth(5, 0);
    ui->tableWidget_2->setColumnWidth(5, 0);
    ui->tableWidget_7->setColumnWidth(6, 0);
    ui->tableWidget_5->setColumnWidth(5, 0);
    QDate currentDate = QDate::currentDate();
    ui->dateEdit->setDate(currentDate);
    ui->dateEdit_2->setDate(currentDate);

    // ui->pushButton_32->setVisible(false);
    ui -> tableWidget_3->setRowCount(0);
    ui->tableWidget_6->verticalHeader()->setVisible(false);
    ui->tableWidget_2->verticalHeader()->setVisible(false);
    ui->tableWidget_3->verticalHeader()->setVisible(false);
    ui->tableWidget_7->verticalHeader()->setVisible(false);
    ui->tableWidget_4->verticalHeader()->setVisible(false);
    ui->tableWidget_5->verticalHeader()->setVisible(false);

    QString reply = "请求初始数据:"+m_authKey;

    tcpClient->sendData(reply);  // 调用 TcpClient 的发送方法


// qDebug() << "MainWindow 构造函数结束";
}


// 拖动窗口实现

void MainWindow::mousePressEvent(QMouseEvent *event) {

    if (event->button() == Qt::LeftButton) {

        m_dragPos = event->globalPos() - frameGeometry().topLeft();

        event->accept();

    }

}



void MainWindow::mouseMoveEvent(QMouseEvent *event) {

    if (event->buttons() & Qt::LeftButton) {

        move(event->globalPos() - m_dragPos);

        event->accept();

    }

}

void MainWindow::onDataReceived(const QString &data) {
    // qDebug() << "窗口已收到数据:" << data;
    QJsonParseError parseError;
    QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8(), &parseError);

    if (parseError.error != QJsonParseError::NoError) {
        qWarning() << "JSON 解析错误:" << parseError.errorString();
        return;
    }

    // 2. 如果是 JSON 对象
    if (doc.isObject()) {
        QJsonObject obj = doc.object();
        // qDebug() << "解析成功，JSON 对象:" << obj;
        // qDebug() << "JSON 对象:" << obj["data"];


        // 3. 提取字段（例如 "data" 数组）
        if (obj.contains("data") && obj["data"].isArray()) {
            QJsonArray dataArray = obj["data"].toArray();
            for (const QJsonValue &item : dataArray) {
                // qDebug() << "data 数组项:" << item.toString();
            }
        }
        QString accountType = obj["type"].toString();
        if (accountType == "初始数据"){
            QString accountType = obj["账户类型"].toString();
            QString fee = obj["账户手续费"].toString();
            QString profit = obj["账户盈亏"].toString();
            QString funds = obj["账户资金"].toString();
            QString phone = obj["电话"].toString();
            QString pwd = obj["密码"].toString();
            QString name = obj["用户名"].toString();
            // QString pan = obj["盘"].toString();
            QDate currentDate = QDate::currentDate();
            QString dateString = currentDate.toString("yyyy-MM-dd"); // 格式化为 "2023-10-25"
            // qDebug() << "当前日期:" << dateString;
            ui ->label_11->setText(m_authKey);
            ui ->label_38->setText(name);
            ui ->label_46->setText(name);
            ui ->label_18->setText(dateString);
            ui ->label_19->setText(accountType);
            ui ->label_22->setText(fee);
            ui ->label_24->setText(profit);
            ui ->label_26->setText(funds);
            ui ->label_14->setText(phone);
            ui ->label_12->setText(funds);
            ui ->label_15->setText("*******");
            // qDebug() << "账户类型:" << accountType << ", 手续费:" << fee;
            ui -> tableWidget_6 -> setItem(0, 0, new QTableWidgetItem(" "));
            ui -> tableWidget_6 -> setItem(0, 1, new QTableWidgetItem(" "));
            QJsonArray panArray = obj["盘"].toArray(); // 如果JSON键是中文“盘”
            QStringList itemss;
            // 遍历数组，提取字符串
            for (const QJsonValue &value : panArray) {
                if (value.isString()) {
                    itemss.append(value.toString());
                }
            }
            // 填充到 ComboBox
            ui -> comboBox->clear(); // 清空现有项（可选）
            ui -> comboBox->addItems(itemss);
            QStringList items2 = {"开仓采购", "开仓销售"};
            ui -> comboBox_2->addItems(items2);
        }
        else if (accountType == "修改密码"){
            QString cod = obj["cod"].toString();
            QMessageBox::information(this, "提示", cod);
        }
        else if (accountType == "修改电话"){
            QString phone = obj["phone"].toString();
            QString cod = obj["cod"].toString();
            ui ->label_14->setText(phone);
            QMessageBox::information(this, "提示", cod);
        }
        else if (accountType == "数据") {//
            // qDebug() << "Invalid JSON format!" << obj;
            // 检查 JSON 是否包含 "data" 和 "name" 字段
            if (!obj.contains("data") || !obj["data"].isObject() ||
                !obj.contains("name") || !obj["name"].isObject()) {
                return;
            }
            QString personal = obj["personal"].toString();
            QString quantity_data = obj["comm"].toString();
            ui ->label_26->setText(personal);
            ui->label_26->setStyleSheet("color: red;");  // 设置字体颜色为红色
            ui -> label_22 ->setText(quantity_data);


            QJsonObject dataObj = obj["data"].toObject();
            QJsonObject nameObj = obj["name"].toObject();
            QJsonObject orderObj = obj["orders"].toObject();
            // 如果 data 或 name 为空对象，则不更新表格
            if (dataObj.isEmpty() || nameObj.isEmpty() || orderObj.isEmpty() ) {
                // qDebug() << "JSON 数据为空，不更新表格";
                return;
            }
            // 获取所有键
            QStringList keys = dataObj.keys();
            // 简单排序：按字符串排序（适用于数字和字符串混合键）
            keys.sort();
            // 或者按数字排序（如果键都是数字字符串）
            bool allNumeric = true;
            for (const QString &key : keys) {
                bool ok;
                key.toInt(&ok);
                if (!ok) {
                    allNumeric = false;
                    break;
                }
            }
            if (allNumeric) {
                // 转换为整数排序
                QList<int> intKeys;
                for (const QString &key : keys) {
                    intKeys.append(key.toInt());

                }
                std::sort(intKeys.begin(), intKeys.end());
                keys.clear();
                for (int key : intKeys) {
                    keys.append(QString::number(key));
                }
            }
            // 设置表格
            ui->tableWidget_6->setRowCount(keys.size());
            ui->tableWidget_6->setColumnCount(3);
            // ui->tableWidget_6->setRowHeight(2, 10);
            ui->tableWidget_6->setColumnWidth(1, 80);
            ui->tableWidget_6->setColumnWidth(2, 50);
            for (int i = 0; i < keys.size(); ++i) {
                QString key = keys[i];
                if (!nameObj.contains(key) || !dataObj.contains(key) || !orderObj.contains(key)) {
                    continue; // 跳过不匹配的键
                }
                QString name = nameObj[key].toString();
                QString value = dataObj[key].toString();
                QString orders = orderObj[key].toString();
                ui->tableWidget_6->setItem(i, 0, new QTableWidgetItem(name));
                ui->tableWidget_6->setItem(i, 1, new QTableWidgetItem(value));
                ui->tableWidget_6->setItem(i, 2, new QTableWidgetItem(orders));

            }
            // qDebug() << "JSON 委托数据已填充到表格！";
            // 2. 获取 "委托" 对象
            QJsonObject ordersObj = obj["委托"].toObject();
            QMap<QString, bool> radioButtonStates3; // 订单编号 -> 是否选中
            for (int row = 0; row < ui->tableWidget_2->rowCount(); ++row) {
                // 获取RadioButton控件
                QWidget* widget = ui->tableWidget_2->cellWidget(row, 0);
                if (widget) {
                    QRadioButton* radioButton = widget->findChild<QRadioButton*>();
                    if (radioButton) {
                        // 获取订单编号（假设在第3列）
                        QTableWidgetItem* orderIdItem = ui->tableWidget_2->item(row, 3);
                        if (orderIdItem) {
                            QString orderId = orderIdItem->text();
                            radioButtonStates3[orderId] = radioButton->isChecked();
                        }
                    }
                }
            }
            // 3. 清空表格（保留表头）
            ui -> tableWidget_2->setRowCount(0);
            // 4. 遍历每个订单（如 "1", "2"）
            for (const QString& orderKey : ordersObj.keys()) {
                QJsonObject orderData = ordersObj[orderKey].toObject();
                // 5. 提取订单信息
                QString product = orderData["品种"].toString();
                QString price = orderData["委托价格"].toString();
                int quantity = orderData["数量"].toInt();
                QString time = orderData["时间"].toString();
                QString orderType = orderData["类型"].toString();
                QString orderId = orderData["订单编号"].toString();
                QString orders = orderData["合约价格"].toString();
                // 6. 添加新行
                int rowPosition = ui -> tableWidget_2->rowCount();
                ui -> tableWidget_2 ->insertRow(rowPosition);
                // 7. 填充数据到表格
                ui -> tableWidget_2 ->setItem(rowPosition, 0, new QTableWidgetItem(" "));
                ui -> tableWidget_2 ->setItem(rowPosition, 1, new QTableWidgetItem(product));
                ui -> tableWidget_2 ->setItem(rowPosition, 2, new QTableWidgetItem(orderType));
                ui -> tableWidget_2 ->setItem(rowPosition, 3, new QTableWidgetItem(orderId));
                ui -> tableWidget_2 ->setItem(rowPosition, 4, new QTableWidgetItem(price));
                ui -> tableWidget_2 ->setItem(rowPosition, 5, new QTableWidgetItem(orders));
                ui -> tableWidget_2 ->setItem(rowPosition, 6, new QTableWidgetItem(QString::number(quantity)));
                ui -> tableWidget_2 ->setItem(rowPosition, 7, new QTableWidgetItem(time));
                // 创建 RadioButton 并嵌入到表格
                QWidget *widget = new QWidget();
                QHBoxLayout *layout = new QHBoxLayout(widget);
                QRadioButton *radioButton = new QRadioButton();
                // 存储行号（使用 QObject::setProperty）
                radioButton->setProperty("row", rowPosition);
                // 连接信号槽
                connect(radioButton, &QRadioButton::toggled, this, &MainWindow::onRadioButtonToggled);
                // 恢复之前保存的选中状态
                if (radioButtonStates3.contains(orderId)) {
                    radioButton->setChecked(radioButtonStates3[orderId]);
                }
                layout->addWidget(radioButton);
                layout->setAlignment(Qt::AlignCenter);
                layout->setContentsMargins(0, 0, 0, 0);
                widget->setLayout(layout);
                ui -> tableWidget_2 ->setCellWidget(rowPosition, 0, widget);
            }

            // 2. 获取 "持仓" 对象
            QJsonObject ordersObj1 = obj["持仓"].toObject();
            QMap<QString, bool> radioButtonStates; // 订单编号 -> 是否选中
            for (int row = 0; row < ui->tableWidget_3->rowCount(); ++row) {
                // 获取RadioButton控件
                QWidget* widget = ui->tableWidget_3->cellWidget(row, 0);
                if (widget) {
                    QRadioButton* radioButton = widget->findChild<QRadioButton*>();
                    // qDebug() << "Invalid JSON format!";
                    // qDebug() <<  row<< "开启";
                    if (radioButton) {
                        // 获取订单编号（假设在第3列）
                        QTableWidgetItem* orderIdItem = ui->tableWidget_3->item(row, 3);
                        if (orderIdItem) {
                            QString orderId = orderIdItem->text();
                            radioButtonStates[orderId] = radioButton->isChecked();
                        }
                    }
                }
            }
            // 3. 清空表格（保留表头）
            ui -> tableWidget_3->setRowCount(0);
            // 4. 遍历每个订单（如 "1", "2"）
            int quantity_tamp = 0;
            int pro_tamp = 0;
            for (const QString& orderKey : ordersObj1.keys()) {
                QJsonObject orderData = ordersObj1[orderKey].toObject();
                // 5. 提取订单信息
                QString product = orderData["品种"].toString();
                QString price = orderData["成交价格"].toString();
                int quantity = orderData["数量"].toInt();
                QString time = orderData["时间"].toString();
                QString orderType = orderData["类型"].toString();
                QString orderId = orderData["订单编号"].toString();
                QString orders = orderData["合约价格"].toString();
                quantity_tamp += quantity;
                // 6. 添加新行
                int rowPosition = ui -> tableWidget_3->rowCount();
                ui -> tableWidget_3 ->insertRow(rowPosition);
                // int rowPosition = ui->tableWidget_3->rowCount();
                // ui -> tableWidget_3 ->insertRow(rowPosition);
                // 7. 填充数据到表格
                ui -> tableWidget_3 ->setItem(rowPosition, 0, new QTableWidgetItem(" "));
                ui -> tableWidget_3 ->setItem(rowPosition, 1, new QTableWidgetItem(product));
                ui -> tableWidget_3 ->setItem(rowPosition, 2, new QTableWidgetItem(orderType));
                ui -> tableWidget_3 ->setItem(rowPosition, 3, new QTableWidgetItem(orderId));
                ui -> tableWidget_3 ->setItem(rowPosition, 4, new QTableWidgetItem(price));
                ui -> tableWidget_3 ->setItem(rowPosition, 5, new QTableWidgetItem(orders));
                ui -> tableWidget_3 ->setItem(rowPosition, 6, new QTableWidgetItem(QString::number(quantity)));
                ui -> tableWidget_3 ->setItem(rowPosition, 7, new QTableWidgetItem(" "));
                ui -> tableWidget_3 ->setItem(rowPosition, 8, new QTableWidgetItem(time));
                // 创建 RadioButton 并嵌入到表格
                QWidget *widget = new QWidget();
                QHBoxLayout *layout = new QHBoxLayout(widget);
                QRadioButton *radioButton = new QRadioButton();
                // 存储行号（使用 QObject::setProperty）
                radioButton->setProperty("row", rowPosition);
                // 连接信号槽
                connect(radioButton, &QRadioButton::toggled, this, &MainWindow::onRadioButtonToggled);
                // 恢复之前保存的选中状态
                if (radioButtonStates.contains(orderId)) {
                    radioButton->setChecked(radioButtonStates[orderId]);
                }
                layout->addWidget(radioButton);
                layout->setAlignment(Qt::AlignCenter);
                layout->setContentsMargins(0, 0, 0, 0);
                widget->setLayout(layout);
                ui -> tableWidget_3 ->setCellWidget(rowPosition, 0, widget);
            }
            // qDebug() << "JSON 持仓数据已填充到表格！";
            //计算盈亏
            for (int i = 0; i < keys.size(); ++i) {
                QString key = keys[i];
                if (!nameObj.contains(key) || !dataObj.contains(key)) {
                    continue; // 跳过不匹配的键
                }
                QString name = nameObj[key].toString();
                QString value = dataObj[key].toString();

                // 获取当前价格和所有持仓盘数据
                int rows = ui ->tableWidget_3->rowCount();
                 // qDebug() << "开始填充持仓数据9" << rows;
                for (int row = 0; row < rows; ++row) {
                    //品种
                    QString product = ui->tableWidget_3->item(row, 1)->text();//品种
                    QString orderType = ui->tableWidget_3->item(row, 2)->text();//类型
                    QString price = ui->tableWidget_3->item(row, 4)->text();//价格
                    QString quantity = ui->tableWidget_3->item(row, 6)->text();//数量
                    // qDebug() << price << quantity<<value;
                    // qDebug() << "开始填充持仓数据10";
                    bool ok1, ok2 , ok3;
                    int priceint = static_cast<int>(price.toDouble(&ok1));
                    int quantityint = quantity.toInt(&ok2);
                    int valueint = value.toInt(&ok3);
                    // qDebug() << priceint << quantityint<<valueint;
                    // qDebug() << "开始填充持仓数据11";
                    // if (name == product){
                    //     if (orderType == "开仓采购"){
                    //         int pro = (valueint - priceint) * quantityint;
                    //         // qDebug() << "盈亏" << pro;
                    //         ui -> tableWidget_3 ->setItem(row, 7, new QTableWidgetItem(QString::number(pro)));
                    //     }else{
                    //         int pro = (priceint - valueint) * quantityint;
                    //         // qDebug() << "盈亏" << pro;
                    //         ui -> tableWidget_3 ->setItem(row, 7, new QTableWidgetItem(QString::number(pro)));
                    //     }
                    // }
                    if (name == product) {
                        int pro = 0; // 存储盈亏值
                        // 根据订单类型计算盈亏
                        if (orderType == "开仓采购") {
                            pro = (valueint - priceint) * quantityint;
                        } else {
                            pro = (priceint - valueint) * quantityint;
                        }
                        pro_tamp += pro;
                        // 创建表格项
                        QTableWidgetItem *item = new QTableWidgetItem(QString::number(pro));
                        // 设置颜色（正数=红色，负数=绿色）
                        if (pro < 0) {
                            item->setForeground(QBrush(Qt::green));  // 负数 = 绿色
                        } else if (pro > 0) {
                            item->setForeground(QBrush(Qt::red));    // 正数 = 红色
                        }
                        // 如果 pro == 0，保持默认颜色（可选）
                        // 添加到表格
                        ui->tableWidget_3->setItem(row, 7, item);
                    }
                }
            }
            // 设置 label_40 的颜色（quantity_tamp）
            if (pro_tamp > 0) {
                ui->label_40->setStyleSheet("color: red;");  // 大于 0 → 红色
            } else if (pro_tamp < 0) {
                ui->label_40->setStyleSheet("color: green;"); // 小于 0 → 绿色
            } else {
                ui->label_40->setStyleSheet("color: white;"); // 等于 0 → 默认黑色（可选）
            }
            // 设置 label_40 的颜色（pro_tamp）
            // if (pro_tamp > 0) {
            //     ui->label_40->setStyleSheet("color: red;");
            // } else if (pro_tamp < 0) {
            //     ui->label_40->setStyleSheet("color: green;");
            // } else {
            //     ui->label_40->setStyleSheet("color: white;");
            // }
            ui ->label_39 -> setText(QString::number(quantity_tamp));
            ui ->label_40 -> setText(QString::number(pro_tamp));
            QJsonObject executedObj1 = obj["成交"].toObject();
            //tableWidget_5
            ui -> tableWidget_5->setRowCount(0);
            // 4. 遍历每个订单（如 "1", "2"）
            int num_data = 0;
            // double quantity_data = 0;
            int quan_data = 0;
            for (const QString& orderKey  : executedObj1.keys()) {
                QJsonObject orderData = executedObj1[orderKey].toObject();
                // 5. 提取订单信息
                QString product = orderData["品种"].toString();
                QString orderType = orderData["类型"].toString();
                QString orderId = orderData["订单编号"].toString();
                QString price2 = orderData["成交价格"].toString();
                QString price3 = orderData["平仓价格"].toString();
                QString price1 = orderData["合约价格"].toString();
                int quantity = orderData["数量"].toInt();
                int profit = orderData["盈亏"].toInt();
                QString time = orderData["时间"].toString();

                // 6. 添加新行
                int rowPosition = ui -> tableWidget_5->rowCount();
                ui -> tableWidget_5 ->insertRow(rowPosition);
                // 7. 填充数据到表格
                ui -> tableWidget_5 ->setItem(rowPosition, 0, new QTableWidgetItem(product));
                ui -> tableWidget_5 ->setItem(rowPosition, 1, new QTableWidgetItem(orderType));
                ui -> tableWidget_5 ->setItem(rowPosition, 2, new QTableWidgetItem(orderId));
                ui -> tableWidget_5 ->setItem(rowPosition, 3, new QTableWidgetItem(price2));
                ui -> tableWidget_5 ->setItem(rowPosition, 4, new QTableWidgetItem(price3));
                ui -> tableWidget_5 ->setItem(rowPosition, 5, new QTableWidgetItem(price1));
                ui -> tableWidget_5 ->setItem(rowPosition, 6, new QTableWidgetItem(QString ::number(quantity)));
                // ui -> tableWidget_5 ->setItem(rowPosition, 6, new QTableWidgetItem(profit));
                ui -> tableWidget_5 ->setItem(rowPosition, 8, new QTableWidgetItem(time));
                int pro = profit;
                    // 创建表格项
                QTableWidgetItem *item = new QTableWidgetItem(QString::number(pro));
                num_data += pro;
                quan_data  += quantity;
                // quantity_data += quantity *1.5;

                    // 设置颜色（正数=红色，负数=绿色）
                if (pro < 0) {
                        item->setForeground(QBrush(Qt::green));  // 负数 = 绿色
                    } else if (pro > 0) {
                        item->setForeground(QBrush(Qt::red));    // 正数 = 红色
                    }
                    // 如果 pro == 0，保持默认颜色（可选）
                    // 添加到表格
                    ui->tableWidget_5 ->setItem(rowPosition, 7, item);
                }

            if (num_data > 0) {
                ui->label_31->setStyleSheet("color: red;");  // 大于 0 → 红色
            } else if (num_data < 0) {
                ui->label_31->setStyleSheet("color: green;"); // 小于 0 → 绿色
            } else {
                ui->label_31->setStyleSheet("color: white;"); // 等于 0 → 默认黑色（可选）
            }
            if (num_data > 0) {
                ui->label_24->setStyleSheet("color: red;");  // 大于 0 → 红色
            } else if (num_data < 0) {
                ui->label_24->setStyleSheet("color: green;"); // 小于 0 → 绿色
            } else {
                ui->label_24->setStyleSheet("color: white;"); // 等于 0 → 默认黑色（可选）
            }
            ui -> label_31 ->setText(QString::number(num_data));
            ui -> label_30 ->setText(QString::number(quan_data));
            ui -> label_24 ->setText(QString::number(num_data));



             // qDebug() << "开始填充持仓数据12";
            // if (orderType == "开仓采购"){

            QJsonObject ordersObj2 = obj["平仓"].toObject();
            QMap<QString, bool> radioButtonStates1; // 订单编号 -> 是否选中
            for (int row = 0; row < ui->tableWidget_7->rowCount(); ++row) {
                // 获取RadioButton控件
                QWidget* widget = ui->tableWidget_7->cellWidget(row, 0);
                if (widget) {
                    QRadioButton* radioButton = widget->findChild<QRadioButton*>();
                    // qDebug() << "Invalid JSON format!";
                    // qDebug() <<  row<< "开启";
                    if (radioButton) {
                        // 获取订单编号（假设在第3列）
                        QTableWidgetItem* orderIdItem = ui->tableWidget_7->item(row, 3);
                        if (orderIdItem) {
                            QString orderId = orderIdItem->text();
                            radioButtonStates1[orderId] = radioButton->isChecked();
                        }
                    }
                }
            }
            // 3. 清空表格（保留表头）
            ui -> tableWidget_7->setRowCount(0);
            // 4. 遍历每个订单（如 "1", "2"）
            for (const QString& orderKey : ordersObj2.keys()) {
                QJsonObject orderData = ordersObj2[orderKey].toObject();


                QString product = orderData["品种"].toString();
                QString orderType = orderData["类型"].toString();
                QString orderId = orderData["订单编号"].toString();
                QString price2 = orderData["成交价格"].toString();
                QString orders = orderData["平仓价格"].toString();
                QString price1 = orderData["合约价格"].toString();
                QString quantity = orderData["数量"].toString();
                QString time = orderData["时间"].toString();

                // 6. 添加新行
                int rowPosition = ui -> tableWidget_7->rowCount();
                ui -> tableWidget_7 ->insertRow(rowPosition);
                // 7. 填充数据到表格
                ui -> tableWidget_7 ->setItem(rowPosition, 0, new QTableWidgetItem(" "));
                ui -> tableWidget_7 ->setItem(rowPosition, 1, new QTableWidgetItem(product));
                ui -> tableWidget_7 ->setItem(rowPosition, 2, new QTableWidgetItem(orderType));
                ui -> tableWidget_7 ->setItem(rowPosition, 3, new QTableWidgetItem(orderId));
                ui -> tableWidget_7 ->setItem(rowPosition, 4, new QTableWidgetItem(price2));
                ui -> tableWidget_7 ->setItem(rowPosition, 5, new QTableWidgetItem(orders));
                ui -> tableWidget_7 ->setItem(rowPosition, 6, new QTableWidgetItem(price1));
                ui -> tableWidget_7 ->setItem(rowPosition, 7, new QTableWidgetItem(quantity));
                ui -> tableWidget_7 ->setItem(rowPosition, 8, new QTableWidgetItem(time));

                QWidget *widget = new QWidget();
                QHBoxLayout *layout = new QHBoxLayout(widget);
                QRadioButton *radioButton = new QRadioButton();
                // 存储行号（使用 QObject::setProperty）
                radioButton->setProperty("row", rowPosition);
                // 连接信号槽
                connect(radioButton, &QRadioButton::toggled, this, &MainWindow::onRadioButtonToggled);
                // 恢复之前保存的选中状态
                if (radioButtonStates1.contains(orderId)) {
                    radioButton->setChecked(radioButtonStates1[orderId]);
                }
                layout->addWidget(radioButton);
                layout->setAlignment(Qt::AlignCenter);
                layout->setContentsMargins(0, 0, 0, 0);
                widget->setLayout(layout);
                ui -> tableWidget_7 ->setCellWidget(rowPosition, 0, widget);
            }
        }
        else if (accountType == "请求交易") {
            QString cod = obj["cod"].toString();
            if (cod == "操作成功"){
                QMessageBox::information(this, "提示", cod);
                QJsonObject dataObj = obj["data"].toObject();
                QString account = dataObj["账号id"].toString();
                QString breed = dataObj["品种"].toString();
                QString types = dataObj["类型"].toString();
                QString order_info = dataObj["订单编号"].toString();
                QString price = dataObj["委托价格"].toString();
                QString number = dataObj["数量"].toString();
                QString formatted_time = dataObj["时间"].toString();

                //tableWidget_2
                int currentRow = ui -> tableWidget_2->rowCount();
                ui ->tableWidget_2->setRowCount(currentRow + 1);
                ui->tableWidget_2->setItem(currentRow, 0, new QTableWidgetItem(breed));
                ui->tableWidget_2->setItem(currentRow, 1, new QTableWidgetItem(types));
                ui->tableWidget_2->setItem(currentRow, 2, new QTableWidgetItem(order_info));
                ui->tableWidget_2->setItem(currentRow, 3, new QTableWidgetItem(price));
                ui->tableWidget_2->setItem(currentRow, 4, new QTableWidgetItem(number));
                ui->tableWidget_2->setItem(currentRow, 5, new QTableWidgetItem(formatted_time));
                // qDebug() << "JSON 数据已填充到表格！";
            }
        }
        else if (accountType == "刷新"){
            // qDebug() << "Invalid JSON format!" << obj;
            // 检查 JSON 是否包含 "data" 和 "name" 字段
            if (!obj.contains("data") || !obj["data"].isObject() ||
                !obj.contains("name") || !obj["name"].isObject()) {

                return;
            }
            QString personal = obj["personal"].toString();
            QString quantity_data = obj["comm"].toString();
            ui ->label_26->setText(personal);
            ui->label_26->setStyleSheet("color: red;");  // 设置字体颜色为红色
            ui -> label_22 ->setText(quantity_data);


            QJsonObject dataObj = obj["data"].toObject();
            QJsonObject nameObj = obj["name"].toObject();
            QJsonObject orderObj = obj["orders"].toObject();
            // 如果 data 或 name 为空对象，则不更新表格
            if (dataObj.isEmpty() || nameObj.isEmpty() || orderObj.isEmpty() ) {
                // qDebug() << "JSON 数据为空，不更新表格";
                return;
            }
            // 获取所有键
            QStringList keys = dataObj.keys();
            // 简单排序：按字符串排序（适用于数字和字符串混合键）
            keys.sort();
            // 或者按数字排序（如果键都是数字字符串）
            bool allNumeric = true;
            for (const QString &key : keys) {
                bool ok;
                key.toInt(&ok);
                if (!ok) {
                    allNumeric = false;
                    break;
                }
            }
            if (allNumeric) {
                // 转换为整数排序
                QList<int> intKeys;
                for (const QString &key : keys) {
                    intKeys.append(key.toInt());

                }
                std::sort(intKeys.begin(), intKeys.end());
                keys.clear();
                for (int key : intKeys) {
                    keys.append(QString::number(key));
                }
            }
            // 设置表格
            ui->tableWidget_6->setRowCount(keys.size());
            ui->tableWidget_6->setColumnCount(3);
            // ui->tableWidget_6->setRowHeight(2, 10);
            ui->tableWidget_6->setColumnWidth(1, 80);
            ui->tableWidget_6->setColumnWidth(2, 50);
            for (int i = 0; i < keys.size(); ++i) {
                QString key = keys[i];
                if (!nameObj.contains(key) || !dataObj.contains(key) || !orderObj.contains(key)) {
                    continue; // 跳过不匹配的键
                }
                QString name = nameObj[key].toString();
                QString value = dataObj[key].toString();
                QString orders = orderObj[key].toString();
                ui->tableWidget_6->setItem(i, 0, new QTableWidgetItem(name));
                ui->tableWidget_6->setItem(i, 1, new QTableWidgetItem(value));
                ui->tableWidget_6->setItem(i, 2, new QTableWidgetItem(orders));

            }
            // qDebug() << "JSON 委托数据已填充到表格！";
            // 2. 获取 "委托" 对象
            QJsonObject ordersObj = obj["委托"].toObject();
            QMap<QString, bool> radioButtonStates3; // 订单编号 -> 是否选中
            for (int row = 0; row < ui->tableWidget_2->rowCount(); ++row) {
                // 获取RadioButton控件
                QWidget* widget = ui->tableWidget_2->cellWidget(row, 0);
                if (widget) {
                    QRadioButton* radioButton = widget->findChild<QRadioButton*>();
                    if (radioButton) {
                        // 获取订单编号（假设在第3列）
                        QTableWidgetItem* orderIdItem = ui->tableWidget_2->item(row, 3);
                        if (orderIdItem) {
                            QString orderId = orderIdItem->text();
                            radioButtonStates3[orderId] = radioButton->isChecked();
                        }
                    }
                }
            }
            // 3. 清空表格（保留表头）
            ui -> tableWidget_2->setRowCount(0);
            // 4. 遍历每个订单（如 "1", "2"）
            for (const QString& orderKey : ordersObj.keys()) {
                QJsonObject orderData = ordersObj[orderKey].toObject();
                // 5. 提取订单信息
                QString product = orderData["品种"].toString();
                QString price = orderData["委托价格"].toString();
                int quantity = orderData["数量"].toInt();
                QString time = orderData["时间"].toString();
                QString orderType = orderData["类型"].toString();
                QString orderId = orderData["订单编号"].toString();
                QString orders = orderData["合约价格"].toString();
                // 6. 添加新行
                int rowPosition = ui -> tableWidget_2->rowCount();
                ui -> tableWidget_2 ->insertRow(rowPosition);
                // 7. 填充数据到表格
                ui -> tableWidget_2 ->setItem(rowPosition, 0, new QTableWidgetItem(" "));
                ui -> tableWidget_2 ->setItem(rowPosition, 1, new QTableWidgetItem(product));
                ui -> tableWidget_2 ->setItem(rowPosition, 2, new QTableWidgetItem(orderType));
                ui -> tableWidget_2 ->setItem(rowPosition, 3, new QTableWidgetItem(orderId));
                ui -> tableWidget_2 ->setItem(rowPosition, 4, new QTableWidgetItem(price));
                ui -> tableWidget_2 ->setItem(rowPosition, 5, new QTableWidgetItem(orders));
                ui -> tableWidget_2 ->setItem(rowPosition, 6, new QTableWidgetItem(QString::number(quantity)));
                ui -> tableWidget_2 ->setItem(rowPosition, 7, new QTableWidgetItem(time));
                // 创建 RadioButton 并嵌入到表格
                QWidget *widget = new QWidget();
                QHBoxLayout *layout = new QHBoxLayout(widget);
                QRadioButton *radioButton = new QRadioButton();
                // 存储行号（使用 QObject::setProperty）
                radioButton->setProperty("row", rowPosition);
                // 连接信号槽
                connect(radioButton, &QRadioButton::toggled, this, &MainWindow::onRadioButtonToggled);
                // 恢复之前保存的选中状态
                if (radioButtonStates3.contains(orderId)) {
                    radioButton->setChecked(radioButtonStates3[orderId]);
                }
                layout->addWidget(radioButton);
                layout->setAlignment(Qt::AlignCenter);
                layout->setContentsMargins(0, 0, 0, 0);
                widget->setLayout(layout);
                ui -> tableWidget_2 ->setCellWidget(rowPosition, 0, widget);
            }

            // 2. 获取 "持仓" 对象
            QJsonObject ordersObj1 = obj["持仓"].toObject();
            QMap<QString, bool> radioButtonStates; // 订单编号 -> 是否选中
            for (int row = 0; row < ui->tableWidget_3->rowCount(); ++row) {
                // 获取RadioButton控件
                QWidget* widget = ui->tableWidget_3->cellWidget(row, 0);
                if (widget) {
                    QRadioButton* radioButton = widget->findChild<QRadioButton*>();
                    // qDebug() << "Invalid JSON format!";
                    // qDebug() <<  row<< "开启";
                    if (radioButton) {
                        // 获取订单编号（假设在第3列）
                        QTableWidgetItem* orderIdItem = ui->tableWidget_3->item(row, 3);
                        if (orderIdItem) {
                            QString orderId = orderIdItem->text();
                            radioButtonStates[orderId] = radioButton->isChecked();
                        }
                    }
                }
            }
            // 3. 清空表格（保留表头）
            ui -> tableWidget_3->setRowCount(0);
            // 4. 遍历每个订单（如 "1", "2"）
            int quantity_tamp = 0;
            int pro_tamp = 0;
            for (const QString& orderKey : ordersObj1.keys()) {
                QJsonObject orderData = ordersObj1[orderKey].toObject();
                // 5. 提取订单信息
                QString product = orderData["品种"].toString();
                QString price = orderData["成交价格"].toString();
                int quantity = orderData["数量"].toInt();
                QString time = orderData["时间"].toString();
                QString orderType = orderData["类型"].toString();
                QString orderId = orderData["订单编号"].toString();
                QString orders = orderData["合约价格"].toString();
                quantity_tamp += quantity;
                // 6. 添加新行
                int rowPosition = ui -> tableWidget_3->rowCount();
                ui -> tableWidget_3 ->insertRow(rowPosition);
                // int rowPosition = ui->tableWidget_3->rowCount();
                // ui -> tableWidget_3 ->insertRow(rowPosition);
                // 7. 填充数据到表格
                ui -> tableWidget_3 ->setItem(rowPosition, 0, new QTableWidgetItem(" "));
                ui -> tableWidget_3 ->setItem(rowPosition, 1, new QTableWidgetItem(product));
                ui -> tableWidget_3 ->setItem(rowPosition, 2, new QTableWidgetItem(orderType));
                ui -> tableWidget_3 ->setItem(rowPosition, 3, new QTableWidgetItem(orderId));
                ui -> tableWidget_3 ->setItem(rowPosition, 4, new QTableWidgetItem(price));
                ui -> tableWidget_3 ->setItem(rowPosition, 5, new QTableWidgetItem(orders));
                ui -> tableWidget_3 ->setItem(rowPosition, 6, new QTableWidgetItem(QString::number(quantity)));
                ui -> tableWidget_3 ->setItem(rowPosition, 7, new QTableWidgetItem(" "));
                ui -> tableWidget_3 ->setItem(rowPosition, 8, new QTableWidgetItem(time));
                // 创建 RadioButton 并嵌入到表格
                QWidget *widget = new QWidget();
                QHBoxLayout *layout = new QHBoxLayout(widget);
                QRadioButton *radioButton = new QRadioButton();
                // 存储行号（使用 QObject::setProperty）
                radioButton->setProperty("row", rowPosition);
                // 连接信号槽
                connect(radioButton, &QRadioButton::toggled, this, &MainWindow::onRadioButtonToggled);
                // 恢复之前保存的选中状态
                if (radioButtonStates.contains(orderId)) {
                    radioButton->setChecked(radioButtonStates[orderId]);
                }
                layout->addWidget(radioButton);
                layout->setAlignment(Qt::AlignCenter);
                layout->setContentsMargins(0, 0, 0, 0);
                widget->setLayout(layout);
                ui -> tableWidget_3 ->setCellWidget(rowPosition, 0, widget);
            }
            // qDebug() << "JSON 持仓数据已填充到表格！";
            //计算盈亏
            for (int i = 0; i < keys.size(); ++i) {
                QString key = keys[i];
                if (!nameObj.contains(key) || !dataObj.contains(key)) {
                    continue; // 跳过不匹配的键
                }
                QString name = nameObj[key].toString();
                QString value = dataObj[key].toString();

                // 获取当前价格和所有持仓盘数据
                int rows = ui ->tableWidget_3->rowCount();
                // qDebug() << "开始填充持仓数据9" << rows;
                for (int row = 0; row < rows; ++row) {
                    //品种
                    QString product = ui->tableWidget_3->item(row, 1)->text();//品种
                    QString orderType = ui->tableWidget_3->item(row, 2)->text();//类型
                    QString price = ui->tableWidget_3->item(row, 4)->text();//价格
                    QString quantity = ui->tableWidget_3->item(row, 6)->text();//数量
                    // qDebug() << price << quantity<<value;
                    // qDebug() << "开始填充持仓数据10";
                    bool ok1, ok2 , ok3;
                    int priceint = static_cast<int>(price.toDouble(&ok1));
                    int quantityint = quantity.toInt(&ok2);
                    int valueint = value.toInt(&ok3);
                    // qDebug() << priceint << quantityint<<valueint;
                    // qDebug() << "开始填充持仓数据11";
                    // if (name == product){
                    //     if (orderType == "开仓采购"){
                    //         int pro = (valueint - priceint) * quantityint;
                    //         // qDebug() << "盈亏" << pro;
                    //         ui -> tableWidget_3 ->setItem(row, 7, new QTableWidgetItem(QString::number(pro)));
                    //     }else{
                    //         int pro = (priceint - valueint) * quantityint;
                    //         // qDebug() << "盈亏" << pro;
                    //         ui -> tableWidget_3 ->setItem(row, 7, new QTableWidgetItem(QString::number(pro)));
                    //     }
                    // }
                    if (name == product) {
                        int pro = 0; // 存储盈亏值
                        // 根据订单类型计算盈亏
                        if (orderType == "开仓采购") {
                            pro = (valueint - priceint) * quantityint;
                        } else {
                            pro = (priceint - valueint) * quantityint;
                        }
                        pro_tamp += pro;
                        // 创建表格项
                        QTableWidgetItem *item = new QTableWidgetItem(QString::number(pro));
                        // 设置颜色（正数=红色，负数=绿色）
                        if (pro < 0) {
                            item->setForeground(QBrush(Qt::green));  // 负数 = 绿色
                        } else if (pro > 0) {
                            item->setForeground(QBrush(Qt::red));    // 正数 = 红色
                        }
                        // 如果 pro == 0，保持默认颜色（可选）
                        // 添加到表格
                        ui->tableWidget_3->setItem(row, 7, item);
                    }
                }
            }
            // 设置 label_40 的颜色（quantity_tamp）
            if (pro_tamp > 0) {
                ui->label_40->setStyleSheet("color: red;");  // 大于 0 → 红色
            } else if (pro_tamp < 0) {
                ui->label_40->setStyleSheet("color: green;"); // 小于 0 → 绿色
            } else {
                ui->label_40->setStyleSheet("color: white;"); // 等于 0 → 默认黑色（可选）
            }
            // 设置 label_40 的颜色（pro_tamp）
            // if (pro_tamp > 0) {
            //     ui->label_40->setStyleSheet("color: red;");
            // } else if (pro_tamp < 0) {
            //     ui->label_40->setStyleSheet("color: green;");
            // } else {
            //     ui->label_40->setStyleSheet("color: white;");
            // }
            ui ->label_39 -> setText(QString::number(quantity_tamp));
            ui ->label_40 -> setText(QString::number(pro_tamp));
            QJsonObject executedObj1 = obj["成交"].toObject();
            //tableWidget_5
            ui -> tableWidget_5->setRowCount(0);
            // 4. 遍历每个订单（如 "1", "2"）
            int num_data = 0;
            // double quantity_data = 0;
            int quan_data = 0;
            for (const QString& orderKey  : executedObj1.keys()) {
                QJsonObject orderData = executedObj1[orderKey].toObject();
                // 5. 提取订单信息
                QString product = orderData["品种"].toString();
                QString orderType = orderData["类型"].toString();
                QString orderId = orderData["订单编号"].toString();
                QString price2 = orderData["成交价格"].toString();
                QString price3 = orderData["平仓价格"].toString();
                QString price1 = orderData["合约价格"].toString();
                int quantity = orderData["数量"].toInt();
                int profit = orderData["盈亏"].toInt();
                QString time = orderData["时间"].toString();

                // 6. 添加新行
                int rowPosition = ui -> tableWidget_5->rowCount();
                ui -> tableWidget_5 ->insertRow(rowPosition);
                // 7. 填充数据到表格
                ui -> tableWidget_5 ->setItem(rowPosition, 0, new QTableWidgetItem(product));
                ui -> tableWidget_5 ->setItem(rowPosition, 1, new QTableWidgetItem(orderType));
                ui -> tableWidget_5 ->setItem(rowPosition, 2, new QTableWidgetItem(orderId));
                ui -> tableWidget_5 ->setItem(rowPosition, 3, new QTableWidgetItem(price2));
                ui -> tableWidget_5 ->setItem(rowPosition, 4, new QTableWidgetItem(price3));
                ui -> tableWidget_5 ->setItem(rowPosition, 5, new QTableWidgetItem(price1));
                ui -> tableWidget_5 ->setItem(rowPosition, 6, new QTableWidgetItem(QString ::number(quantity)));
                // ui -> tableWidget_5 ->setItem(rowPosition, 6, new QTableWidgetItem(profit));
                ui -> tableWidget_5 ->setItem(rowPosition, 8, new QTableWidgetItem(time));
                int pro = profit;
                // 创建表格项
                QTableWidgetItem *item = new QTableWidgetItem(QString::number(pro));
                num_data += pro;
                quan_data  += quantity;
                // quantity_data += quantity *1.5;

                // 设置颜色（正数=红色，负数=绿色）
                if (pro < 0) {
                    item->setForeground(QBrush(Qt::green));  // 负数 = 绿色
                } else if (pro > 0) {
                    item->setForeground(QBrush(Qt::red));    // 正数 = 红色
                }
                // 如果 pro == 0，保持默认颜色（可选）
                // 添加到表格
                ui->tableWidget_5 ->setItem(rowPosition, 7, item);
            }

            if (num_data > 0) {
                ui->label_31->setStyleSheet("color: red;");  // 大于 0 → 红色
            } else if (num_data < 0) {
                ui->label_31->setStyleSheet("color: green;"); // 小于 0 → 绿色
            } else {
                ui->label_31->setStyleSheet("color: white;"); // 等于 0 → 默认黑色（可选）
            }
            if (num_data > 0) {
                ui->label_24->setStyleSheet("color: red;");  // 大于 0 → 红色
            } else if (num_data < 0) {
                ui->label_24->setStyleSheet("color: green;"); // 小于 0 → 绿色
            } else {
                ui->label_24->setStyleSheet("color: white;"); // 等于 0 → 默认黑色（可选）
            }
            ui -> label_31 ->setText(QString::number(num_data));
            ui -> label_30 ->setText(QString::number(quan_data));
            ui -> label_24 ->setText(QString::number(num_data));



            // qDebug() << "开始填充持仓数据12";
            // if (orderType == "开仓采购"){

            QJsonObject ordersObj2 = obj["平仓"].toObject();
            QMap<QString, bool> radioButtonStates1; // 订单编号 -> 是否选中
            for (int row = 0; row < ui->tableWidget_7->rowCount(); ++row) {
                // 获取RadioButton控件
                QWidget* widget = ui->tableWidget_7->cellWidget(row, 0);
                if (widget) {
                    QRadioButton* radioButton = widget->findChild<QRadioButton*>();
                    // qDebug() << "Invalid JSON format!";
                    // qDebug() <<  row<< "开启";
                    if (radioButton) {
                        // 获取订单编号（假设在第3列）
                        QTableWidgetItem* orderIdItem = ui->tableWidget_7->item(row, 3);
                        if (orderIdItem) {
                            QString orderId = orderIdItem->text();
                            radioButtonStates1[orderId] = radioButton->isChecked();
                        }
                    }
                }
            }
            // 3. 清空表格（保留表头）
            ui -> tableWidget_7->setRowCount(0);
            // 4. 遍历每个订单（如 "1", "2"）
            for (const QString& orderKey : ordersObj2.keys()) {
                QJsonObject orderData = ordersObj2[orderKey].toObject();


                QString product = orderData["品种"].toString();
                QString orderType = orderData["类型"].toString();
                QString orderId = orderData["订单编号"].toString();
                QString price2 = orderData["成交价格"].toString();
                QString orders = orderData["平仓价格"].toString();
                QString price1 = orderData["合约价格"].toString();
                QString quantity = orderData["数量"].toString();
                QString time = orderData["时间"].toString();

                // 6. 添加新行
                int rowPosition = ui -> tableWidget_7->rowCount();
                ui -> tableWidget_7 ->insertRow(rowPosition);
                // 7. 填充数据到表格
                ui -> tableWidget_7 ->setItem(rowPosition, 0, new QTableWidgetItem(" "));
                ui -> tableWidget_7 ->setItem(rowPosition, 1, new QTableWidgetItem(product));
                ui -> tableWidget_7 ->setItem(rowPosition, 2, new QTableWidgetItem(orderType));
                ui -> tableWidget_7 ->setItem(rowPosition, 3, new QTableWidgetItem(orderId));
                ui -> tableWidget_7 ->setItem(rowPosition, 4, new QTableWidgetItem(price2));
                ui -> tableWidget_7 ->setItem(rowPosition, 5, new QTableWidgetItem(orders));
                ui -> tableWidget_7 ->setItem(rowPosition, 6, new QTableWidgetItem(price1));
                ui -> tableWidget_7 ->setItem(rowPosition, 7, new QTableWidgetItem(quantity));
                ui -> tableWidget_7 ->setItem(rowPosition, 8, new QTableWidgetItem(time));

                QWidget *widget = new QWidget();
                QHBoxLayout *layout = new QHBoxLayout(widget);
                QRadioButton *radioButton = new QRadioButton();
                // 存储行号（使用 QObject::setProperty）
                radioButton->setProperty("row", rowPosition);
                // 连接信号槽
                connect(radioButton, &QRadioButton::toggled, this, &MainWindow::onRadioButtonToggled);
                // 恢复之前保存的选中状态
                if (radioButtonStates1.contains(orderId)) {
                    radioButton->setChecked(radioButtonStates1[orderId]);
                }
                layout->addWidget(radioButton);
                layout->setAlignment(Qt::AlignCenter);
                layout->setContentsMargins(0, 0, 0, 0);
                widget->setLayout(layout);
                ui -> tableWidget_7 ->setCellWidget(rowPosition, 0, widget);
            }
        }



    }
}



void MainWindow::onRadioButtonToggled(bool checked) {
    QRadioButton *radioButton = qobject_cast<QRadioButton*>(sender());
    if (!radioButton) return;

    if (checked) {
        // 当前是选中状态，允许取消选中
        radioButton->setChecked(true); // 保持选中（可选）
    } else {
        // 当前是取消选中状态（由程序触发）
        // 可以不做处理，或者执行其他逻辑
    }
}

// 在按钮点击事件中手动切换状态
void MainWindow::onRadioButtonClicked() {
    QRadioButton *radioButton = qobject_cast<QRadioButton*>(sender());
    if (!radioButton) return;

    if (radioButton->isChecked()) {
        // 如果已经选中，则取消选中
        radioButton->blockSignals(true); // 阻止信号循环
        radioButton->setChecked(false);
        radioButton->blockSignals(false);
    } else {
        // 如果未选中，则选中
        radioButton->setChecked(true);
    }
}


void fillTableFromJson(QTableWidget *table, const QJsonObject &jsonObj) {
    // 清空表格（可选）
    table->clearContents();
    table->setRowCount(0);

    // 检查 JSON 是否包含 "data" 和 "name" 字段
    if (!jsonObj.contains("data") || !jsonObj["data"].isObject() ||
        !jsonObj.contains("name") || !jsonObj["name"].isObject()) {
        // qDebug() << "Invalid JSON format!";
        return;
    }

    QJsonObject dataObj = jsonObj["data"].toObject();
    QJsonObject nameObj = jsonObj["name"].toObject();

    // 获取所有键（假设 "data" 和 "name" 的键一致）
    QStringList keys;
    for (auto it = dataObj.begin(); it != dataObj.end(); ++it) {
        keys.append(it.key());
    }

    // 设置表格行数
    table->setRowCount(keys.size());
    table->setColumnCount(2); // 两列：名称和数值

    // 填充表格
    for (int i = 0; i < keys.size(); ++i) {
        QString key = keys[i];
        QString name = nameObj[key].toString(); // 从 "name" 对象获取名称
        QString value = dataObj[key].toString(); // 从 "data" 对象获取数值

        // 设置表格内容
        table->setItem(i, 0, new QTableWidgetItem(name));
        table->setItem(i, 1, new QTableWidgetItem(value));
    }
}

    //这里只能调用TcpClient发送数s据
    // QString reply = "晓得了";
    // m_tcpClient->sendData(reply);  // 调用 TcpClient 的发送方法






MainWindow::~MainWindow()
{
    delete ui;
    if (m_number) {
        delete m_number;
    }

    if (m_funds) {
        delete m_funds;
    }

    if (m_recharge) {
        delete m_recharge;
    }
}





void MainWindow::on_pushButton_clicked()
{
    QString reply = "修改电话";
    m_tcpClient->sendData(reply);
    if (!m_number) {
        // qDebug()<< "传递指针";
        m_number = new Number(m_tcpClient,m_authKey,this);  // 传入 this 作为父窗口

    }
    m_number->show();
    m_number->raise();
    m_number->activateWindow();
}

void MainWindow::on_pushButton_2_clicked()
{
    if (!m_funds) {
        m_funds = new Funds(m_tcpClient,this);  // 传入 this 作为父窗口
    }
    m_funds->show();
    m_funds->raise();
    m_funds->activateWindow();
}


void MainWindow::on_pushButton_3_clicked()
{
    // qDebug() << m_authKey;
    if (!m_recharge) {
        m_recharge = new Recharge(m_tcpClient,m_authKey,this);  // 传入 this 作为父窗口
    }
    m_recharge->show();
    m_recharge->raise();
    m_recharge->activateWindow();
}



void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{
    // qDebug() << "被点击";
}

// void MainWindow::on_pushButton_22_clicked()
// {
//     // qDebug() <<"被点击";
//     win_time = !win_time;
//     ui->calendarWidget->setVisible(win_time);
//     ui->calendarWidget_2->setVisible(win_time);
// }


//-----------------



void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    ui->dateEdit->setDate(date);
}


void MainWindow::on_calendarWidget_2_clicked(const QDate &date)
{
    ui->dateEdit_2->setDate(date);
}



void MainWindow::on_pushButton_4_clicked()
{

    QString  comboBoxValue = ui -> comboBox ->currentText();
    QString  comboBoxValue2 = ui -> comboBox_2 ->currentText();
    int currentValue = ui -> spinBox->value();
    QString rowCountStr = QString::number(currentValue);
    int currentValue2 = ui -> spinBox_2->value();
    QString rowCountStr2 = QString::number(currentValue2);


    int rowCount = ui -> tableWidget_6->rowCount();
    int colCount = ui -> tableWidget_6->columnCount();
    // qDebug() << comboBoxValue << comboBoxValue2 << currentValue << currentValue2;
    for (int i = 0; i < rowCount; ++i) {
        QTableWidgetItem *item1 = ui -> tableWidget_6->item(i, 0);
        QString item = item1->text();
        if (item == comboBoxValue){
            QTableWidgetItem *item2 = ui -> tableWidget_6->item(i, 1);
            QTableWidgetItem *item3 = ui -> tableWidget_6->item(i, 2);
            QString item22 = item2 -> text();
            QString item33 = item3 -> text();
            QString reply = "请求交易:"+m_authKey+":"+comboBoxValue+":"+comboBoxValue2+":"+rowCountStr+":"+rowCountStr2+":"+item33;
            m_tcpClient->sendData(reply);
            break;
        }


    }

    // tcpClient->sendData(reply);
}


void MainWindow::on_pushButton_23_clicked()
{
    // if (!tcpClient->isConnected()) {

    //     qDebug() << "TCP 未连接，尝试重新连接.m_..";

    //     tcpClient->connectToServer("127.0.0.1", 1234);

    // }

    QString reply = "请求查询";
    tcpClient->sendData(reply);
    // m_tcpClient->sendData(reply);
}

void MainWindow::on_pushButton_34_clicked()
{
    //这里需要打开一个窗口
    SubWindow *subWindow = new SubWindow(this);  // 创建子窗口
    // 连接子窗口的信号到主窗口的槽函数
    bool connected =  connect(subWindow, &SubWindow::dataSent, this, &MainWindow::handleDataFromSub);
    // 显示子窗口（模态方式，阻止主窗口操作）
    qDebug() << "信号槽连接状态:" << connected;  // 输出连接状态
    subWindow->exec();
}
//？虽然没什么用 但不能删，否则编译不过
void MainWindow::openSubWindow() {


    // 函数实现代码

    // 例如，创建一个子窗口并显示

}
void MainWindow::handleDataFromSub(int number) {

    // 接收子窗口返回的数据并显示
    qDebug() << "子窗口返回的数据:" << number;  // 输出连接状态
    QString numstr = QString::number(number);
    // resultLabel->setText(QString("子窗口返回的数据: %1").arg(number));
    // 1. 遍历所有行，查找被选中的RadioButton
    QList<int> selectedRows;
    for (int row = 0; row < ui->tableWidget_3->rowCount(); ++row) {
        // 获取RadioButton控件
        QWidget* widget = ui->tableWidget_3->cellWidget(row, 0); // 假设RadioButton在第0列
        if (widget) {
            QRadioButton* radioButton = widget->findChild<QRadioButton*>();
            if (radioButton && radioButton->isChecked()) {
                selectedRows.append(row);
            }
        }
    }
    // 2. 如果没有选中的RadioButton
    if (selectedRows.isEmpty()) {
        qDebug() << "没有选中的RadioButton";
        return;
    }
    // 3. 遍历所有选中的行并打印数据
    QList<QStringList> sendDataList;
    for (int row : selectedRows) {
        // 获取各列数据
        QString order1 = ui->tableWidget_3->item(row, 1)->text();
        QString order2 = ui->tableWidget_3->item(row, 2)->text();
        QString orderId = ui->tableWidget_3->item(row, 3)->text();
        QString price = ui->tableWidget_3->item(row, 4)->text();
        QString num = ui->tableWidget_3->item(row, 5)->text();
        QString quantity = ui->tableWidget_3->item(row, 6)->text();
        QString quantity2 = ui->tableWidget_3->item(row, 7)->text();
        QString quantity3 = ui->tableWidget_3->item(row, 8)->text();
        sendDataList.append(QStringList() << order1 << order2 <<orderId << price << num << quantity << quantity2 << quantity3 << numstr);
        // 打印数据
        // qDebug() << "订单编号:" << orderId;
        // 如果需要获取RadioButton状态（虽然已经知道是选中的）
        // 可以再次验证：
        QWidget* widget = ui->tableWidget_3->cellWidget(row, 0);
        if (widget) {
            QRadioButton* radioButton = widget->findChild<QRadioButton*>();
            if (radioButton) {
                qDebug() << "RadioButton确认选中状态:" << radioButton->isChecked();
            }
        }
    }
    QString finalData;
    for (const QStringList& row : sendDataList) {
        // 将每行的数据用逗号连接
        QString rowStr = row.join(",");
        finalData.append(rowStr + "\n");  // 每行末尾加换行符
    }
    QString reply = "请求平仓:"+m_authKey+":"+finalData;
    m_tcpClient->sendData(reply);

}



void MainWindow::on_pushButton_33_clicked()
{
    // 1. 遍历所有行，查找被选中的RadioButton
    QList<int> selectedRows;
    for (int row = 0; row < ui->tableWidget_2->rowCount(); ++row) {
        // 获取RadioButton控件
        QWidget* widget = ui->tableWidget_2->cellWidget(row, 0); // 假设RadioButton在第0列
        if (widget) {
            QRadioButton* radioButton = widget->findChild<QRadioButton*>();
            if (radioButton && radioButton->isChecked()) {
                selectedRows.append(row);
            }
        }
    }
    // 2. 如果没有选中的RadioButton
    if (selectedRows.isEmpty()) {
        qDebug() << "没有选中的RadioButton";
        return;
    }
    // 3. 遍历所有选中的行并打印数据
    QList<QStringList> sendDataList;
    for (int row : selectedRows) {
        // 获取各列数据

        QString orderId = ui->tableWidget_2->item(row, 3)->text();

        sendDataList.append(QStringList() << orderId );
        // 打印数据
        // qDebug() << "订单编号:" << orderId;
        // 如果需要获取RadioButton状态（虽然已经知道是选中的）
        // 可以再次验证：
        QWidget* widget = ui->tableWidget_2->cellWidget(row, 0);
        if (widget) {
            QRadioButton* radioButton = widget->findChild<QRadioButton*>();
            if (radioButton) {
                qDebug() << "RadioButton确认选中状态:" << radioButton->isChecked();
            }
        }
    }
    QString finalData;
    for (const QStringList& row : sendDataList) {
        // 将每行的数据用逗号连接
        QString rowStr = row.join(",");
        finalData.append(rowStr + "\n");  // 每行末尾加换行符
    }
    QString reply = "请求委托撤单:"+m_authKey+":"+finalData;
    qDebug() << "RadioButton确认选中状态:" << reply;
    m_tcpClient->sendData(reply);
}


void MainWindow::on_pushButton_38_clicked()
{
    // 1. 遍历所有行，查找被选中的RadioButton
    QList<int> selectedRows;
    for (int row = 0; row < ui->tableWidget_7->rowCount(); ++row) {
        // 获取RadioButton控件
        QWidget* widget = ui->tableWidget_7->cellWidget(row, 0); // 假设RadioButton在第0列
        if (widget) {
            QRadioButton* radioButton = widget->findChild<QRadioButton*>();
            if (radioButton && radioButton->isChecked()) {
                selectedRows.append(row);
            }
        }
    }
    // 2. 如果没有选中的RadioButton
    if (selectedRows.isEmpty()) {
        qDebug() << "没有选中的RadioButton";
        return;
    }
    // 3. 遍历所有选中的行并打印数据
    QList<QStringList> sendDataList;
    for (int row : selectedRows) {
        // 获取各列数据

        QString orderId1 = ui->tableWidget_7->item(row, 1)->text();
        QString orderId2 = ui->tableWidget_7->item(row, 2)->text();
        QString orderId3 = ui->tableWidget_7->item(row, 3)->text();
        QString orderId4 = ui->tableWidget_7->item(row, 4)->text();
        QString orderId5 = ui->tableWidget_7->item(row, 5)->text();
        QString orderId6 = ui->tableWidget_7->item(row, 6)->text();
        QString orderId7 = ui->tableWidget_7->item(row, 7)->text();
        QString orderId8 = ui->tableWidget_7->item(row, 8)->text();


        sendDataList.append(QStringList() << orderId1 << orderId2 << orderId3 << orderId4 << orderId5<< orderId6 <<orderId7 << orderId8 );
        // 打印数据
        // qDebug() << "订单编号:" << orderId;
        // 如果需要获取RadioButton状态（虽然已经知道是选中的）
        // 可以再次验证：

        QWidget* widget = ui->tableWidget_7->cellWidget(row, 0);
        if (widget) {
            QRadioButton* radioButton = widget->findChild<QRadioButton*>();
            if (radioButton) {
                qDebug() << "RadioButton确认选中状态:" << radioButton->isChecked();
            }
        }
    }
    QString finalData;
    for (const QStringList& row : sendDataList) {
        // 将每行的数据用逗号连接
        QString rowStr = row.join(",");
        finalData.append(rowStr + "\n");  // 每行末尾加换行符
    }
    QString reply = "请求平仓撤单:"+m_authKey+":"+finalData;
    qDebug() << "RadioButton确认选中状态:" << reply;
    m_tcpClient->sendData(reply);
}


void MainWindow::on_pushButton_22_clicked()
{
    win_time = !win_time;
        ui->calendarWidget->setVisible(win_time);
        ui->calendarWidget_2->setVisible(win_time);
}


// void MainWindow::on_calendarWidget_activated(const QDate &date)
// {

// }


void MainWindow::on_pushButton_6_clicked()
{
    qDebug() << "退出登录";
    QString program = QCoreApplication::applicationFilePath();
    QStringList arguments = QCoreApplication::arguments();
    arguments.removeFirst(); // 移除程序名本身

    // 使用 QProcess 启动新的程序实例
    QProcess::startDetached(program, arguments);

    // 退出当前程序
    QCoreApplication::quit();
}


void MainWindow::on_pushButton_7_clicked()
{
    // qDebug() << "刷新";
    QString reply = "请求刷新:"+m_authKey;
    qDebug() << "刷新:";
    m_tcpClient->sendData(reply);
}


void MainWindow::on_pushButton_9_clicked()
{
     this->showMinimized(); // 最小化当前窗口
}


void MainWindow::on_pushButton_8_clicked()
{
    this->close();
}

