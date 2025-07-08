#include <iostream>
#include <QApplication>
#include <QPushButton>
#include <QDebug>

#include "include/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    std::cout<< '\n'<<"Hello World!\n";
    // QPushButton button("Kliknij mnie!");
    // button.resize(200, 100);
    // button.show();
    // CalendarWidget calendar;
    // calendar.show();
    MainWindow w;
    w.show();

    return app.exec();
}
