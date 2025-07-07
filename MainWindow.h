//
// Created by lenovo on 07.07.2025.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "CalendarWidget.h"
#include <QWidget>


class MainWindow : public QWidget{
    Q_OBJECT
    public:
    MainWindow(QWidget * parent=Q_NULLPTR);
    private:
    void createCalendar();
    void reformatCalendarPage();

    CalendarWidget *calendarGroupBox;
    QGridLayout *gridLayout;
    QCalendarWidget *calendar;
};



#endif //MAINWINDOW_H
