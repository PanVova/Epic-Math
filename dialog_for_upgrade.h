#ifndef DIALOG_FOR_UPGRADE_H
#define DIALOG_FOR_UPGRADE_H

#include <QDialog>

namespace Ui {
class Dialog_for_upgrade;
}

class Dialog_for_upgrade : public QDialog
{
    Q_OBJECT

public:
     int upgrade=0;
     int money=0;
     explicit Dialog_for_upgrade(QWidget *parent = 0);
     void money_method(int coins);
    ~Dialog_for_upgrade();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog_for_upgrade *ui;
};

#endif // DIALOG_FOR_UPGRADE_H
