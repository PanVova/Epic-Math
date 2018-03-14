#include "start.h"
#include <QApplication>
#include "secondwindow.h"
#include <QTranslator>
#include "language.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translate_ru;
    translate_ru.load(":/Translate/Project_ru.qm");
    Language h;
    h.setModal(true);
    h.exec();
    if(h.lang==1){
     a.installTranslator(&translate_ru);
    }
    Start s;
    s.open();
    s.exec();
    SecondWindow* d;
    if( s.check==1){
        d = new SecondWindow();
        if(h.lang==1){
            d->language=1;
            d->For_start();
        }
        d->show();
    } else{
        exit(0);
    }
    return a.exec();
}
