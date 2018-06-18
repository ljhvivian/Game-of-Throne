/********************************************************************************
** Form generated from reading UI file 'gameworld3.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWORLD3_H
#define UI_GAMEWORLD3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Gameworld3
{
public:

    void setupUi(QDialog *Gameworld3)
    {
        if (Gameworld3->objectName().isEmpty())
            Gameworld3->setObjectName(QStringLiteral("Gameworld3"));
        Gameworld3->resize(400, 300);

        retranslateUi(Gameworld3);

        QMetaObject::connectSlotsByName(Gameworld3);
    } // setupUi

    void retranslateUi(QDialog *Gameworld3)
    {
        Gameworld3->setWindowTitle(QApplication::translate("Gameworld3", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Gameworld3: public Ui_Gameworld3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWORLD3_H
