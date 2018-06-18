#ifndef PLAYER_H
#define PLAYER_H
#include "character.h"

class Player: public Character
{
public:
    Player();
    ~Player();
    void explode();
private:

};

#endif // PLAYER_H
