#ifndef WEAPON_H
#define WEAPON_H
#include "rpgobj.h"

class Weapon: public RPGObj
{
public:
    Weapon(){_timeCount=0;
            number=0;}
    ~Weapon();
    int getNumber(){return number;}//查看数目
    void minusWeapon(){number--;}//减数目
    void addWeapon(){number++;}//加数目
    int _timeCount;//炸弹定时爆炸
private:
    int number;
};

#endif // WEAPON_H
