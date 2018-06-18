#include "notetable.h"
#include"rpgobj.h"
#include<sstream>
#include<iostream>
NoteTable::NoteTable()
{

}

NoteTable::~NoteTable()
{

}

void NoteTable::initNoteTable()
{
    int x,y;
    RPGObj obj;
    for(x=26;x<=30;x++){
        for(y=0;y<=20;y++){
            obj.initObj("exploid");
            obj.setPosX(x);
            obj.setPosY(y);
            this->_objs.push_back(obj);
        }
    }
    obj.initObj("bomb");obj.setPosX(27);obj.setPosY(10);
    this->_objs.push_back(obj);
    obj.initObj("fire");obj.setPosX(27);obj.setPosY(11.5);
    this->_objs.push_back(obj);
    obj.initObj("ice");obj.setPosX(27);obj.setPosY(13);
    this->_objs.push_back(obj);
    obj.initObj("bodyarmor");obj.setPosX(27);obj.setPosY(14.5);
    this->_objs.push_back(obj);
    /*obj.initObj("bloodStrip");obj.setPosX(28);obj.setPosY(1);
    this->_objs.push_back(obj);*/
    obj.initObj("WP1");obj.setPosX(28);obj.setPosY(16);
    this->_objs.push_back(obj);
    obj.initObj("WP2");obj.setPosX(28);obj.setPosY(17.5);
    this->_objs.push_back(obj);
    obj.initObj("WP3");obj.setPosX(28);obj.setPosY(19);
    this->_objs.push_back(obj);
    for(int i=8;i>=3;i--){
    obj.initObj("blood");obj.setPosX(28);
    obj.setPosY(i);this->_blood.push_back(obj);}
    obj.initObj("exploid");obj.setPosX(28);obj.setPosY(16);
    this->_weaponShade.push_back(obj);
    obj.initObj("exploid");obj.setPosX(28);obj.setPosY(17.5);
    this->_weaponShade.push_back(obj);
    obj.initObj("exploid");obj.setPosX(28);obj.setPosY(19);
    this->_weaponShade.push_back(obj);
}
void NoteTable::show(QPainter * painter)
{
    int blood=_world.getPlayerLife();
    vector<RPGObj>::iterator it;
    it=this->_objs.begin();
    while(it!=this->_objs.end())
    {
        (*it).show(painter);
        it++;
    }
    for(int i=0;i<this->_blood.size()&&i<blood;i++) { (_blood[i]).show(painter);}
    if(!_world.getWP1())  (_weaponShade[0]).show(painter);
    if(!_world.getWP2())  (_weaponShade[1]).show(painter);
    if(!_world.getWP3())  (_weaponShade[2]).show(painter);
}

string NoteTable::bombNum()
{
    int num=_world.getBomb();
    string number;
    stringstream ss;
    ss<<num;
    ss>>number;
    return number;
}

string NoteTable::fireNum()
{
    int num=_world.getFire();
    string number;
    stringstream ss;
    ss<<num;
    ss>>number;
    return number;
}

string NoteTable::iceNum()
{
    int num=_world.getIce();
    string number;
    stringstream ss;
    ss<<num;
    ss>>number;
    return number;
}

string NoteTable::boArNum()
{
    int num=_world.getBoAr();
    string number;
    stringstream ss;
    ss<<num;
    ss>>number;
    return number;
}
