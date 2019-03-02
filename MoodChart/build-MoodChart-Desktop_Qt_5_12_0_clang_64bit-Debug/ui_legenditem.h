/********************************************************************************
** Form generated from reading UI file 'legenditem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGENDITEM_H
#define UI_LEGENDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_legendItem
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *label;

    void setupUi(QWidget *legendItem)
    {
        if (legendItem->objectName().isEmpty())
            legendItem->setObjectName(QString::fromUtf8("legendItem"));
        legendItem->resize(400, 300);
        gridLayout = new QGridLayout(legendItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(legendItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(30, 30));
        frame->setMaximumSize(QSize(30, 30));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        label = new QLabel(legendItem);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        retranslateUi(legendItem);

        QMetaObject::connectSlotsByName(legendItem);
    } // setupUi

    void retranslateUi(QWidget *legendItem)
    {
        legendItem->setWindowTitle(QApplication::translate("legendItem", "Form", nullptr));
        label->setText(QApplication::translate("legendItem", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class legendItem: public Ui_legendItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGENDITEM_H
