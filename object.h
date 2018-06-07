#ifndef OBJECT_H
#define OBJECT_H
#include "rpgobj.h"


class Object: public RPGObj
{
public:
    Object();
    ~Object();
    static void randomOccur(Object obj);
};

#endif // OBJECT_H
