#ifndef START_H
#define START_H

#include <QDialog>

namespace Ui {
class Start;
}

class Start : public QDialog
{
    Q_OBJECT

public:
    int check=0;
    explicit Start(QWidget *parent = 0);
    ~Start();

private slots:
    void on_play_clicked();

    void on_exit_clicked();

private:
    Ui::Start *ui;
};

#endif // START_H
