#ifndef CHARACTER_H
#define CHARACTER_H
#include "rpgobj.h"

class Character: public RPGObj
{
public:
    Character(){di=1;}
    ~Character(){}
    void move(int direction, int steps=1);
        //direction =1,2,3,4 for 上下左右
    bool getOver(){return over;}
    int getdi(){return di;}
private:
    bool over;
    int di;
};

#endif // CHARACTER_H
