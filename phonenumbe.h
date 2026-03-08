#ifndef PHONENUMBE_H
#define PHONENUMBE_H
#include <QWidget>
#include <QAbstractItemModel>

class PhoneNumbe : public QWidget
{
    Q_OBJECT  // 必须包含 Q_OBJECT 宏，如果使用 Qt 的信号槽机制

public:

    explicit PhoneNumbe(QWidget *parent = nullptr);  // 构造函数
    ~PhoneNumbe();  // 析构函数

    // 可以在这里添加你的自定义成员函数和变量

};

#endif // PHONENUMBER_H
