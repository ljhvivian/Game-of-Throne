/********************************************************************************
** Form generated from reading UI file 'gameworld2.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWORLD2_H
#define UI_GAMEWORLD2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Gameworld2
{
public:

    void setupUi(QDialog *Gameworld2)
    {
        if (Gameworld2->objectName().isEmpty())
            Gameworld2->setObjectName(QStringLiteral("Gameworld2"));
        Gameworld2->resize(400, 300);

        retranslateUi(Gameworld2);

        QMetaObject::connectSlotsByName(Gameworld2);
    } // setupUi

    void retranslateUi(QDialog *Gameworld2)
    {
        Gameworld2->setWindowTitle(QApplication::translate("Gameworld2", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Gameworld2: public Ui_Gameworld2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWORLD2_H
