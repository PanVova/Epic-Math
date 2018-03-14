#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->pushButton->setStyleSheet(" background: rgb(255, 255, 255); ");
     ui->pushButton_2->setStyleSheet(" background: rgb(255, 255, 255); ");
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    this->close();
    SecondWindow d;

}

void MainWindow::on_pushButton_2_clicked()
{   this->close();
}
