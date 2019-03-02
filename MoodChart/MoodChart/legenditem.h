#ifndef LEGENDITEM_H
#define LEGENDITEM_H

#include <QWidget>

namespace Ui {
class legendItem;
}

class legendItem : public QWidget
{
    Q_OBJECT

public:
    explicit legendItem(QWidget *parent = nullptr, const QColor &color = Qt::white, const QString &label = "Null");
    ~legendItem();

    void setLabel(const QString &value);

    void setColor(const QColor &value);

private:
    Ui::legendItem *ui;
};

#endif // LEGENDITEM_H
