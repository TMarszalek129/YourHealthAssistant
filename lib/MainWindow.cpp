//
// Created by lenovo on 07.07.2025.
//

#include "../include/MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
    createDateTime();

    setWindowTitle(tr("Your Health Assistant"));
}
void MainWindow::createDateTime() {
    dtGroupBox = new QGroupBox(tr("DateTime"));
    calendar = new QCalendarWidget;
    time = new QTime();
    timeLabel = new QLabel();
    time->currentTime();
    timeLabel->setText(time->toString("hh:mm:ss"));
    calendar->setMinimumDate(QDate(1900, 1, 1));
    calendar->setMaximumDate(QDate(3000, 1, 1));
    calendar->setGridVisible(true);

    gridLayout = new QGridLayout;
    gridLayout->addWidget(calendar, 0, 0);
    gridLayout->addWidget(timeLabel, 0, 1);
    gridLayout->setSizeConstraint(QLayout::SetFixedSize);
    setLayout(gridLayout);
}
