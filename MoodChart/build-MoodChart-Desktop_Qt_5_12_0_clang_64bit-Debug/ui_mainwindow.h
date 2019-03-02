/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_New;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableWidget *table;
    QFrame *legend;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *legendLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menu_View;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(834, 568);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QString::fromUtf8("action_New"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        table = new QTableWidget(centralWidget);
        if (table->columnCount() < 11)
            table->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        if (table->rowCount() < 30)
            table->setRowCount(30);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table->setVerticalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table->setVerticalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table->setVerticalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table->setVerticalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table->setVerticalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        table->setVerticalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        table->setVerticalHeaderItem(8, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        table->setVerticalHeaderItem(9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        table->setVerticalHeaderItem(10, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        table->setVerticalHeaderItem(11, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        table->setVerticalHeaderItem(12, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        table->setVerticalHeaderItem(13, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        table->setVerticalHeaderItem(14, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        table->setVerticalHeaderItem(15, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        table->setVerticalHeaderItem(16, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        table->setVerticalHeaderItem(17, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        table->setVerticalHeaderItem(18, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        table->setVerticalHeaderItem(19, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        table->setVerticalHeaderItem(20, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        table->setVerticalHeaderItem(21, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        table->setVerticalHeaderItem(22, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        table->setVerticalHeaderItem(23, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        table->setVerticalHeaderItem(24, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        table->setVerticalHeaderItem(25, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        table->setVerticalHeaderItem(26, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        table->setVerticalHeaderItem(27, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        table->setVerticalHeaderItem(28, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        table->setVerticalHeaderItem(29, __qtablewidgetitem40);
        table->setObjectName(QString::fromUtf8("table"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy);
        table->horizontalHeader()->setCascadingSectionResizes(false);
        table->horizontalHeader()->setDefaultSectionSize(30);
        table->horizontalHeader()->setMinimumSectionSize(30);
        table->horizontalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(table, 0, 0, 1, 1);

        legend = new QFrame(centralWidget);
        legend->setObjectName(QString::fromUtf8("legend"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(legend->sizePolicy().hasHeightForWidth());
        legend->setSizePolicy(sizePolicy1);
        legend->setFrameShape(QFrame::StyledPanel);
        legend->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(legend);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 1);

        legendLayout = new QVBoxLayout();
        legendLayout->setSpacing(6);
        legendLayout->setObjectName(QString::fromUtf8("legendLayout"));

        gridLayout_5->addLayout(legendLayout, 1, 0, 1, 1);


        gridLayout->addWidget(legend, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 834, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuFile->addAction(action_New);
        menuFile->addSeparator();
        menuFile->addAction(action_Quit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Quit->setText(QApplication::translate("MainWindow", " &Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_New->setText(QApplication::translate("MainWindow", "&New", nullptr));
#ifndef QT_NO_SHORTCUT
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Jan.", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Feb", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Mar", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Apr", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "May", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "June", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "July", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Aug", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Sept", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Oct", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Dec", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = table->verticalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = table->verticalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = table->verticalHeaderItem(3);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = table->verticalHeaderItem(4);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = table->verticalHeaderItem(5);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = table->verticalHeaderItem(6);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = table->verticalHeaderItem(7);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = table->verticalHeaderItem(8);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = table->verticalHeaderItem(9);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = table->verticalHeaderItem(10);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = table->verticalHeaderItem(11);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = table->verticalHeaderItem(12);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = table->verticalHeaderItem(13);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = table->verticalHeaderItem(14);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = table->verticalHeaderItem(15);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = table->verticalHeaderItem(16);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = table->verticalHeaderItem(17);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = table->verticalHeaderItem(18);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = table->verticalHeaderItem(19);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "20", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = table->verticalHeaderItem(20);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = table->verticalHeaderItem(21);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "22", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = table->verticalHeaderItem(22);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = table->verticalHeaderItem(23);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "24", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = table->verticalHeaderItem(24);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = table->verticalHeaderItem(25);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "26", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = table->verticalHeaderItem(26);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "27", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = table->verticalHeaderItem(27);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "28", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = table->verticalHeaderItem(28);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "30", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = table->verticalHeaderItem(29);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "31", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", nullptr));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
