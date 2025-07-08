//
// Created by lenovo on 07.07.2025.
//

#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    static int clicked;
    clicked++;
    ui->label->setText("Clicked: " + QString::number(clicked) + " times");
}
