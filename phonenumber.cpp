#include "phonenumber.h"

PhoneNumber::PhoneNumber(QObject *parent)
    : QAbstractItemModel(parent)
{}

QVariant PhoneNumber::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex PhoneNumber::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex PhoneNumber::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int PhoneNumber::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int PhoneNumber::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant PhoneNumber::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
