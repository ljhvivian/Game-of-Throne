#ifndef MONSTER_H
#define MONSTER_H
#include "character.h"
#include <QMediaPlayer>
class Monster:public Character
{
public:
    Monster(){_freezeCount=0;}
    ~Monster();
    void changeFreeze(){_freezeCount=6;}
    //bool getFreeze(){return _freeze;}
    int freezeCount(){return _freezeCount;}
    void freezeMinus(){_freezeCount--;}
    void explode();
    void bombMinus(){_bombCount--;}
private:
    //bool _freeze;
    int _freezeCount;
    int _bombCount;
};

#endif // MONSTER_H
