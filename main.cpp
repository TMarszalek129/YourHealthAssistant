#include <iostream>
#include <QApplication>
#include <QPushButton>
#include <QDebug>

#include "include/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    std::cout<< '\n'<<"Hello World!\n";
    MainWindow w;
    w.show();

    return app.exec();
}
