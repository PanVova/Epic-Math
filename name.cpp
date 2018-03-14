#include "name.h"
#include "ui_name.h"

Name::Name(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Name)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet(" background: rgb(255, 255, 255); ");
}

Name::~Name()
{
    delete ui;
}




QString Name::on_lineEdit_editingFinished()
{
    return ui->lineEdit->text();

}

void Name::on_pushButton_clicked()
{
    Name::close();
}
