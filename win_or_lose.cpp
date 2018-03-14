#include "win_or_lose.h"
#include "ui_win_or_lose.h"
#include <QCloseEvent>
Win_or_Lose::Win_or_Lose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Win_or_Lose)
{

    ui->setupUi(this);
    ui->time_check->setVisible(false);
    ui->time_from_start->setVisible(false);
}
void Win_or_Lose::check(){
    ui->Save1->setVisible(false);
    ui->Save2->setVisible(false);
    ui->Save3->setVisible(false);
    QString s = QString::number(time);
    ui->time_check->setText(s);
    ui->time_check->setVisible(true);
    ui->time_from_start->setVisible(true);

    if(lang==1){
            if(check_status==0){
            ui->label->setText("Ты выиграл");
            } else if(check_status==1) {
            ui->label->setText("Ты проиграл");
            }
            ui->time_from_start->setText("Секунд со старта игры:");
        }
    else{
    if(check_status==0){
    ui->label->setText("You won");
    } else if(check_status==1) {
    ui->label->setText("You lose");
    }
    }
}


Win_or_Lose::~Win_or_Lose()
{
    delete ui;
}

void Win_or_Lose::on_Save1_clicked()
{
     save_change="save1.txt";
     Win_or_Lose::close();
}
void Win_or_Lose::on_Save2_clicked()
{
     save_change="save2.txt";
      Win_or_Lose::close();
}
void Win_or_Lose::on_Save3_clicked()
{
    save_change="save3.txt";
     Win_or_Lose::close();
}
void Win_or_Lose::closeEvent(QCloseEvent *bar){
    save_change="save0.txt";
    bar->accept();
     Win_or_Lose::close();

}
