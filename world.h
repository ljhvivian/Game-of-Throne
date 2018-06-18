#ifndef WORLD_H
#define WORLD_H
#include "rpgobj.h"
#include <vector>
#include <string>
#include <QPainter>
#include<set>
#include "character.h"
#include "weapon.h"
#include "monster.h"
#include "player.h"
#include "fire.h"
#include "ice.h"
#include "bullet.h"
#include "bodyarmor.h"
#include <QMediaPlayer>
#include "fruit.h"
#include "poison.h"
#include "bomb.h"
class World
{
public:

    World(){_bomb=5;
           _poisonCount=-1;}
    void initWorld(char* mapFile);
        //输入的文件中定义了初始状态下游戏世界有哪些对象，出生点在哪
    void show(QPainter * painter);
        //显示游戏世界所有对象
    bool handlePlayerMove(int direction, int steps);
        //假定只有一个玩家
    void handleMonsterMove(int direction, int steps, Monster& m);
    void explodeObject(RPGObj r);
    void occurObject(RPGObj r);
    void playerProduceBomb();
    void monsterProduceBomb();
    void monsterMinus(RPGObj r);
    bool monsterMinusb(Bullet &r);
    void bombTimeCount();
    void EWSNM(RPGObj r);
    void monsterMove(int direction,int steps);
    bool canMove(int direction,int steps);
    void FireEWSNM();
    int getNum(Weapon *weapon){return weapon->getNumber();}
    int getFire(){return fire.getNumber();}
    int getIce(){return ice.getNumber();}
    int getBomb(){return _bomb;}
    int getBoAr(){return bo.getNumber();}
    void minusPlayer(RPGObj &r);
    void iceString();
    bool freezeMonster(Ice &ic);
    void freezeCount();
    void ProduceBullet();
    void BulletMove();
    void addBomb(){_bomb++;}
    int getPlayerLife(){return _player.getLife();}
    bool getWP1(){return WP1;}
    bool getWP2(){return WP2;}
    bool getWP3(){return WP3;}
    bool level1Over(){return _over;}
    void poisonSurrounding();
    void poisonMove(int direction, int steps);
    void poisonCount();
    void setPoison(){_poisonCount=0;}
    void randomCreate();
    int monsterNum(){return monster_.size();}
    int getPlayerScore(){return _score;}
    void clearbomb(){_bombs.clear();}
    void clearMonster(){monster_.clear();}
    void clearObj(){_objs.clear();}
    void meetMonster();
private:
    vector<RPGObj> _objs,_exploid,_fire,_ice;
    vector<Bomb> _bombs;
    vector<Monster> monster_;
    vector<Player> player_;
    vector<Poison> _poison;
    vector<Bullet> _bullet;
    Player _player;
    Fire fire;
    Ice ice;
    bodyarmor bo;
    static  bool _over;
    static int _move;
    int _bomb;
    static int _directionChange;
    int _poisonCount;
    static int _score;
    static bool WP1,WP2,WP3;
};
#endif // WORLD_H
