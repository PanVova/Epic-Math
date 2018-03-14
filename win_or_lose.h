#ifndef WIN_OR_LOSE_H
#define WIN_OR_LOSE_H

#include <QDialog>

namespace Ui {
class Win_or_Lose;
}

class Win_or_Lose : public QDialog
{
    Q_OBJECT

public:
    int time=0;
    int check_status=-1;
    int lang;
    QString save_change;
    void check();

    explicit Win_or_Lose(QWidget *parent = 0);
    ~Win_or_Lose();

private slots:

    void on_Save1_clicked();
    void on_Save2_clicked();
    void on_Save3_clicked();
    void on_Win_or_Lose_destroyed();
    void closeEvent(QCloseEvent *bar);
private:
    Ui::Win_or_Lose *ui;
};

#endif // WIN_OR_LOSE_H
