/********************************************************************************
** Form generated from reading UI file 'ranking.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKING_H
#define UI_RANKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ranking
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Ranking)
    {
        if (Ranking->objectName().isEmpty())
            Ranking->setObjectName(QStringLiteral("Ranking"));
        Ranking->resize(400, 300);
        pushButton = new QPushButton(Ranking);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 230, 75, 23));

        retranslateUi(Ranking);

        QMetaObject::connectSlotsByName(Ranking);
    } // setupUi

    void retranslateUi(QDialog *Ranking)
    {
        Ranking->setWindowTitle(QApplication::translate("Ranking", "Dialog", 0));
        pushButton->setText(QApplication::translate("Ranking", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Ranking: public Ui_Ranking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKING_H
