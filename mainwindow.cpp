#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Button0_released()
{

}

void MainWindow::on_ButtonDiv_released()
{

}

void MainWindow::on_ButtonPoint_released()
{

}
