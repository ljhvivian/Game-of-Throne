#include "hello.h"
#include "ui_hello.h"
#include"icon.h"
#include<QInputDialog>
#include<QString>
#include<string>
#include<iostream>
#include<QMessageBox>
#include"rpgobj.h"
#include<fstream>
Hello::Hello(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hello)
{
    ui->setupUi(this);
    _rank=0;
    _comfirm=0;
}

Hello::~Hello()
{
    delete ui;
}

void Hello::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter painter(this);
    QImage all,part;
    all.load("D:\\Bomber3\\ice.png");
    part= all.copy(QRect(0,0, 100,100));
    painter.drawImage(90,100,part);
}

void Hello::on_pushButton_clicked()
{
    bool n,p;
    int ret;
    QString usnm = QInputDialog::getText(this, tr("G.O.T."), tr("Please input username："), QLineEdit::Normal, tr("admin"),&n);
    _username=std::string((const char *)usnm.toLocal8Bit());
    QString pswd = QInputDialog::getText(this, tr("G.O.T."), tr("Please input password："), QLineEdit::Normal, tr("password"),&p);
    _password=std::string((const char *)pswd.toLocal8Bit());
    string username,password;
    string s="D:\\"+_username+".txt";
    const char* ch=s.c_str();
    ofstream outfile(ch,ios::out);
    outfile.close();
    ifstream infile(ch,ios::in);
    infile>>username>>password;
    infile.close();
    if(password==_password||(username==""&&password==""))  _comfirm=1;
    if(!_comfirm)  ret=QMessageBox::critical(this, "Wrong!","Fail login!", QMessageBox::Ok);
    close();
}

void Hello::on_pushButton_2_clicked()
{
    _rank=1;
    close();
}
