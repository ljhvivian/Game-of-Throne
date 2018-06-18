#ifndef RPGOBJ_H
#define RPGOBJ_H
#include <QImage>
#include <QPainter>
#include <string>
#include <icon.h>
#include <map>
#include <QMediaPlayer>
using namespace std;
class RPGObj
{
public:
    RPGObj(){}

    void initObj(string type);
    void show(QPainter * painter);

    void setPosX(double x){this->_pos_x=x;}
    void setPosY(double y){this->_pos_y=y;}

    double getPosX() const{return this->_pos_x;}
    double getPosY() const{return this->_pos_y;}
    double getHeight() const{return this->_icon.getHeight();}
    double getWidth() const{return this->_icon.getWidth();}

    bool canCover() const{return this->_coverable;}
    bool canEat() const{return this->_eatable;}
    bool canBomb() const{return this->_bombable;}
    bool canFire() const{return this->_canfire;}
    bool canFreeze() const{return this->_canfreeze;}
    bool canAddlife() const{return this->_canAddlife;}
    string getObjType() const{return this->_icon.getTypeName();}//返回类名
    virtual void onErase_fruit(){
        QMediaPlayer * player = new QMediaPlayer;
        player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\fruit.mp3"));
        player->setVolume(30);
        player->play();
    }

    virtual void explode(){}

protected:
    //所有坐标，单位均为游戏中的格
    static const string _name;
    QImage _pic;
    double _pos_x, _pos_y;//该物体在游戏中当前位置（左上角坐标）
    ICON _icon;//可以从ICON中获取对象的素材，尺寸等信息
    bool _coverable;
    bool _eatable;
    bool _bombable;
    bool _canfire;
    bool _canfreeze;
    bool _canAddlife;
};

#endif // RPGOBJ_H
