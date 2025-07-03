#include <iostream>
#include <QApplication>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    std::cout<< '\n'<<"Hello World!\n";
    QPushButton button("Kliknij mnie!");
    button.resize(200, 100);
    button.show();

    return app.exec();
}
