/********************************************************************************
** Form generated from reading UI file 'language.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGE_H
#define UI_LANGUAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Language
{
public:
    QPushButton *rus;
    QPushButton *eng;
    QLabel *label;

    void setupUi(QDialog *Language)
    {
        if (Language->objectName().isEmpty())
            Language->setObjectName(QStringLiteral("Language"));
        Language->resize(252, 125);
        rus = new QPushButton(Language);
        rus->setObjectName(QStringLiteral("rus"));
        rus->setGeometry(QRect(40, 70, 75, 23));
        eng = new QPushButton(Language);
        eng->setObjectName(QStringLiteral("eng"));
        eng->setGeometry(QRect(140, 70, 75, 23));
        label = new QLabel(Language);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 91, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(Language);

        QMetaObject::connectSlotsByName(Language);
    } // setupUi

    void retranslateUi(QDialog *Language)
    {
        Language->setWindowTitle(QApplication::translate("Language", "Dialog", 0));
        rus->setText(QApplication::translate("Language", "Russian", 0));
        eng->setText(QApplication::translate("Language", "English", 0));
        label->setText(QApplication::translate("Language", "Language:", 0));
    } // retranslateUi

};

namespace Ui {
    class Language: public Ui_Language {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGE_H
