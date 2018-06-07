#include "object.h"
#include "rpgobj.h"
#include <iostream>

Object::Object()
{

}

Object::~Object()
{

}


void Object::randomOccur(Object obj)
{
    int d=rand()%5+1;
    cout<<d<<endl;//
    if(d==1)  obj.initObj("fruit");
    else if(d==2) obj.initObj("fire");
    else if(d==3) obj.initObj("bodyarmor");//balabalabala```
    else if(d==4) obj.initObj("ice");
}
