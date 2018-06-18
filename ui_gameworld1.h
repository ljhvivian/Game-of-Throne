/********************************************************************************
** Form generated from reading UI file 'gameworld1.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWORLD1_H
#define UI_GAMEWORLD1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Gameworld1
{
public:

    void setupUi(QDialog *Gameworld1)
    {
        if (Gameworld1->objectName().isEmpty())
            Gameworld1->setObjectName(QStringLiteral("Gameworld1"));
        Gameworld1->resize(400, 300);

        retranslateUi(Gameworld1);

        QMetaObject::connectSlotsByName(Gameworld1);
    } // setupUi

    void retranslateUi(QDialog *Gameworld1)
    {
        Gameworld1->setWindowTitle(QApplication::translate("Gameworld1", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Gameworld1: public Ui_Gameworld1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWORLD1_H
