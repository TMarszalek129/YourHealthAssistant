//
// Created by lenovo on 07.07.2025.
//

#ifndef CALENDARWIDGET_H
#define CALENDARWIDGET_H

#include <QWidget>
#include <QGroupBox>
#include <QCalendarWidget>
#include <QGridLayout>
#include <QTextCharFormat>


class CalendarWidget : public QGroupBox {
    Q_OBJECT
    public:
    CalendarWidget(const QString &title, QWidget *parent = nullptr);
    private:

    // void createGroupBox();
    void reformatCalendarPage();

    // QGroupBox *groupBox;
    QCalendarWidget *calendar;
    QGridLayout *calendarLayout;

};



#endif //CALENDARWIDGET_H
