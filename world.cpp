#include "world.h"
#include "icon.h"
#include"weapon.h"
#include<fstream>
#include<string>
#include<iostream>
#include <QMediaPlayer>
bool World::_over=0;
int World::_move=0;
int World::_directionChange=0;
int World::_score=0;
bool World::WP1=0;
bool World::WP2=0;
bool World::WP3=0;
void World::initWorld(char* mapFile){
    ifstream infile;
    infile.open(mapFile,ios::in);
    string objs;
    int x,y;
    RPGObj obj;
    Player player;
    Monster monster;
    while(infile>>objs>>x>>y){
                obj.initObj(objs);
                obj.setPosX(x);
                obj.setPosY(y);
                this->_objs.push_back(obj);
    }
    this->_player.initObj("player1");
    _player.setPosX(0);_player.setPosY(0);
    player.initObj("player1");
    this->player_.push_back(player);
    player.initObj("player2");
    this->player_.push_back(player);
    player.initObj("player3");
    this->player_.push_back(player);
    player.initObj("player4");
    this->player_.push_back(player);
    monster.initObj("monster");
    monster.setPosX(5);monster.setPosY(5);
    this->monster_.push_back(monster);
    monster.initObj("monster");
    monster.setPosX(7);monster.setPosY(8);
    this->monster_.push_back(monster);
    monster.initObj("monster");
    monster.setPosX(8);monster.setPosY(15);
    this->monster_.push_back(monster);
}
void World::show(QPainter * painter){
    vector<RPGObj>::iterator it;
    vector<Bomb>::iterator iter;
    vector<Monster>::iterator monsterIt;
    vector<Bullet>::iterator itB;
    vector<Poison>::iterator PoisonIt;
    if(!_over){
        int i=1;
        for(it=this->_objs.begin();it!=this->_objs.end();it++) (*it).show(painter);
        //控制人向不同方向移动，显示侧面不同
        if(_move==1){
            i=_player.getdi();
            vector<Player>::iterator it2;
            it2=this->player_.begin();
            (*(it2+i-1)).setPosX(_player.getPosX());
            (*(it2+i-1)).setPosY(_player.getPosY());
            (*(it2+i-1)).show(painter);
        }
        else if(_move==0){_player.show(painter);_move=1;}
        if(_player.getPosX()==25&&_player.getPosY()==19)//判断是否得到武器
        {if(WP1==0)WP1=1;
         else if(WP1!=0&&WP2==0)WP2=1;
         else if(WP1!=0&&WP2!=0&&WP3==0)WP3=1;}
        for(monsterIt=this->monster_.begin();monsterIt!=this->monster_.end();monsterIt++)
            if((*monsterIt).getLife()>0) (*monsterIt).show(painter);//显示monster
        meetMonster();
        for(iter=this->_bombs.begin();iter!=this->_bombs.end();)//炸弹爆炸
        {
            if((*iter)._timeCount==5){
                EWSNM(*iter);
                (*iter).explode();
                for(it=this->_exploid.begin();it!=this->_exploid.end();it++){
                    (*it).show(painter);
                    minusPlayer(*it);
                    explodeObject(*it);
                    monsterMinus(*it);
                }
                _exploid.clear();
                _bombs.erase(iter);
            }
            else  {(*iter).show(painter);iter++;}
        }
        for(itB=_bullet.begin();itB!=_bullet.end();)//子弹射击monster
        {
            (*itB).show(painter);
            if(monsterMinusb(*itB)) {_bullet.erase(itB);}
            else itB++;
        }
        for(it=_fire.begin();it!=_fire.end();it++){//火
            (*it).show(painter);
            explodeObject(*it);
            monsterMinus(*it);
        }
        _fire.clear();
        for(it=_ice.begin();it!=_ice.end();it++){//冰
            (*it).show(painter);
        }
        _ice.clear();
        PoisonIt=_poison.begin();//毒
        if(_poisonCount==3) {_poison.clear();_poisonCount=-1;}
        else {
        for(PoisonIt=_poison.begin();PoisonIt!=_poison.end();PoisonIt++)
        {
            (*PoisonIt).show(painter);
            explodeObject(*PoisonIt);
            monsterMinus(*PoisonIt);
        }}
    }
    if(!_player.getLife()&&!_over){//判断玩家是否死亡
        cout<<"GAME OVER!"<<endl;
        _over=1;
    }

}
void World::meetMonster()
{
    vector<Monster>::iterator it;
    for(it=this->monster_.begin();it!=this->monster_.end();it++){
        if((*it).getPosX()==_player.getPosX()&&(*it).getPosY()==_player.getPosY())
        {_player.minusLife();_score-=10;_player.explode();}
}}

void World::minusPlayer(RPGObj &r)
{
    if(_player.getPosX()==r.getPosX()&&_player.getPosY()+1==r.getPosY())
    {
        if(getBoAr()>0) bo.minusWeapon();
        else
        {_player.minusLife();
         _score-=10;
        _player.explode();}
    }
}
void World::monsterMinus(RPGObj r)
{
    vector<Monster>::iterator it;
    for(it=this->monster_.begin();it!=this->monster_.end();){
        if((*it).getPosX()==r.getPosX()&&(*it).getPosY()+1==r.getPosY()){
            {monster_.erase(it);_score+=10;
                (*it).explode();}
        }
        else it++;}
}
bool World::monsterMinusb(Bullet &r)
{
    bool attackMonster=0;
    vector<Monster>::iterator it;
    for(it=this->monster_.begin();it!=this->monster_.end();){
        if((*it).getPosX()==r.getPosX()&&(*it).getPosY()+1==r.getPosY()){
            (*it).minusLife();
            attackMonster=1;
            if((*it).getLife()<=0) {monster_.erase(it);(*it).explode();}
        }
        else it++;
    }
    return attackMonster;
}

void World::explodeObject(RPGObj r)
{
    vector<RPGObj>::iterator it;
    for(it=this->_objs.begin();it!=this->_objs.end();){
        if((*it).canBomb()&&r.getPosX()==(*it).getPosX()&&r.getPosY()==(*it).getPosY()){
            RPGObj obj;
            obj.setPosX((*it).getPosX());
            obj.setPosY((*it).getPosY());
            _objs.erase(it);
            int d=rand()%8+1;
            if(d==1) obj.initObj("fruit");
            else if(d==2) {obj.initObj("fire");}
            else if(d==3) obj.initObj("bodyarmor");
            else if(d==4) obj.initObj("ice");
            else
            {
                if(WP1==1&&WP2==1&&WP3==0) obj.initObj("nightroad");
                if(WP1==1&&WP2==0) obj.initObj("nightgrass");
                if(WP1==0) obj.initObj("grass");
            }
            _objs.push_back(obj);
        }
        else it++;
    }
}
bool World::handlePlayerMove(int direction, int steps)
{
    bool move=1;
    int x=_player.getPosX(),y=_player.getPosY();
    if(direction==1)  y--;
    else if(direction==2)  y++;
    else if(direction==3)  x--;
    else if(direction==4)  x++;
    vector<RPGObj>::iterator it;
    for(it=this->_objs.begin();it!=this->_objs.end();it++)
    {if((*it).getPosX()==x&&(*it).getPosY()==(y+1)){
            if(!(*it).canCover())  move=0;
            if((*it).canFire()) {fire.addWeapon();}
        if((*it).canFreeze()) ice.addWeapon();
        if((*it).canAddlife()) bo.addWeapon();
            if((*it).canEat()){
                _score++;
                (*it).onErase_fruit();
                if(WP1==1&&WP2==0) (*it).initObj("nightgrass");
                else if(WP1==0) (*it).initObj("grass");
                else if(WP1==1&&WP2==1&&WP3==0) (*it).initObj("nightroad");
                }

        }
}
    if(move&&x>=0&&y>=0&&x<=25&&y<=19)
    {this->_player.move(direction,steps);
        vector<Poison>::iterator PoisonIt;
        for(PoisonIt=_poison.begin();PoisonIt!=_poison.end();PoisonIt++)
        {
            (*PoisonIt).move(direction,steps);
        }}
    return move;
}
void World::monsterMove(int direction, int steps)
{
    vector<Monster>::iterator monsterIt;
    for(monsterIt=monster_.begin();monsterIt!=monster_.end();monsterIt++){
        handleMonsterMove((direction+_directionChange)%4+1,steps,*monsterIt);
        _directionChange++;
    }
}
void World::handleMonsterMove(int direction, int steps,Monster& m){
    int move=1;
    int x=m.getPosX(),y=m.getPosY();
    vector<RPGObj>::iterator it;
    if(direction==1)  y--;
    else if(direction==2)  y++;
    else if(direction==3)  x--;
    else if(direction==4)  x++;
    for(it=this->_objs.begin();it!=this->_objs.end();it++){
        if((*it).getPosX()==x&&(*it).getPosY()==(y+1)){
        if(!(*it).canCover()) move=0;}}
        if(move&&(x>=0)&&(y>=0)&&x<=25&&y<=19&&m.freezeCount()==0)  {m.initObj("monster"); m.move(direction, steps);}
}

void World::playerProduceBomb()
{
    if(_bomb>0)
    {
    Bomb bomb;
    bomb.initObj("bomb");
    bomb.setPosX(_player.getPosX());
    bomb.setPosY(_player.getPosY()+1);
    _bombs.push_back(bomb);
    _bomb--;}
}

void World::monsterProduceBomb()
{
        Bomb bomb;
        bomb.initObj("bomb");
        vector<Monster>::iterator it;
        for(it=monster_.begin();it!=monster_.end();it++){
            if((*it).freezeCount()==0){
            bomb.setPosX((*it).getPosX());
            bomb.setPosY((*it).getPosY()+1);}
        }
        _bombs.push_back(bomb);
}

void World::bombTimeCount(){
    vector<Bomb>::iterator iter;
    for(iter=this->_bombs.begin();iter!=this->_bombs.end();iter++)
        (*iter)._timeCount++;
}

void World::freezeCount(){
    vector<Monster>::iterator it;
    for(it=this->monster_.begin();it!=this->monster_.end();it++){
        if((*it).freezeCount()>0){cout<<(*it).freezeCount()<<endl;(*it).freezeMinus();}}
}

void World::FireEWSNM()
{
    Fire f;
    int i;
    f.initObj("fire_explode");
    fire.explode();
    fire.minusWeapon();
    for(i=0;i<26;i++)
    {
        if(i!=_player.getPosX()) f.setPosX(i);
        f.setPosY(_player.getPosY()+1);
        _fire.push_back(f);
    }
    for(i=0;i<21;i++)
    {
        f.setPosX(_player.getPosX());
        if(i!=_player.getPosY()&&i!=_player.getPosY()+1) f.setPosY(i);
        _fire.push_back(f);
    }
}

void World::EWSNM(RPGObj r)
{
    Weapon wp;
    wp.initObj("exploid");
    wp.setPosX(r.getPosX());wp.setPosY(r.getPosY());
    _exploid.push_back(wp);
    wp.setPosX(r.getPosX()+1);wp.setPosY(r.getPosY());
    _exploid.push_back(wp);
    wp.setPosX(r.getPosX()-1);wp.setPosY(r.getPosY());
    _exploid.push_back(wp);
    wp.setPosX(r.getPosX());wp.setPosY(r.getPosY()+1);
    _exploid.push_back(wp);
    wp.setPosX(r.getPosX());wp.setPosY(r.getPosY()-1);
    _exploid.push_back(wp);
}
bool World::freezeMonster(Ice &ic)
{
    int found=0;
    vector<Monster>::iterator it;
    for(it=monster_.begin();it!=monster_.end();it++)
    {
        if((*it).getPosX()==ic.getPosX()&&(*it).getPosY()+1==ic.getPosY())
        {
            (*it).changeFreeze();
            ic.explode();
            (*it).initObj("icemonster");
            found=1;
            break;
        }
    }
    return found;
}
void World::iceString()
{
    Ice ic;
    ice.minusWeapon();
    int i;
    if(_player.getdi()==1)
    {
        for(i=0;_player.getPosY()-i-1>=0;i++)
        {
            ic.initObj("ice_spread");
            ic.setPosX(_player.getPosX());
            ic.setPosY(_player.getPosY()-i-1);
            _ice.push_back(ic);
            if(freezeMonster(ic)) break;
        }
    }
    else if(_player.getdi()==2)
    {
        for(i=0;_player.getPosY()+i+1<=20;i++)
        {
            ic.initObj("ice_spread");
            ic.setPosX(_player.getPosX());
            ic.setPosY(_player.getPosY()+i+1);
            _ice.push_back(ic);
            if(freezeMonster(ic)) break;
        }
    }
    else if(_player.getdi()==3)
    {
        for(i=0;_player.getPosX()-i-1>=0;i++)
        {
            ic.initObj("ice_spread");
            ic.setPosX(_player.getPosX()-i-1);
            ic.setPosY(_player.getPosY()+1);
            _ice.push_back(ic);
            if(freezeMonster(ic)) break;
        }
    }
    else if(_player.getdi()==4)
    {
        for(i=0;_player.getPosX()+i+1<=25;i++)
        {
            ic.initObj("ice_spread");
            ic.setPosX(_player.getPosX()+i+1);
            ic.setPosY(_player.getPosY()+1);
            _ice.push_back(ic);
            if(freezeMonster(ic)) break;
        }
    }
}
void World::BulletMove()
{
    vector<Bullet>::iterator BulletIt;
    for(BulletIt=_bullet.begin();BulletIt!=_bullet.end();)
    {
        bool move=1;
        bool _delete=0;
        int x=(*BulletIt).getPosX(),y=(*BulletIt).getPosY();
        if((*BulletIt).getDirection()==1) y--;
        else if((*BulletIt).getDirection()==2)  {y++;}
        else if((*BulletIt).getDirection()==3)  x--;
        else if((*BulletIt).getDirection()==4)  x++;
        if(x<0||x>25||y<0||y>20) {_bullet.erase(BulletIt);_delete=1;}
        else{
        vector<RPGObj>::iterator it;
        for(it=this->_objs.begin();it!=this->_objs.end();it++){
            if((*it).getPosX()==x&&(*it).getPosY()==y){
                RPGObj obj=(*it);
                if(!obj.canCover())  {move=0;_bullet.erase(BulletIt);_delete=1;}}}}
        if(move&&!_delete) {(*BulletIt).move((*BulletIt).getDirection(),1);BulletIt++;}
    }
}
void World::ProduceBullet()
{
    Bullet b;
    b.initObj("bullet");
    b.setPosX(_player.getPosX());
    b.setPosY(_player.getPosY()+1);
    b.setDirection(_player.getdi());
    _bullet.push_back(b);
}
void World::poisonSurrounding()
{
    Poison wp;
    int i,j;
    wp.initObj("WP2");
    setPoison();
    for(i=_player.getPosY();i<=_player.getPosY()+2;i++)
    {
        for(j=_player.getPosX()-1;j<=_player.getPosX()+1;j++)
        {
            wp.setPosX(j);wp.setPosY(i);
            _poison.push_back(wp);
        }
    }
}
void World::poisonCount()
{
    if(_poisonCount>=0) _poisonCount++;
}
void World::randomCreate()
{    Monster monster;
     monster.initObj("monster");
    int d1 = rand()%20;
    int d2 = rand()%20;
    monster.setPosX(d1);
    monster.setPosY(d2);
    this->monster_.push_back(monster);
}

