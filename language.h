#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <QDialog>

namespace Ui {
class Language;
}

class Language : public QDialog
{
    Q_OBJECT

public:
    int lang=0;
    explicit Language(QWidget *parent = 0);
    ~Language();

private slots:
    void on_rus_clicked();

    void on_eng_clicked();

private:
    Ui::Language *ui;
};

#endif // LANGUAGE_H
