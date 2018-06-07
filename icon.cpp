#include "icon.h"
#include<iostream>
int ICON::GRID_SIZE = 32;
int ICON::HEIGHT_SIZE = 56;
int ICON::WIDTH_SIZE = 32;

pair<string,ICON> pairArray[] =
{
    make_pair("player1",ICON("player1",0,6, 1, 2)),
    make_pair("player2",ICON("player2",0,0, 1, 2)),
    make_pair("player3",ICON("player3",0,2, 1, 2)),
    make_pair("player4",ICON("player4",0,4, 1, 2)),
    make_pair("stone",ICON("stone",4,9, 1, 1)),
    make_pair("fruit",ICON("fruit",3,6, 1, 1)),
    make_pair("grass",ICON("grass",8,15, 1, 1)),
    make_pair("monster",ICON("monster",8,12, 1, 2)),
    make_pair("tree",ICON("tree",2,4, 1, 1)),
    make_pair("bomb",ICON("bomb",8,10,1,1)),
    make_pair("exploid",ICON("exploid",1,3,1,1))
};

map<string,ICON> ICON::GAME_ICON_SET(pairArray,pairArray+sizeof(pairArray)/sizeof(pairArray[0]));


ICON::ICON(string name, int x, int y, int w, int h){
    this->typeName = name;
    this->srcX = x;
    this->srcY = y;
    this->width = w;
    this->height = h;
}

ICON ICON::findICON(string type){
    map<string,ICON>::iterator kv;
    kv = ICON::GAME_ICON_SET.find(type);
    if (kv==ICON::GAME_ICON_SET.end()){

       cout<<"Error: cannot find ICON"<<endl;
       return ICON();
    }
    else{
        return kv->second;
    }
}
