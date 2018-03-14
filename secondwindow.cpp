#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <iostream>
#include <ctime>
#include "dialog_for_upgrade.h"
#include "sqlite3.h"
#include "win_or_lose.h"
#include "name.h"
#include <QFile>
#include <QTextStream>
#include <QTimer>
#include <QMediaPlayer>
#include <QKeyEvent>
using namespace std;

void SecondWindow::For_start()
{
    string *smth = database(level);
    SecondWindow::enemy_name=QString::fromStdString(smth[0]);
    ui->Enemy_Name->setText(enemy_name);
}

SecondWindow::SecondWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::SecondWindow)
{
    srand(time(0));
    ui->setupUi(this);

    Name d;
    d.setModal(true);
    d.exec();

    music->setMedia(QUrl("qrc:/music/Music.mp3"));
    music->play();
    music->setVolume(0);
    ui->audio->display(0);
    sound->setVolume(25);

    if(d.on_lineEdit_editingFinished()!=NULL){
    my_name=d.on_lineEdit_editingFinished();
    } else{
         my_name="Vova";
    }

    string *smth; //DB
    smth = database(level);
    SecondWindow::enemy_name= QString::fromStdString(smth[0]);
    SecondWindow::enemy_health=stoi(smth[1]);
    SecondWindow::enemy_power=stoi(smth[2]);

QString s;
ui->progressBar1->setMaximum(enemy_health);
//Health:
  ui->progressBar->setValue(my_health);
  ui->progressBar1->setValue(enemy_health);
 //Power:
  s = QString::number(enemy_power);
  ui->Enemy_Power->setText(s);
  s = QString::number(my_power);
  ui->My_Power->setText(s);
 //Name:
  ui->Enemy_Name->setText(enemy_name);
  ui->My_Name->setText(my_name);
 //Recovery
  s = QString::number(recovery);
  ui->recovery->setText(s);

  random();
  //Level
  s = QString::number(level);
  ui->level->setText(s);

    h.start();
    Timer(miliseconds);
    QObject::connect(timer_for_characters,SIGNAL(timeout()),this,SLOT(Update_Label_Idle()));
    timer_for_characters->start(75);

    ui->Combo->setVisible(false);
    ui->Enemy_Name->setText(enemy_name);
}
void SecondWindow::save(int * array,QString * array1,QString name)
{
    QFile s(name) ;
    if(!s.open(QIODevice::WriteOnly| QFile::Text)){
        //Failed
    }
    QTextStream out(&s);
    for(int i=0;i<8;i++){
        out << array[i]<< endl;
    }
    for(int i=0;i<2;i++){
        out << array1[i] << endl;
    }
    s.flush();
    s.close();
}
void SecondWindow::load(QString name)
{
    QFile s(name);
    if(!s.open(QIODevice::ReadOnly| QFile::Text)){
        //Failed
    }
    QTextStream in(&s);
    QString string=in.readLine();

    ui->progressBar->setValue(string.toInt());
    ui->progressBar->setMaximum(string.toInt());
    string=in.readLine();
    ui->My_Power->setText(string);
    string=in.readLine();
    ui->recovery->setText(string);
    string=in.readLine();
    ui->coins->setText(string);
    string=in.readLine();
    ui->level->setText(string);
    level=string.toInt();
    string=in.readLine();
    count=string.toInt();
    string=in.readLine();
    enemy_health=string.toInt();
    ui->progressBar1->setValue(enemy_health);
    ui->progressBar1->setMaximum(enemy_health);
    string=in.readLine();
    ui->Enemy_Power->setText(string);
    string=in.readLine();
    ui->My_Name->setText(string);
    string=in.readLine();
    ui->Enemy_Name->setText(string);
    string=in.readLine();
    For_start();
    random();
    s.close();

    Update_Label_Idle();
}
std::string * SecondWindow::database(int level) {
sqlite3 *db;
int rc;
sqlite3_stmt *res;
char* name1;
char* health1;
char* power1;


if(language==1){
    rc = sqlite3_open("Enemys1.db", &db);
} else {
    rc = sqlite3_open("Enemys.db", &db);
}
char *sql = "SELECT * FROM Enemys WHERE id = ?;";
rc = sqlite3_prepare_v2(db, sql, -1, &res, 0);

sqlite3_bind_int(res, 1, level);

int step = sqlite3_step(res);
string* value = new string[3];
if (step == SQLITE_ROW) {
    name1 = (char *)sqlite3_column_text(res, 1);
    health1 = (char *)sqlite3_column_text(res, 2);
    power1 = (char *)sqlite3_column_text(res, 3);
    value[0] = name1;
    value[1] = health1;
    value[2] = power1;
}
sqlite3_finalize(res);
sqlite3_close(db);
return value;
}
SecondWindow::~SecondWindow(){delete ui;}


void SecondWindow::Timer(int miliseconds)
{
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(Health()));
    timer->start(miliseconds);
    QObject::connect(timer_label,SIGNAL(timeout()),this,SLOT(Update_Label()));
    timer_label->start(1000);
}
void SecondWindow::GetLabel()
{
    QString s;
    if(check_status_label==0){
     s="background-image: url(:/my_character/Character/Idle_00"+ QString::number(sprite)+".png);";
     ui->Character->setStyleSheet(s);
     switch(level){
     case 1:
         ui->Opponent->setGeometry(360,420,256,146);
         s="background-image: url(:/Scorpion/Scorpion/Idle__00"+ QString::number(sprite)+".png);";
         ui->Opponent->setStyleSheet(s);
         break;
     case 2:
          ui->Opponent->setGeometry(360,420,256,146);
         s="background-image: url(:/Beetle/Beetle/Idle__00"+ QString::number(sprite)+".png);";
         ui->Opponent->setStyleSheet(s);
         break;
     case 3:
         ui->Opponent->setGeometry(360,410,141,151);
         s="background-image: url(:/Goblin/Goblin/Idle_00"+ QString::number(sprite)+".png);";
         ui->Opponent->setStyleSheet(s);
         break;
     case 4:
         ui->Opponent->setGeometry(360,410,141,151);
         s="background-image: url(:/Orc/Orc/Idle_00"+ QString::number(sprite)+".png);";
         ui->Opponent->setStyleSheet(s);
         break;
     case 5:
         ui->Opponent->setGeometry(360,410,141,151);
         s="background-image: url(:/Golem/Golem/Idle_00"+ QString::number(sprite)+".png);";
         ui->Opponent->setStyleSheet(s);
         break;
     }
    } else  if(check_status_label==1){
        s="background-image: url(:/my_character/Character/Hurt_00"+ QString::number(sprite)+".png);";
        ui->Character->setStyleSheet(s);
        if(sprite==3){
            timer_for_characters->disconnect();
            sprite=0;
            QObject::connect(timer_for_characters,SIGNAL(timeout()),this,SLOT(Update_Label_Idle()));
            timer_for_characters->start(75);
        }
        switch(level){
        case 1:
            s="background-image: url(:/Scorpion/Scorpion/Sting__00"+ QString::number(sprite+2)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        case 2:
            s="background-image: url(:/Beetle/Beetle/Attack__00"+ QString::number(sprite+6)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        case 3:
            s="background-image: url(:/Goblin/Goblin/Attack_00"+ QString::number(sprite)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        case 4:
            s="background-image: url(:/Orc/Orc/Attack-1_00"+ QString::number(sprite)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        case 5:
            s="background-image: url(:/Golem/Golem/Attack-1_00"+ QString::number(sprite)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        }
    } else if(check_status_label==2){
        s="background-image: url(:/my_character/Character/Attack_00"+ QString::number(sprite)+".png);";
        ui->Character->setStyleSheet(s);
        if(sprite==7){
            timer_for_characters->disconnect();
            sprite=0;
            QObject::connect(timer_for_characters,SIGNAL(timeout()),this,SLOT(Update_Label_Idle()));
            timer_for_characters->start(75);
        }
        switch(level){
        case 1:
            s="background-image: url(:/Scorpion/Scorpion/Dead__00"+ QString::number(sprite)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        case 2:
            s="background-image: url(:/Beetle/Beetle/Dead__00"+ QString::number(sprite)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        case 3:
             ui->Opponent->setVisible(false);
            s="background-image: url(:/Goblin/Goblin/Hurt_00"+ QString::number(sprite)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        case 4:
            s="background-image: url(:/Orc/Orc/Die_00"+ QString::number(sprite)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        case 5:
            s="background-image: url(:/Golem/Golem/Die_00"+ QString::number(sprite)+".png);";
            ui->Opponent->setStyleSheet(s);
            break;
        }
    }
}
void SecondWindow::Update_Label(){
    QString  s = QString::number(timer->remainingTime()/1000);
    ui->seconds_left->setText(s);
}
void SecondWindow::Update_Label_Idle(){
    ui->Opponent->setVisible(true);
    sprite++;
    check_status_label=0;
    if(sprite==9){
        sprite=0;
    }

    if(sprite==4){
       ui->Combo->setVisible(false);
    }
GetLabel();
}
void SecondWindow::Update_Label_Attack_Me(){
     sprite++;
     check_status_label=1;
GetLabel();
}
void SecondWindow:: Update_Label_Attack_Enemy(){
    sprite++;
    check_status_label=2;
GetLabel();
}
void SecondWindow::Health()
{
    timer_for_characters->disconnect();
    sprite=0;
    QObject::connect(timer_for_characters,SIGNAL(timeout()),this,SLOT(Update_Label_Attack_Me()));
    timer_for_characters->start(75);
    my_health-=enemy_power/2;
    ui->progressBar->setValue(my_health);
    cout << my_health << endl;
    checkHealth();
    math_random_answer();
    random();


}
int SecondWindow::math_random_answer() {
    srand(time(0));
    QString test1;
    QString test2;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int div1;
    unsigned int div2;
    int * array7= new int[9];
    for(int i=0;i<=9;i++){
        array7[i]=7*i;

    }
    int * array8= new int[9];
    for(int i=0;i<=9;i++){
        array8[i]=8*i;
    }
    int * array9= new int[9];
    for(int i=0;i<=9;i++){
        array9[i]=9*i;
    }


    int symbol = 0;
    int sum = 0;

    while (true) {
        a = rand() % 100;
        b = rand() % 100;
        c = rand() % 10;
        d = rand() % 10;
        div1 = rand() % 3+1;
        switch(div1){
        case 1:
            div1=array7[rand() % 9+1];
            div2=7;
            break;
        case 2:
            div1=array8[rand() % 9+1];
            div2=8;
            break;
        case 3:
            div1=array9[rand() % 9+1];
            div2=9;
            break;
        }
        symbol = rand() % 4+1;
        switch (symbol) {
        case 1:
            sum = a + b;
            test1 = QString::number(a);
            test2 = QString::number(b);
            ui->Question->setText(test1+"+"+test2);
            return sum;
            break;
        case 2:
            sum = a - b;
            test1 = QString::number(a);
            test2 = QString::number(b);
            ui->Question->setText(test1+"-"+test2);
            return sum;
            break;
        case 3:
           sum = c * d;
           test1 = QString::number(c);
           test2 = QString::number(d);
           ui->Question->setText(test1+"*"+test2);
           return sum;
           break;
        case 4:
           sum = div1 / div2;
           test1 = QString::number(div1);
           test2 = QString::number(div2);
           ui->Question->setText(test1+"/"+test2);
           return sum;
           break;
        }
    }

}
void SecondWindow::random(){
    srand(time(0));
    int y=ui->Button1->y();
    int list[3]={234,350,460};
    int count=0;
       int x=list[rand()%3];
       ui->Button1->hide();
       ui->Button2->hide();
       ui->TrueButton->hide();
        ui->TrueButton->setGeometry(x,y,91,41);
       ui->TrueButton->show();
        if(x==list[0]){
            ui->Button1->setGeometry(list[1],y,91,41);
            count=1;
        } else if(x==list[1]){
             ui->Button1->setGeometry(list[2],y,91,41);
             count=2;
        } else if(x==list[2]){
            ui->Button1->setGeometry(list[0],y,91,41);
            count=3;
        }
         ui->Button1->show();
        if(count==1  ){
            ui->Button2->setGeometry(list[2],y,91,41);
        } else if(count==2){
             ui->Button2->setGeometry(list[0],y,91,41);
        } else if(count==3){
            ui->Button2->setGeometry(list[1],y,91,41);
        }
        ui->Button2->show();

        int first=rand() %20+1;
        int second=rand() %15+1;

        QString s = QString::number(math_random_answer());
        ui->TrueButton->setText(s);
        s = QString::number(math_random_answer()+first);
        ui->Button1->setText(s);
        s = QString::number(math_random_answer()+second);
        ui->Button2->setText(s);
}
void SecondWindow::checkHealth(){
      QString s;
      Win_or_Lose check;
      if(my_health<=0){
          music->pause();
          music->setMedia(QUrl("qrc:/music/Lose.ogg"));
          music->play();
          music->setVolume(50);
          check.check_status=1;
          check.lang=language;
          check.time=h.restart()/1000;
          check.check();

          SecondWindow::close();
          check.setModal(true);
          check.exec();
          timer->disconnect();
          timer_label->disconnect();
    } else if(enemy_health<=0){
          level++;
          sprite=0;
        if(coins>=15){
            Dialog_for_upgrade up;
            up.money_method(coins);
            up.setModal(true);
            up.exec();
            coins=up.money;
            s = QString::number(coins);
            ui->coins->setText(s);
            cout <<"up:"<<up.upgrade<< endl;


            if(up.upgrade==1){
                my_health+=8;
                ui->progressBar->setValue(my_health);
            } else if(up.upgrade==2){
                my_power+=2;
                 s = QString::number(my_power);
                 ui->My_Power->setText(s);
            }else if(up.upgrade==3){
                recovery+=2;
                 s = QString::number(recovery);
                 ui->recovery->setText(s);
            }
        }
        if(my_health+20<=100){
            my_health+=20;
        } else {
            my_health=100;
        }
        switch(level){
        case 2:
            miliseconds-=650;
            break;
        case 3:
            miliseconds-=650;
            break;
        case 4:
            miliseconds-=650;
            break;
        case 5:
            miliseconds-=650;
            break;
        case 6:
            check.lang=language;
            music->pause();
            music->setMedia(QUrl("qrc:/music/Win.mp3"));
            music->play();
            music->setVolume(50);
            check.check_status=0;
            check.time=h.restart()/1000;
            check.check();
            SecondWindow::close();
            check.setModal(true);
            check.exec();
            break;
        }
        ui->progressBar->setValue(my_health);
        if(level<=5){
        string *smth = database(level);
        SecondWindow::enemy_name=QString::fromStdString(smth[0]);
        SecondWindow::enemy_health=stoi(smth[1]);
        SecondWindow::enemy_power=stoi(smth[2]);
        ui->progressBar->setValue(my_health);
        ui->progressBar1->setMaximum(enemy_health);
        ui->progressBar1->setValue(enemy_health);
        s=QString::number(enemy_power);
        ui->Enemy_Power->setText(s);
        ui->Enemy_Name->setText(enemy_name);
        s = QString::number(level);
        ui->level->setText(s);
        }
    }
}
void SecondWindow::on_TrueButton_clicked()
{
     timer->disconnect();
     timer_label->disconnect();
     timer_for_characters->disconnect();
     sound->setMedia(QUrl("qrc:/music/Attack.ogg"));
     sound->play();
     enemy_health=enemy_health-my_power;
     ui->progressBar1->setValue(enemy_health);
     count++;
     coins+=2;
     cout << count << endl;
    if(count==3){
       if (my_health + recovery <= 100) {
            my_health += recovery;
            ui->progressBar->setValue(my_health);
       }
       else{my_health=100; ui->progressBar->setValue(my_health);}
       ui->Combo->setVisible(true);
         coins += 3;
         count = 0;
    }
     QString s=QString::number(coins);
     ui->coins->setText(s);
     checkHealth();

     sprite=0;
     QObject::connect(timer_for_characters,SIGNAL(timeout()),this,SLOT(Update_Label_Attack_Enemy()));
     timer_for_characters->start(75);
     Timer( miliseconds);
     random();
}
void SecondWindow::on_Button1_clicked()
{
    timer->disconnect();
    timer_label->disconnect();
    timer_for_characters->disconnect();
    sound->setMedia(QUrl("qrc:/music/Defend.ogg"));
    sound->play();
    my_health=my_health-enemy_power;
    ui->progressBar->setValue(my_health);
    checkHealth();
    count=0;
    sprite=0;
    QObject::connect(timer_for_characters,SIGNAL(timeout()),this,SLOT(Update_Label_Attack_Me()));
    timer_for_characters->start(75);
    Timer( miliseconds);
    random();
}
void SecondWindow::on_Button2_clicked()
{
    timer->disconnect();
    timer_label->disconnect();
    timer_for_characters->disconnect();
    sound->setMedia(QUrl("qrc:/music/Defend.ogg"));
    sound->play();
    my_health=my_health-enemy_power;
    ui->progressBar->setValue(my_health);
    checkHealth();
    count=0;
    sprite=0;
    QObject::connect(timer_for_characters,SIGNAL(timeout()),this,SLOT(Update_Label_Attack_Me()));
    timer_for_characters->start(75);
    Timer( miliseconds);
    random();
}
void SecondWindow::on_mixer_valueChanged(int value)
{
    ui->audio->display(value);
    music->setVolume(value);
    sound->setVolume(value*2);
}
void SecondWindow::keyPressEvent(QKeyEvent * event)
{
    if(event->key()==Qt::Key_F9){
        timer->disconnect();
        timer_label->disconnect();
        Win_or_Lose d;
        d.setModal(true);
        d.exec();
        load(d.save_change);
        Timer(miliseconds);
    }

    if(event->key()==Qt::Key_F5){
        timer->disconnect();
        timer_label->disconnect();
        int * array= new int[12];
        array[0]=my_health;
        array[1]=my_power;
        array[2]=recovery;
        array[3]=coins;
        array[4]=level;
        array[5]=count;
        array[6]=enemy_health;
        array[7]=enemy_power;
        QString * array1= new QString[2];
        array1[0]=my_name;
        array1[1]=enemy_name;
        Win_or_Lose d;
        d.setModal(true);
        d.exec();
        save(array,array1,d.save_change);
        Timer(miliseconds);
    }
}
