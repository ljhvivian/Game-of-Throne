#ifndef WORLD_H
#define WORLD_H
#include "rpgobj.h"
#include <vector>
#include <string>
#include <QPainter>
#include<set>
#include "character.h"
#include"weapon.h"

class World
{
public:
    World(){}
    ~World(){}
    void initWorld(char* mapFile);
        //输入的文件中定义了初始状态下游戏世界有哪些对象，出生点在哪
    void show(QPainter * painter);
        //显示游戏世界所有对象
    void handlePlayerMove(int direction, int steps);
        //假定只有一个玩家
    void handleMonster1Move(int direction, int steps);
    void handleMonster2Move(int direction, int steps);
    void handleMonster3Move(int direction, int steps);
    void explodeObject(RPGObj r);
    void playerProduceBomb();
    void monsterProduceBomb();
    void bombTimeCount();
    void EWSNM(RPGObj r);
private:
    vector<RPGObj> _objs,_exploid;
    vector<Weapon> _bombs;
    vector<RPGObj> player_;
    Character _player,_monster1,_monster2,_monster3;
    static int _playercount,_monstercount;
    static  bool _over,_over1;
    static int move;
};

#endif // WORLD_H
