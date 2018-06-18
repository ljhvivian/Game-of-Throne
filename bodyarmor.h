#ifndef BODYARMOR_H
#define BODYARMOR_H
#include "weapon.h"

class bodyarmor: public Weapon
{
public:
    bodyarmor();
    ~bodyarmor();
    void onErase_fruit();
};

#endif // BODYARMOR_H
