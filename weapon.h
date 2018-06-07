#ifndef WEAPON_H
#define WEAPON_H
#include "rpgobj.h"

class Weapon: public RPGObj
{
public:
    Weapon(){_timeCount=0;}
    ~Weapon();
    int _timeCount;
private:

};

#endif // WEAPON_H
