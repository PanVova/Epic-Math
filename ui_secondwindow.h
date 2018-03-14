/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *centralwidget;
    QPushButton *TrueButton;
    QPushButton *Button1;
    QPushButton *Button2;
    QLabel *Question;
    QLabel *Name1;
    QLabel *My_Name;
    QLabel *Enemy_Name;
    QLabel *Name2;
    QLabel *My_Power;
    QLabel *Enemy_Power;
    QLabel *coins;
    QLabel *recovery;
    QLabel *level;
    QLabel *seconds1;
    QLabel *seconds_left;
    QLabel *music;
    QDial *mixer;
    QLCDNumber *audio;
    QLabel *Character;
    QLabel *Opponent;
    QLabel *Combo;
    QProgressBar *progressBar;
    QProgressBar *progressBar1;
    QLabel *save_load;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(800, 600);
        SecondWindow->setAutoFillBackground(false);
        SecondWindow->setStyleSheet(QStringLiteral("background-image: url(:/background/bg.jpg);"));
        SecondWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        TrueButton = new QPushButton(centralwidget);
        TrueButton->setObjectName(QStringLiteral("TrueButton"));
        TrueButton->setGeometry(QRect(234, 370, 91, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TrueButton->sizePolicy().hasHeightForWidth());
        TrueButton->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 200, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        TrueButton->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        TrueButton->setFont(font);
        TrueButton->setFocusPolicy(Qt::StrongFocus);
        TrueButton->setStyleSheet(QLatin1String("background: rgb(0, 200, 0);\n"
"border-radius: 6px"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(350, 370, 91, 41));
        QPalette palette1;
        QBrush brush1(QColor(0, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush2(QColor(85, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Button1->setPalette(palette1);
        Button1->setFont(font);
        Button1->setContextMenuPolicy(Qt::DefaultContextMenu);
        Button1->setStyleSheet(QLatin1String("background: rgb(0, 200, 0);\n"
"border-radius: 6px\n"
""));
        Button1->setAutoDefault(false);
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(460, 370, 91, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Button2->setPalette(palette2);
        Button2->setFont(font);
        Button2->setAutoFillBackground(false);
        Button2->setStyleSheet(QLatin1String("background: rgb(0, 200, 0);\n"
"border-radius: 6px"));
        Question = new QLabel(centralwidget);
        Question->setObjectName(QStringLiteral("Question"));
        Question->setGeometry(QRect(350, 330, 91, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        Question->setFont(font1);
        Question->setStyleSheet(QLatin1String("background: rgb(255, 255, 255);\n"
"border-radius: 6px"));
        Name1 = new QLabel(centralwidget);
        Name1->setObjectName(QStringLiteral("Name1"));
        Name1->setGeometry(QRect(6, 10, 61, 31));
        QFont font2;
        font2.setPointSize(16);
        Name1->setFont(font2);
        Name1->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        My_Name = new QLabel(centralwidget);
        My_Name->setObjectName(QStringLiteral("My_Name"));
        My_Name->setGeometry(QRect(70, 10, 171, 31));
        My_Name->setFont(font2);
        My_Name->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        Enemy_Name = new QLabel(centralwidget);
        Enemy_Name->setObjectName(QStringLiteral("Enemy_Name"));
        Enemy_Name->setGeometry(QRect(620, 10, 151, 31));
        Enemy_Name->setFont(font2);
        Enemy_Name->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        Name2 = new QLabel(centralwidget);
        Name2->setObjectName(QStringLiteral("Name2"));
        Name2->setGeometry(QRect(556, 10, 61, 31));
        Name2->setFont(font2);
        Name2->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        My_Power = new QLabel(centralwidget);
        My_Power->setObjectName(QStringLiteral("My_Power"));
        My_Power->setGeometry(QRect(10, 80, 61, 61));
        QPalette palette3;
        QBrush brush5(QColor(0, 255, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush6(QColor(0, 0, 0, 0));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        My_Power->setPalette(palette3);
        QFont font3;
        font3.setPointSize(28);
        My_Power->setFont(font3);
        My_Power->setStyleSheet(QLatin1String("#My_Power {\n"
"background-image: url(:/background/powerfist.png);\n"
"background-color: red;\n"
"background-color: transparent;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        My_Power->setAlignment(Qt::AlignCenter);
        Enemy_Power = new QLabel(centralwidget);
        Enemy_Power->setObjectName(QStringLiteral("Enemy_Power"));
        Enemy_Power->setGeometry(QRect(560, 80, 61, 61));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        Enemy_Power->setPalette(palette4);
        Enemy_Power->setFont(font3);
        Enemy_Power->setStyleSheet(QLatin1String("#Enemy_Power {\n"
"background-image: url(:/background/powerfist.png);\n"
"background-color: red;\n"
"background-color: transparent;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        Enemy_Power->setAlignment(Qt::AlignCenter);
        coins = new QLabel(centralwidget);
        coins->setObjectName(QStringLiteral("coins"));
        coins->setGeometry(QRect(400, 0, 61, 71));
        QFont font4;
        font4.setPointSize(24);
        font4.setBold(true);
        font4.setWeight(75);
        coins->setFont(font4);
        coins->setAutoFillBackground(false);
        coins->setStyleSheet(QLatin1String("#coins {\n"
"background-image: url(:/background/Coin.png);\n"
"background-color: black;\n"
"background-color: transparent;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        coins->setAlignment(Qt::AlignCenter);
        recovery = new QLabel(centralwidget);
        recovery->setObjectName(QStringLiteral("recovery"));
        recovery->setGeometry(QRect(80, 80, 65, 65));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        recovery->setPalette(palette5);
        recovery->setFont(font3);
        recovery->setStyleSheet(QLatin1String("#recovery {\n"
"background-image: url(:/background/recovery.png);\n"
"background-color: black;\n"
"background-color: transparent;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        recovery->setAlignment(Qt::AlignCenter);
        level = new QLabel(centralwidget);
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(330, 0, 61, 61));
        level->setFont(font4);
        level->setStyleSheet(QLatin1String("\n"
"#level {\n"
"background-image: url(:/background/Level.png);\n"
"background-color: black;\n"
"background-color: transparent;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        level->setAlignment(Qt::AlignCenter);
        seconds1 = new QLabel(centralwidget);
        seconds1->setObjectName(QStringLiteral("seconds1"));
        seconds1->setGeometry(QRect(280, 170, 151, 31));
        QFont font5;
        font5.setPointSize(14);
        seconds1->setFont(font5);
        seconds1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        seconds1->setFrameShadow(QFrame::Plain);
        seconds1->setLineWidth(1);
        seconds_left = new QLabel(centralwidget);
        seconds_left->setObjectName(QStringLiteral("seconds_left"));
        seconds_left->setGeometry(QRect(440, 170, 71, 31));
        seconds_left->setFont(font5);
        seconds_left->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        music = new QLabel(centralwidget);
        music->setObjectName(QStringLiteral("music"));
        music->setGeometry(QRect(620, 230, 111, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        music->setPalette(palette6);
        QFont font6;
        font6.setPointSize(22);
        music->setFont(font6);
        music->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        mixer = new QDial(centralwidget);
        mixer->setObjectName(QStringLiteral("mixer"));
        mixer->setGeometry(QRect(609, 260, 61, 81));
        mixer->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        audio = new QLCDNumber(centralwidget);
        audio->setObjectName(QStringLiteral("audio"));
        audio->setGeometry(QRect(670, 280, 71, 41));
        QFont font7;
        font7.setFamily(QStringLiteral("MS Serif"));
        font7.setPointSize(22);
        audio->setFont(font7);
        audio->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        Character = new QLabel(centralwidget);
        Character->setObjectName(QStringLiteral("Character"));
        Character->setGeometry(QRect(230, 430, 128, 128));
        Character->setAutoFillBackground(false);
        Character->setStyleSheet(QLatin1String("background-image: url(:/my_character/Character/Idle_000.png);\n"
""));
        Opponent = new QLabel(centralwidget);
        Opponent->setObjectName(QStringLiteral("Opponent"));
        Opponent->setGeometry(QRect(360, 420, 256, 146));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Opponent->sizePolicy().hasHeightForWidth());
        Opponent->setSizePolicy(sizePolicy1);
        Opponent->setSizeIncrement(QSize(0, 0));
        Opponent->setAutoFillBackground(false);
        Opponent->setStyleSheet(QStringLiteral("background-image: url(:/Scorpion/Scorpion/Attack__000.png);"));
        Opponent->setMidLineWidth(3);
        Combo = new QLabel(centralwidget);
        Combo->setObjectName(QStringLiteral("Combo"));
        Combo->setGeometry(QRect(350, 430, 121, 31));
        QPalette palette7;
        QBrush brush7(QColor(255, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        Combo->setPalette(palette7);
        QFont font8;
        font8.setPointSize(20);
        font8.setBold(true);
        font8.setItalic(false);
        font8.setUnderline(false);
        font8.setWeight(75);
        font8.setStrikeOut(false);
        Combo->setFont(font8);
        Combo->setStyleSheet(QLatin1String("background: transparent;\n"
"border: none;\n"
"background-repeat: none;"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 50, 161, 21));
        progressBar->setFont(font2);
        progressBar->setValue(24);
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName(QStringLiteral("progressBar1"));
        progressBar1->setGeometry(QRect(560, 50, 161, 21));
        progressBar1->setFont(font2);
        progressBar1->setValue(24);
        save_load = new QLabel(centralwidget);
        save_load->setObjectName(QStringLiteral("save_load"));
        save_load->setGeometry(QRect(300, 110, 171, 51));
        save_load->setFont(font2);
        save_load->setStyleSheet(QLatin1String("background: transparent;\n"
"border: none;\n"
"background-repeat: none;\n"
""));
        SecondWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        SecondWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SecondWindow->setStatusBar(statusbar);

        retranslateUi(SecondWindow);

        Button1->setDefault(false);


        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "MainWindow", 0));
        TrueButton->setText(QApplication::translate("SecondWindow", "True", 0));
        Button1->setText(QApplication::translate("SecondWindow", "False", 0));
        Button2->setText(QApplication::translate("SecondWindow", "False", 0));
        Question->setText(QApplication::translate("SecondWindow", "60-20", 0));
#ifndef QT_NO_TOOLTIP
        Name1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Name1->setWhatsThis(QApplication::translate("SecondWindow", "<html><head/><body><p>hello</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Name1->setText(QApplication::translate("SecondWindow", "Name:", 0));
        My_Name->setText(QApplication::translate("SecondWindow", "0", 0));
        Enemy_Name->setText(QApplication::translate("SecondWindow", "0", 0));
        Name2->setText(QApplication::translate("SecondWindow", "Name:", 0));
#ifndef QT_NO_TOOLTIP
        My_Power->setToolTip(QApplication::translate("SecondWindow", "This is your power", 0));
#endif // QT_NO_TOOLTIP
        My_Power->setText(QApplication::translate("SecondWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        Enemy_Power->setToolTip(QApplication::translate("SecondWindow", "Enemys power", 0));
#endif // QT_NO_TOOLTIP
        Enemy_Power->setText(QApplication::translate("SecondWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        coins->setToolTip(QApplication::translate("SecondWindow", "This is your money", 0));
#endif // QT_NO_TOOLTIP
        coins->setText(QApplication::translate("SecondWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        recovery->setToolTip(QApplication::translate("SecondWindow", "This is your recovery", 0));
#endif // QT_NO_TOOLTIP
        recovery->setText(QApplication::translate("SecondWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        level->setToolTip(QApplication::translate("SecondWindow", "This is your level", 0));
#endif // QT_NO_TOOLTIP
        level->setText(QApplication::translate("SecondWindow", "0", 0));
        seconds1->setText(QApplication::translate("SecondWindow", "Seconds Left:", 0));
        seconds_left->setText(QApplication::translate("SecondWindow", "0", 0));
        music->setText(QApplication::translate("SecondWindow", "MUSIC:", 0));
        Character->setText(QString());
#ifndef QT_NO_TOOLTIP
        Opponent->setToolTip(QApplication::translate("SecondWindow", "T", 0));
#endif // QT_NO_TOOLTIP
        Opponent->setText(QString());
        Combo->setText(QApplication::translate("SecondWindow", "Combo!!!", 0));
#ifndef QT_NO_TOOLTIP
        progressBar->setToolTip(QApplication::translate("SecondWindow", "This is your health", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        progressBar1->setToolTip(QApplication::translate("SecondWindow", "This is health of your  opponent", 0));
#endif // QT_NO_TOOLTIP
        save_load->setText(QApplication::translate("SecondWindow", "F5-Save  F9-Load", 0));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
