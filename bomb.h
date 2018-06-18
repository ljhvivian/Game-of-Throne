#ifndef BOMB_H
#define BOMB_H
#include "weapon.h"

class Bomb: public Weapon
{
public:
    Bomb(){number=5;}
    void explode();
    ~Bomb();
private:
    int number;
};

#endif // BOMB_H
