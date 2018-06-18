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
    make_pair("stone",ICON("stone",0,0, 1, 1)),
    make_pair("fruit",ICON("fruit",10,6, 1, 1)),
    make_pair("grass",ICON("grass",12,1, 1, 1)),
    make_pair("grass1",ICON("grass1",0,0,26,21)),
    make_pair("monster",ICON("monster",2,168, 1, 2)),
    make_pair("tree",ICON("tree",5,3, 1, 1)),
    make_pair("bomb",ICON("bomb",0,0,1,1)),
    make_pair("exploid",ICON("exploid",1,3,1,1)),
    make_pair("bodyarmor",ICON("bodyarmor",0,1,1,1)),
    make_pair("fire",ICON("fire",8,0,1,1)),
    make_pair("ice",ICON("ice",8,6,1,1)),
    make_pair("fire_explode",ICON("fire_explode",14,0,1,1)),
    make_pair("ice_spread",ICON("ice_spread",14,4,1,1)),
    make_pair("icemonster",ICON("icemonster",8,7,1,2)),
    make_pair("bullet",ICON("bullet",0,0,1,1)),
    make_pair("bloodStrip",ICON("bloodStrip",0,1,1,8)),
    make_pair("blood",ICON("blood",10,6,1,1)),
    make_pair("WP1",ICON("WP1",0,0,1,1)),
    make_pair("WP2",ICON("WP2",14,10,1,1)),
    make_pair("WP3",ICON("WP3",9,9,1,1)),
    make_pair("nightgrass",ICON("nightgrass",8,4,1,1)),
    make_pair("nightgrass1",ICON("nightgrass1",0,0,26,21)),
    make_pair("wall",ICON("wall",14,3,1,1)),
    make_pair("wood",ICON("wood",3,5,1,1)),
    make_pair("nightroad",ICON("nightroad",9,11,1,1)),
    make_pair("wood1",ICON("wood1",2,13,1,1)),
    make_pair("wall1",ICON("wall1",14,9,1,1)),
    make_pair("tree1",ICON("tree1",6,3,1,1)),
    make_pair("wood2",ICON("wood2",14,5,1,1))
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
