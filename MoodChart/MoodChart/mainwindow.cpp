#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "legenditem.h"
#include "mood.h"
#include <QDebug>
#include "pdfconvert.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->table->verticalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);

    addMood(Mood(QColor(250,255,124), QString("Happy")));
    addMood(Mood(QColor(255,128,0), QString("Average")));
    addMood(Mood(QColor(47,131,255), QString("Depressed/Anxious")));
    addMood(Mood(QColor(117,123,134), QString("Tired")));
    addMood(Mood(QColor(36,220,79), QString("Sick")));
    addMood(Mood(QColor(252,83,83), QString("Angry")));
    addMood(Mood(Qt::transparent, QString("Clear")));


    // Intilize each cell of the table
    for(int x = 0; x < ui->table->columnCount(); x++){
        for(int y = 0; y < ui->table->rowCount(); y++){
            ui->table->setItem(y, x, new QTableWidgetItem);
        }
    }


    ui->table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    adjustSize();

    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Quit_triggered()
{
    close();
}

void MainWindow::addMood(const Mood &mood)
{
    // clears the color to null
    moods.push_back(mood);
    if(QString::compare(mood.getLabel(), "Clear"))
        ui->legendLayout->addWidget(new legendItem (nullptr, mood.getColor(), mood.getLabel()));
}

void MainWindow::setColor(const int &x, const int &y, const QColor &color)
{
    // check to see if (x,y) are in the table
    if (x < 0 || x >= ui->table->columnCount())
        return;
    if (y < 0 || y >= ui->table->rowCount())
        return;

    ui->table->item(y, x)->setBackground(color);
}

void MainWindow::setMood(const int &x, const int &y, const Mood &mood)
{
    setColor(x, y, mood.getColor());
}

void MainWindow::populateColor(const int &x, const int &y, const Mood &mood)
{
    // set color if the (x,y) are in the table
    if (x < 0 || x >= ui->table->columnCount())
        return;
    if (y < 0 || y >= ui->table->rowCount())
        return;

    ui->table->item(y, x)->setBackground(mood.getColor());
}

void MainWindow::on_table_customContextMenuRequested(const QPoint &pos)
{
   // grabbing appropriate item
   QTableWidgetItem *item = ui->table->itemAt(pos);

   // setting the context menu
   QMenu menu(tr("Context Menu"), this);
   QAction color(tr("Set Mood"), this);
   connect(&color, SIGNAL(triggered()), this, SLOT(prompt_for_mood()));
   menu.addAction(&color);

   // initialized selected mood to sentinel
   selectedMoodIndex = -1;

   // launch menu
   // keeping track of global mouse
   menu.exec(mapToGlobal(pos));

   // set x and y to appropriate table pos.
   int y = ui->table->rowAt(pos.y());
   int x = ui->table->columnAt(pos.x());


   // if they successfully selected a mood...
   if(selectedMoodIndex != -1)
        populateColor(x, y, moods.at(selectedMoodIndex));
}

void MainWindow::prompt_for_mood()
{

   QInputDialog dialog(this);
   QStringList options;

   // Register handler for selecting a mood
   connect(&dialog,SIGNAL(textValueSelected(QString)),
            this, SLOT(slot_mood_choice(QString)));

   // populate the list
   for (int x = 0; x < moods.size(); x++){
       options.append(moods.at(x).getLabel());
   }

   dialog.setComboBoxItems(options);
   dialog.exec();
}

void MainWindow::slot_mood_choice(const QString &choice)
{
    for (int x=0; x < moods.size(); x++){
        if(!QString::compare(choice,moods.at(x).getLabel())){
            selectedMoodIndex = x;
            break;
        }
    }
}

void MainWindow::print(const QString &fileName)
{

   PdfConvert* p = new PdfConvert;
   p->exportPDF(ui->table, fileName);
}

void MainWindow::on_action_Print_triggered()
{

   Dialog* d = new Dialog(this);
   connect(d,SIGNAL(okay_click(QString)),this, SLOT(print(QString)));

    d->exec();

}
