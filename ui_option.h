/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Option
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Option)
    {
        if (Option->objectName().isEmpty())
            Option->setObjectName(QStringLiteral("Option"));
        Option->resize(263, 347);
        pushButton = new QPushButton(Option);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 200, 75, 23));
        pushButton_2 = new QPushButton(Option);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 250, 75, 23));

        retranslateUi(Option);

        QMetaObject::connectSlotsByName(Option);
    } // setupUi

    void retranslateUi(QDialog *Option)
    {
        Option->setWindowTitle(QApplication::translate("Option", "Dialog", 0));
        pushButton->setText(QApplication::translate("Option", "continue", 0));
        pushButton_2->setText(QApplication::translate("Option", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Option: public Ui_Option {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H
