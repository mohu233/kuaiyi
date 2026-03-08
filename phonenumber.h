#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <QMainWindow>
// #include <QAbstractItemModel>

// class PhoneNumber : public QMainWindow
// {
//     Q_OBJECT

// public:
//     explicit PhoneNumber(QObject *parent = nullptr);

//     // Header:
//     QVariant headerData(int section,
//                         Qt::Orientation orientation,
//                         int role = Qt::DisplayRole) const override;

//     // Basic functionality:
//     QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
//     QModelIndex parent(const QModelIndex &index) const override;

//     int rowCount(const QModelIndex &parent = QModelIndex()) const override;
//     int columnCount(const QModelIndex &parent = QModelIndex()) const override;

//     QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

// private:
// };

// #endif // PHONENUMBER_H




#ifndef MAINWIN/*DOW_H
#define MAINWINDOW_H*/

#include <QMainWindow>
// #include "phonenumber.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class PhoneNumber : public QMainWindow
{
    Q_OBJECT

public:
    PhoneNumber(QWidget *parent = nullptr);
    ~PhoneNumber();

private slots:
    void on_pushButton_clicked();

private:
    // Ui::MainWindow *ui;
    PhoneNumber *m_phonenumber;
};
#endif // MAINWINDOW_H

