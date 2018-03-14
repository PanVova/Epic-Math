#include "dialog_for_upgrade.h"
#include "ui_dialog_for_upgrade.h"
#include "secondwindow.h"
Dialog_for_upgrade::Dialog_for_upgrade(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_for_upgrade)
{
    ui->setupUi(this);
}

Dialog_for_upgrade::~Dialog_for_upgrade()
{
    delete ui;
}
void Dialog_for_upgrade::money_method(int coins){
    money=coins;
}
void Dialog_for_upgrade::on_pushButton_clicked()
{


    if(money>=15){
        money-=15;
        upgrade=1;
        Dialog_for_upgrade::close();
    }
}

void Dialog_for_upgrade::on_pushButton_2_clicked()
{
    if(money>=25){
        money-=25;
        upgrade=2;
       Dialog_for_upgrade::close();
    } else{
       ui->label->setText("You don't have enough money");
    }
}

void Dialog_for_upgrade::on_pushButton_3_clicked()
{
    if(money>=20){
        money-=20;
        upgrade=3;
        Dialog_for_upgrade::close();
    } else{
       ui->label->setText("You don't have enough money");
    }
}

void Dialog_for_upgrade::on_pushButton_4_clicked()
{
    Dialog_for_upgrade::close();
}
