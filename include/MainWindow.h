//
// Created by lenovo on 07.07.2025.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QGroupBox>
#include <QGridLayout>
#include <QLabel>
#include <QCalendarWidget>


class MainWindow : public QWidget{
    Q_OBJECT
    public:
    MainWindow(QWidget * parent=Q_NULLPTR);
    private:
    void createDateTime();

    QGroupBox *dtGroupBox;
    QGridLayout *gridLayout;
    QCalendarWidget *calendar;
    QTime *time;
    QLabel *timeLabel;
};



#endif //MAINWINDOW_H
