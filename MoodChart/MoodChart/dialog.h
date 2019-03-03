#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void okay_click(const QString& fileName);

private slots:
    void accept() override;

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
