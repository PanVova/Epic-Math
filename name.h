#ifndef NAME_H
#define NAME_H

#include <QDialog>

namespace Ui {
class Name;
}

class Name : public QDialog
{
    Q_OBJECT

public:
    explicit Name(QWidget *parent = 0);
    ~Name();
    QString on_lineEdit_editingFinished();

private slots:


    void on_pushButton_clicked();

private:
    Ui::Name *ui;
};

#endif // NAME_H
