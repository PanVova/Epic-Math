/********************************************************************************
** Form generated from reading UI file 'dialog_for_upgrade.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FOR_UPGRADE_H
#define UI_DIALOG_FOR_UPGRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_for_upgrade
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;

    void setupUi(QDialog *Dialog_for_upgrade)
    {
        if (Dialog_for_upgrade->objectName().isEmpty())
            Dialog_for_upgrade->setObjectName(QStringLiteral("Dialog_for_upgrade"));
        Dialog_for_upgrade->resize(348, 239);
        Dialog_for_upgrade->setStyleSheet(QStringLiteral("background-color: rgb(147, 147, 147);"));
        pushButton = new QPushButton(Dialog_for_upgrade);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 60, 63, 64));
        QPalette palette;
        QBrush brush(QColor(147, 147, 147, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
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
        pushButton->setPalette(palette);
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("background-image: url(:/background/recovery.png);\n"
"border-radius: 0px"));
        pushButton_2 = new QPushButton(Dialog_for_upgrade);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 60, 62, 62));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush3(QColor(0, 255, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_2->setPalette(palette1);
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("background-image: url(:/background/powerfist.png);\n"
"border-radius: 0px"));
        label = new QLabel(Dialog_for_upgrade);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 351, 41));
        QFont font2;
        font2.setPointSize(20);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(Dialog_for_upgrade);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 60, 63, 64));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_3->setPalette(palette2);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("background-image: url(:/background/recovery.png);\n"
"border-radius: 0px"));
        pushButton_4 = new QPushButton(Dialog_for_upgrade);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 190, 101, 41));
        QFont font3;
        font3.setPointSize(16);
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(Dialog_for_upgrade);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 140, 381, 31));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);

        retranslateUi(Dialog_for_upgrade);

        QMetaObject::connectSlotsByName(Dialog_for_upgrade);
    } // setupUi

    void retranslateUi(QDialog *Dialog_for_upgrade)
    {
        Dialog_for_upgrade->setWindowTitle(QApplication::translate("Dialog_for_upgrade", "Dialog", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("Dialog_for_upgrade", "Health", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("Dialog_for_upgrade", "+8", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("Dialog_for_upgrade", "Power", 0));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("Dialog_for_upgrade", "+2", 0));
        label->setText(QApplication::translate("Dialog_for_upgrade", "Choose your upgrade:", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("Dialog_for_upgrade", "Recovery", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("Dialog_for_upgrade", "+2", 0));
        pushButton_4->setText(QApplication::translate("Dialog_for_upgrade", "Back", 0));
        label_2->setText(QApplication::translate("Dialog_for_upgrade", "       15                20              25", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_for_upgrade: public Ui_Dialog_for_upgrade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FOR_UPGRADE_H
