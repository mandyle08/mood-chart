#include "legenditem.h"
#include "ui_legenditem.h"

legendItem::legendItem(QWidget *parent, const QColor &color, const QString &label) :
    QWidget(parent),
    ui(new Ui::legendItem)
{
    ui->setupUi(this);

    setColor(color);
    setLabel(label);

}

legendItem::~legendItem()
{
    delete ui;
}

void legendItem::setLabel(const QString &value)
{
    //set label
    ui->label->setText(value);

}

void legendItem::setColor(const QColor &value)
{
    QPalette pal = palette();
    pal.setColor(QPalette::Background, value);
    ui->frame->setAutoFillBackground(true);
    ui->frame->setPalette(pal);
}
