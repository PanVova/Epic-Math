#include "start.h"
#include "ui_start.h"
#include "secondwindow.h"
Start::Start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
}

Start::~Start()
{
    delete ui;
}

void Start::on_play_clicked()
{
    check=1;
    this->close();
}

void Start::on_exit_clicked()
{
    this->close();
}
