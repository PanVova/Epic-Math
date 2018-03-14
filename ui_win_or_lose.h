/********************************************************************************
** Form generated from reading UI file 'win_or_lose.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_OR_LOSE_H
#define UI_WIN_OR_LOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Win_or_Lose
{
public:
    QLabel *label;
    QPushButton *Save1;
    QPushButton *Save2;
    QPushButton *Save3;
    QLabel *time_from_start;
    QLabel *time_check;

    void setupUi(QDialog *Win_or_Lose)
    {
        if (Win_or_Lose->objectName().isEmpty())
            Win_or_Lose->setObjectName(QStringLiteral("Win_or_Lose"));
        Win_or_Lose->resize(335, 176);
        Win_or_Lose->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"background-color: rgb(117, 117, 117);"));
        label = new QLabel(Win_or_Lose);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 301, 131));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        Save1 = new QPushButton(Win_or_Lose);
        Save1->setObjectName(QStringLiteral("Save1"));
        Save1->setGeometry(QRect(30, 50, 67, 66));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Save1->sizePolicy().hasHeightForWidth());
        Save1->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(117, 117, 117, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Save1->setPalette(palette);
        QFont font1;
        font1.setPointSize(32);
        Save1->setFont(font1);
        Save1->setLayoutDirection(Qt::RightToLeft);
        Save1->setStyleSheet(QStringLiteral("background-image: url(:/background/save.png);"));
        Save2 = new QPushButton(Win_or_Lose);
        Save2->setObjectName(QStringLiteral("Save2"));
        Save2->setGeometry(QRect(140, 50, 67, 66));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Save2->setPalette(palette1);
        Save2->setFont(font1);
        Save2->setStyleSheet(QStringLiteral("background-image: url(:/background/save.png);"));
        Save3 = new QPushButton(Win_or_Lose);
        Save3->setObjectName(QStringLiteral("Save3"));
        Save3->setGeometry(QRect(250, 50, 67, 66));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Save3->sizePolicy().hasHeightForWidth());
        Save3->setSizePolicy(sizePolicy1);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Save3->setPalette(palette2);
        Save3->setFont(font1);
        Save3->setAutoFillBackground(false);
        Save3->setStyleSheet(QStringLiteral("background-image: url(:/background/save.png);"));
        time_from_start = new QLabel(Win_or_Lose);
        time_from_start->setObjectName(QStringLiteral("time_from_start"));
        time_from_start->setGeometry(QRect(10, 130, 201, 41));
        QFont font2;
        font2.setPointSize(14);
        time_from_start->setFont(font2);
        time_check = new QLabel(Win_or_Lose);
        time_check->setObjectName(QStringLiteral("time_check"));
        time_check->setGeometry(QRect(230, 140, 71, 21));
        QFont font3;
        font3.setPointSize(16);
        time_check->setFont(font3);

        retranslateUi(Win_or_Lose);

        QMetaObject::connectSlotsByName(Win_or_Lose);
    } // setupUi

    void retranslateUi(QDialog *Win_or_Lose)
    {
        Win_or_Lose->setWindowTitle(QApplication::translate("Win_or_Lose", "Dialog", 0));
        label->setText(QString());
        Save1->setText(QApplication::translate("Win_or_Lose", "1", 0));
        Save2->setText(QApplication::translate("Win_or_Lose", "2", 0));
        Save3->setText(QApplication::translate("Win_or_Lose", "3", 0));
        time_from_start->setText(QApplication::translate("Win_or_Lose", "Seconds from start:", 0));
        time_check->setText(QApplication::translate("Win_or_Lose", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class Win_or_Lose: public Ui_Win_or_Lose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_OR_LOSE_H
