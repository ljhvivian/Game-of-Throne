#include "world.h"
#include "icon.h"
#include"weapon.h"
#include "object.h"
#include<fstream>
#include<string>
#include<iostream>
#include<set>
bool World::_over=0;
int World::_playercount=2;
int World::_monstercount=2;
bool World::_over1=0;
int World::move=0;
void World::initWorld(char* mapFile){
    ifstream infile;
    infile.open(mapFile,ios::in);
    string objs;
    int x,y;
    RPGObj obj,player;
    while(infile>>objs>>x>>y){
        obj.initObj(objs);
        obj.setPosX(x);
        obj.setPosY(y);
        this->_objs.push_back(obj);
    }
    this->_player.initObj("player1");
    _player.setPosX(0);
    _player.setPosY(0);
    player.initObj("player1");
    this->player_.push_back(player);
    player.initObj("player2");
    this->player_.push_back(player);
    player.initObj("player3");
    this->player_.push_back(player);
    player.initObj("player4");
    this->player_.push_back(player);
    this->_monster1.initObj("monster");
    this->_monster1.setPosX(7);
    this->_monster1.setPosY(8);
    this->_monster2.initObj("monster");
    this->_monster2.setPosX(7);
    this->_monster2.setPosY(8);
    this->_monster3.initObj("monster");
    this->_monster3.setPosX(8);
    this->_monster3.setPosY(15);
}
void World::show(QPainter * painter){
    vector<RPGObj>::iterator it;
    vector<Weapon>::iterator iter;
    if(!_over){
        int i=1;
        for(it=this->_objs.begin();it!=this->_objs.end();it++)
            (*it).show(painter);
        if(move==1)
        {
            i=_player.getdi();
            vector<RPGObj>::iterator it2;
            it2=this->player_.begin();
            (*(it2+i-1)).setPosX(_player.getPosX());
            (*(it2+i-1)).setPosY(_player.getPosY());
            (*(it2+i-1)).show(painter);
        }
        else if(move==0)
        {_player.show(painter);
            move=1;}
        if(_monstercount&&!_over1) this->_monster1.show(painter);
        for(iter=this->_bombs.begin();iter!=this->_bombs.end();){
            if((*iter)._timeCount==6){
                EWSNM(*iter);
                for(it=this->_exploid.begin();it!=this->_exploid.end();it++){
                    (*it).show(painter);
                    if(_player.getPosX()==(*it).getPosX()&&_player.getPosY()+1==(*it).getPosY())
                                        {
                                            _playercount--;
                                            cout<<_playercount<<endl;
                                        }
                    explodeObject(*it);
                    if(_monster1.getPosX()==(*it).getPosX()&&_monster1.getPosY()+1==(*it).getPosY())
                                        {
                                            _monstercount--;
                                            cout<<_monstercount<<endl;
                                        }
                }
                _exploid.clear();
                _bombs.erase(iter);

            }
            else  {(*iter).show(painter);iter++;}
        }
    }
    if(!_over&&!_playercount){
        cout<<"GAME OVER!"<<endl;
        _over=1;
    }
    if(!_over1&&!_monstercount)
    {
        _over1=1;
    }
}

void World::explodeObject(RPGObj r)
{
    vector<RPGObj>::iterator it;
    for(it=this->_objs.begin();it!=this->_objs.end();){
        if((*it).canBomb()&&r.getPosX()==(*it).getPosX()&&r.getPosY()==(*it).getPosY()){
            Object obj;
            obj.setPosX((*it).getPosX());
            obj.setPosY((*it).getPosY());
            _objs.erase(it);
            int d=rand()%5+1;
            if(d==1)  obj.initObj("fruit");
            else if(d==2) obj.initObj("fire");
            else if(d==3) obj.initObj("bodyarmor");//balabalabala```
            else if(d==4) obj.initObj("ice");
            _objs.push_back(obj);
        }
        else it++;
    }
}

void World::handlePlayerMove(int direction, int steps){
    bool move=0;
    int x=_player.getPosX(),y=_player.getPosY();
    if(direction==1)  y--;
    else if(direction==2)  y++;
    else if(direction==3)  x--;
    else if(direction==4)  x++;
    vector<RPGObj>::iterator it;
    for(it=this->_objs.begin();it!=this->_objs.end();it++)
        if((*it).getPosX()==x&&(*it).getPosY()==(y+1)){
            RPGObj obj=(*it);
            if(obj.canCover())  move=1;
            if(obj.canEat()){
                (*it).initObj("grass");//吃掉之后变成草坪
            }
        }
    if(move)  this->_player.move(direction,steps);
}
void World::handleMonster1Move(int direction, int steps){
    int x=_monster1.getPosX(),y=_monster1.getPosY();
    vector<RPGObj>::iterator it;
    if(direction==1)  y--;
    else if(direction==2)  y++;
    else if(direction==3)  x--;
    else if(direction==4)  x++;
    for(it=this->_objs.begin();it!=this->_objs.end();it++)
        if((*it).getPosX()==x&&(*it).getPosY()==(y+1))  break;
    if(it!=this->_objs.end()){
        RPGObj obj=(*it);
        if(obj.canCover()&&(x>=0)&&(y>=0)&&_over1==0)  this->_monster1.move(direction, steps);
    }
}

void World::handleMonster2Move(int direction, int steps){
    int x=_monster2.getPosX(),y=_monster2.getPosY();
    vector<RPGObj>::iterator it;
    if(direction==1)  y--;
    else if(direction==2)  y++;
    else if(direction==3)  x--;
    else if(direction==4)  x++;
    for(it=this->_objs.begin();it!=this->_objs.end();it++)
        if((*it).getPosX()==x&&(*it).getPosY()==(y+1))  break;
    if(it!=this->_objs.end()){
        RPGObj obj=(*it);
        if(obj.canCover()&&(x>=0)&&(y>=0))  this->_monster2.move(direction, steps);
    }
}

void World::handleMonster3Move(int direction, int steps){
    int x=_monster3.getPosX(),y=_monster3.getPosY();
    vector<RPGObj>::iterator it;
    if(direction==1)  y--;
    else if(direction==2)  y++;
    else if(direction==3)  x--;
    else if(direction==4)  x++;
    for(it=this->_objs.begin();it!=this->_objs.end();it++)
        if((*it).getPosX()==x&&(*it).getPosY()==(y+1))  break;
    if(it!=this->_objs.end()){
        RPGObj obj=(*it);
        if(obj.canCover()&&(x>=0)&&(y>=0))  this->_monster3.move(direction, steps);
    }
}

void World::playerProduceBomb()
{
    Weapon bomb;
    bomb.initObj("bomb");
    bomb.setPosX(_player.getPosX());
    bomb.setPosY(_player.getPosY()+1);
    _bombs.push_back(bomb);
}

void World::monsterProduceBomb()
{
    if(_over1==0)
    {
        Weapon bomb;
        bomb.initObj("bomb");
        bomb.setPosX(_monster1.getPosX());
        bomb.setPosY(_monster1.getPosY()+1);
        _bombs.push_back(bomb);
    }

}

void World::bombTimeCount(){
    vector<Weapon>::iterator iter;
    for(iter=this->_bombs.begin();iter!=this->_bombs.end();iter++)
        (*iter)._timeCount++;
}

void World::EWSNM(RPGObj r)
{
    Weapon wp;
    wp.initObj("exploid");
    wp.setPosX(r.getPosX());
    wp.setPosY(r.getPosY());
    _exploid.push_back(wp);
    wp.setPosX(r.getPosX()+1);
    wp.setPosY(r.getPosY());
    _exploid.push_back(wp);
    wp.setPosX(r.getPosX()-1);
    wp.setPosY(r.getPosY());
    _exploid.push_back(wp);
    wp.setPosX(r.getPosX());
    wp.setPosY(r.getPosY()+1);
    _exploid.push_back(wp);
    wp.setPosX(r.getPosX());
    wp.setPosY(r.getPosY()-1);
    _exploid.push_back(wp);
}
