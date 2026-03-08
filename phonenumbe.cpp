#include "phonenumbe.h"

// #include "form.h"
// #include "ui_form.h"

PhoneNumbe::PhoneNumbe(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PhoneNumbe)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}




PhoneNumbe::PhoneNumbe(QObject *parent)
    : QAbstractItemModel(parent)
{}

QVariant PhoneNumbe::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex PhoneNumbe::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex PhoneNumbe::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int PhoneNumbe::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int PhoneNumbe::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant PhoneNumbe::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
