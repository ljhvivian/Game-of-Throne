#ifndef POISON_H
#define POISON_H
#include "character.h"

class Poison: public Character
{
public:
    Poison();
    ~Poison();
    void add(){poisonCount++;}
    int getCount(){return poisonCount;}
    void setCount(){poisonCount=0;}
private:
    int poisonCount;
};

#endif // POISON_H
