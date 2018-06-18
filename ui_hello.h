/********************************************************************************
** Form generated from reading UI file 'hello.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_H
#define UI_HELLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Hello
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Hello)
    {
        if (Hello->objectName().isEmpty())
            Hello->setObjectName(QStringLiteral("Hello"));
        Hello->resize(294, 400);
        pushButton = new QPushButton(Hello);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 250, 75, 23));
        pushButton_2 = new QPushButton(Hello);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 300, 75, 23));

        retranslateUi(Hello);

        QMetaObject::connectSlotsByName(Hello);
    } // setupUi

    void retranslateUi(QDialog *Hello)
    {
        Hello->setWindowTitle(QApplication::translate("Hello", "Dialog", 0));
        pushButton->setText(QApplication::translate("Hello", "Enter", 0));
        pushButton_2->setText(QApplication::translate("Hello", "Ranking", 0));
    } // retranslateUi

};

namespace Ui {
    class Hello: public Ui_Hello {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_H
