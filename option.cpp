#include "option.h"
#include "ui_option.h"
#include<QPainter>
#include<string>
#include<QString>
#include<sstream>

Option::Option(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Option)
{
    ui->setupUi(this);
    _continue=1;
    _score=0;
}

Option::~Option()
{
    delete ui;
}

void Option::on_pushButton_clicked()
{
    close();
}

void Option::on_pushButton_2_clicked()
{
    _continue=0;
    close();
}

void Option::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter painter(this);
    QFont font;
    font.setPointSize(15);
    painter.setFont(font);
    painter.setPen(QPen(Qt::blue,10));
    std::string str1,str;
    std::stringstream ss;
    ss<<_score;
    ss>>str1;
    str="Your score: "+str1;
    const QString qstr = QString(QString::fromLocal8Bit(str.c_str()));
    painter.drawText(30,50,qstr);
}
