#include <QApplication>
#include <QWidget>
#include <QDialog>
#include <QString>
#include "gameworld1.h"
#include "gameworld2.h"
#include "gameworld3.h"
#include"hello.h"
#include"ranking.h"
#include"option.h"
#include<string>
#include<iostream>
#include<fstream>
#include<map>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //Gameworld3 gm3;
    Hello h;
    Ranking r;
    Option o;
    map<string,int> m;
    map<string,int>::iterator it;
    h.setWindowTitle(QString("G.O.T."));
    r.setWindowTitle(QString("G.O.T."));
    o.setWindowTitle(QString("G.O.T."));
    h.exec();
    string username=h.getUsername(),password=h.getPassword(),s1="D:\\"+username+".txt",s2="D:\\ranking.txt";
    const char* ch1=s1.c_str();
    const char* ch2=s2.c_str();
    int score=0;
    if(h.getJudge()){r.exec();h.exec();}//查看排名，点击ok后返回hello界面
    if(!h.getConfirm())
        while(!h.getConfirm())  h.exec();//登录失败，点击ok后返回hello界面
    Gameworld1 gm1;
    gm1.exec();//登录成功后进入Introduction
    score=gm1.getScore();
    o.setScore(score);
    o.exec();
    if(gm1.ifGetWP()){
    Gameworld2 gm2;
    gm2.exec();
    score=gm2.getScore();
    o.setScore(score);
    o.exec();
    if(gm2.ifGetWP()){
    Gameworld3 gm3;
    gm3.exec();
    score=gm3.getScore();
    o.setScore(score);
    o.exec();}
    }
    ofstream outfile(ch1,ios::out);
    outfile<<username<<endl<<password<<endl<<score<<endl;
    outfile.close();
    ifstream infile(ch2,ios::in);
    string str1;int int1;
    while(infile>>str1>>int1)  m[str1]=int1;
    infile.close();
    m[username]=score;
    outfile.open(ch2,ios::out);
    for(it=m.begin();it!=m.end();it++)  {outfile<<(it->first)<<" "<<(it->second)<<endl;}
    outfile.close();
    return a.exec();
}


