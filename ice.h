#ifndef ICE_H
#define ICE_H
#include "weapon.h"

class Ice: public Weapon
{
public:
    Ice();
    ~Ice();
    void explode();
    void onErase_fruit(){}
private:
    //int number;
};

#endif // ICE_H
