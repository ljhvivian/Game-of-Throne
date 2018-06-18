#include "rpgobj.h"
#include <iostream>
#include <string>
#include <icon.h>
#include <map>
#include <QMediaPlayer>
void RPGObj::initObj(string type)
{
    //TODO 所支持的对象类型应定义为枚举
    if (type.compare("player1")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("player2")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("player3")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("player4")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("stone")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable =false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("fruit")==0){
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable=false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("grass")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable= false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("monster")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("tree")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = true;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("tree1")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = true;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("bomb")==0){
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("exploid")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if (type.compare("bodyarmor")==0){
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = true;
    }
    else if (type.compare("fire")==0){
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable = false;
        this->_canfire = true;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("ice")==0){
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = true;
        this->_canAddlife = false;
    }
    else if(type.compare("fire_explode")==0){
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("ice_spread")==0)
    {
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("icemonster")==0)
    {
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("bullet")==0)
    {
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("bloodStrip")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("blood")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("WP1")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("WP2")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("WP3")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("nightgrass")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("wall")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("wood")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = true;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("nightroad")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("wood1")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = true;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("wall1")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("grass1")==0)
    {
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable= false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("nightgrass1")==0)
    {
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable= false;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else if(type.compare("wood2")==0)
    {
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable= true;
        this->_canfire = false;
        this->_canfreeze = false;
        this->_canAddlife = false;
    }
    else{
        //TODO 应由专门的错误日志文件记录
        cout<<"invalid ICON type."<<endl;
        return;
    }

    this->_icon = ICON::findICON(type);
    QImage all;
    if(type.compare("player1")==0||type.compare("player2")==0||type.compare("player3")==0||type.compare("player4")==0)
    {
        all.load("D:\\Bomber3\\people2.jpg");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else if(type.compare("grass")==0||type.compare("wood")==0||type.compare("WP2")==0||type.compare("wood2")==0)
    {
        all.load("D:\\Bomber3\\TileA4.png");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else if(type.compare("stone")==0||type.compare("tree")==0||type.compare("tree1")==0||type.compare("nightgrass")==0||type.compare("fruit")==0)
    {
        all.load("D:\\Bomber3\\TileD.png");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else if(type.compare("fire")==0||type.compare("ice")==0||type.compare("fire_explode")==0||type.compare("ice_spread")==0||type.compare("icemonster")==0||type.compare("wall")==0||type.compare("nightroad")==0||type.compare("wall1")==0)
    {
        all.load("D:\\Bomber3\\ice.png");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else if(type.compare("blood")==0)
    {
        all.load("D:\\Bomber3\\blood.png");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else if(type.compare("monster")==0)
    {
        all.load("D:\\Bomber3\\monster.png");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else if(type.compare("bullet")==0||type.compare("WP1")==0)
    {
        all.load("D:\\Bomber3\\bullet1.png");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));

    }
    else if(type.compare("bomb")==0)
    {
        all.load("D:\\Bomber3\\bomb.png");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else if(type.compare("grass1")==0)
    {
        all.load("D:\\Bomber3\\grass2.jpg");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else if(type.compare("nightgrass1")==0)
    {
        all.load("D:\\Bomber3\\undergrass2.jpg");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
    }
    else
    {
        all.load("D:\\Bomber3\\TileB.png");
    this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
}}

void RPGObj::show(QPainter * pa){
    int gSize = ICON::GRID_SIZE;
    pa->drawImage(this->_pos_x*gSize,this->_pos_y*gSize,this->_pic);//}
}
