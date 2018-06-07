#include "rpgobj.h"
#include <iostream>

void RPGObj::initObj(string type)
{
    //TODO 所支持的对象类型应定义为枚举
    if (type.compare("player1")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
    }
    else if (type.compare("player2")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
    }
    else if (type.compare("player3")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
    }
    else if (type.compare("player4")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
    }
    else if (type.compare("stone")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable =false;
    }
    else if (type.compare("fruit")==0){
        this->_coverable = true;
        this->_eatable = true;
        this->_bombable=false;
    }
    else if (type.compare("grass")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable= false;
    }
    else if (type.compare("monster")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
    }
    else if (type.compare("tree")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = true;
    }
    else if (type.compare("bomb")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->_bombable = false;
    }
    else if (type.compare("exploid")==0){
        this->_coverable = true;
        this->_eatable = false;
        this->_bombable = false;
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
        all.load("D:\\Bomber\\people.jpg");
        this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
        op=0;
    }
    else
    {
        all.load("D:\\Bomber\\TileB.png");
    this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
op=1;}}

void RPGObj::show(QPainter * pa){
    //if(op==1)
    //{
    int gSize = ICON::GRID_SIZE;
    pa->drawImage(this->_pos_x*gSize,this->_pos_y*gSize,this->_pic);//}
    /*else if(op==0)
    {
        int gSize1 = ICON::WIDTH_SIZE;
        int gSize2 = ICON::HEIGHT_SIZE;
        pa->drawImage(this->_pos_x*gSize1,this->_pos_y*gSize2,this->_pic);
    }*/
}
