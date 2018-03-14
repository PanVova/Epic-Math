#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QTranslator>
namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{

    Q_OBJECT

public:
    int language=0;
    int check_status_label=-1;
    void For_start();
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private slots:
    void time_for_win_lose();
    void checkHealth();
    void Timer(int miliseconds);
    void GetLabel();
    void Update_Label();
    void Update_Label_Idle();
    void Update_Label_Attack_Me();
    void Update_Label_Attack_Enemy();
    void Health();
    void save(int * array,QString * array1,QString name);
    void load(QString name);
    std::string * database(int level);
    void on_TrueButton_clicked();
    void on_Button1_clicked();
    void on_Button2_clicked();
    int math_random_answer();

    void random();
    void on_save_clicked();
    void on_load_clicked();
    void on_dial_valueChanged(int value);
    void on_mixer_valueChanged(int value);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_rus_clicked();

    void on_eng_clicked();
    void keyPressEvent(QKeyEvent * event);

private:
    QTime h;
    int seconds_for_game=0;
    QTimer * timer = new QTimer();
    QTimer * timer_for_win_lose = new QTimer();
    QTimer * timer_label = new QTimer();
    QTimer * timer_for_characters = new QTimer();
    QMediaPlayer * sound = new QMediaPlayer();
    QMediaPlayer * music = new QMediaPlayer();
    int sprite=0;
    int miliseconds=8000;
    //Level:
    int level = 1;
    //Coins:
    int coins=0;
    //Count
    int count=0;
    //Health:
    int my_health=100;
    int enemy_health=0;
    //Recovery
    int recovery=5;
    //Power:
    int my_power=10;
    int enemy_power=0;
    //Name:
    QString my_name="Vova";
    QString enemy_name="Sasha";
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
