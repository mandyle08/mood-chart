#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QInputDialog>
#include <QDebug>
#include <QTableWidget>
#include <QPalette>
#include "mood.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_Quit_triggered();
    void on_table_customContextMenuRequested(const QPoint &pos);
    void prompt_for_mood();
    void slot_mood_choice(const QString &choice);

private:
    Ui::MainWindow *ui;
    QVector <Mood> moods;
    void addMood(const Mood &mood);
    //void removeMood();
    void setColor(const int &x, const int &y, const QColor &color);
    void setMood(const int &x, const int &y, const Mood &mood);
    void populateColor(const int &x, const int &y,const Mood &mood);
    int selectedMoodIndex;
};


#endif // MAINWINDOW_H
