#ifndef BULLET_H
#define BULLET_H
#include "weapon.h"

class Bullet: public Weapon
{
public:
    Bullet();
    void move(int direction, int steps=1);
    void setDirection(int i){_direction=i;}
    int getDirection(){return _direction;}
    ~Bullet();
private:
    int _direction;
};

#endif // BULLET_H
