#include "ranking.h"
#include "ui_ranking.h"
#include<string>
#include<QPainter>
#include<string>
#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
struct name_score{
    std::string name,score;
    int num=0;
};
Ranking::Ranking(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ranking)
{
    ui->setupUi(this);
}

Ranking::~Ranking()
{
    delete ui;
}

void Ranking::on_pushButton_clicked()
{
    close();
}

void Ranking::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter painter(this);
    QFont font;
    font.setPointSize(15);
    painter.setFont(font);
    painter.setPen(QPen(Qt::red,10));
    std::string username;
    int number;
    std::string s="D:\\ranking.txt";
    const char* ch=s.c_str();
    std::ifstream infile(ch,std::ios::in);
    std::vector<name_score> n_s;
    std::vector<name_score>::iterator it,i;
    name_score n;
    while(infile>>username>>number){
        n.name=username;
        n.num=number;
        std::stringstream ss;
        ss<<number;
        ss>>n.score;
        n_s.push_back(n);
    }
    infile.close();
    for(it=n_s.begin();it!=n_s.end();it++){
        for(i=it;i!=n_s.end();i++){
            if((*it).num<(*i).num){
                std::string str;
                str=(*it).score;
                (*it).score=(*i).score;
                (*i).score=str;
                str=(*it).name;
                (*it).name=(*i).name;
                (*i).name=str;
                int numb;
                numb=(*it).num;
                (*it).num=(*i).num;
                (*i).num=numb;
            }
        }
    }
    /*for(it=n_s.begin();it!=n_s.end();it++){
        std::cout<<(*it).name+"    "+(*it).score<<std::endl;
    }*/
    int y=50;
    for(it=n_s.begin();it!=n_s.end()&&((it-n_s.begin())<5);it++){
        std::string str=(*it).name+"    "+(*it).score;
        const QString qstr = QString(QString::fromLocal8Bit(str.c_str()));
        painter.drawText(70,y,qstr);
        y+=30;
    }
}
