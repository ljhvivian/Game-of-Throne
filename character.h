#ifndef CHARACTER_H
#define CHARACTER_H
#include "rpgobj.h"
#include <iostream>
class Character: public RPGObj
{
public:
    Character(){di=1;lifeCount=6;}
    ~Character(){}
    void move(int direction, int steps=1);
        //direction =1,2,3,4 for 上下左右
    bool getOver(){return over;}//查看是否死亡
    int getdi(){return di;}//查看方向
    int getLife(){return lifeCount;}//查看生命值
    void addLife(){if(lifeCount<4)  lifeCount++;}//加命
    void minusLife(){lifeCount--;}//减命
private:
    int lifeCount;//生命值
    bool over;//是否死亡
    int di;//移动方向
};

#endif // CHARACTER_H
