//
// Created by lenovo on 07.07.2025.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QWidget>
#include <QGroupBox>
#include <QGridLayout>
#include <QLabel>
#include <QCalendarWidget>
#include <QTimer>

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT
    public:
    MainWindow(QWidget * parent=Q_NULLPTR);
    ~MainWindow();
    private slots:
    void on_pushButton_clicked();

    private:
    Ui::MainWindow * ui;

};



#endif //MAINWINDOW_H
