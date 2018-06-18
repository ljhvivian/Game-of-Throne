#ifndef FIRE_H
#define FIRE_H
#include "weapon.h"

class Fire:public Weapon
{
public:
    Fire(){}
    ~Fire();
    void explode();
    void onErase_fruit(){}
private:
};

#endif // FIRE_H
