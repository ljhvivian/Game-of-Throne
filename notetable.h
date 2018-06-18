#ifndef NOTETABLE_H
#define NOTETABLE_H
#include "rpgobj.h"
#include "world.h"
#include<vector>
#include<string>
class NoteTable
{
public:
    NoteTable();
    ~NoteTable();
    void initNoteTable();
    void show(QPainter * painter);
    void loadWorld(World w){_world=w;}
    string bombNum();
    string fireNum();
    string iceNum();
    string boArNum();
private:
    vector<RPGObj> _blood,_objs,_weaponShade;
    World _world;
};

#endif // NOTETABLE_H
