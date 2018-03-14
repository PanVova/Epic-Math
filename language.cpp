#include "language.h"
#include "ui_language.h"

Language::Language(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Language)
{
    ui->setupUi(this);
}

Language::~Language()
{
    delete ui;
}

void Language::on_rus_clicked()
{
    lang=1;
    Language::close();
}

void Language::on_eng_clicked()
{
    lang=2;
    Language::close();
}
