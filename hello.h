#ifndef HELLO_H
#define HELLO_H

#include <QDialog>
#include<string>
#include"icon.h"
#include"rpgobj.h"
namespace Ui {
class Hello;
}

class Hello : public QDialog
{
    Q_OBJECT

public:
    explicit Hello(QWidget *parent = 0);
    ~Hello();
    void paintEvent(QPaintEvent *e);
    bool getJudge(){return _rank;}
    bool getConfirm(){return _comfirm;}
    void setConfirm(bool cfm){_comfirm=cfm;}
    string getUsername(){return _username;}
    string getPassword(){return _password;}
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Hello *ui;
    bool _rank,_comfirm;//_rank是判断按钮，_confirm是判断是否登陆成功
    string _username,_password;
};

#endif // HELLO_H
