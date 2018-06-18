#include "gameworld1.h"
#include "ui_gameworld1.h"
#include "icon.h"
#include "world.h"
#include <QTimer>
#include<QString>
#include<sstream>
#include <map>
#include "notetable.h"
int Gameworld1::_randomProduceBomb=0;
int Gameworld1::_monsterCount=0;
int Gameworld1::_bombCount = 0;
Gameworld1::Gameworld1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gameworld1)
{
    ui->setupUi(this);
    //init game world
    _game.initWorld("D:\\Bomber3\\mapfile.txt");
    //init gameRecord notetable
    _gameRecord.initNoteTable();
    //以下是对时钟的初始化
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(randomMove()));//timeoutslot()为自定义槽
        //时钟事件与randomMove函数绑定
    timer->start(100);
    timer->setInterval(500);

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        //设置随机数种子
    resize(1000,680);
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\background.mp3"));
    player->setVolume(30);
    player->play();
}

Gameworld1::~Gameworld1()
{
    delete ui;
}

void Gameworld1::paintEvent(QPaintEvent *e){
    Q_UNUSED(e);
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    this->_game.show(pa);
    _gameRecord.loadWorld(_game);
    this->_gameRecord.show(pa);
    pa->end();
    delete pa;
    QPainter painter(this);
    QFont font;
    font.setPointSize(15);
    painter.setFont(font);
    painter.setPen(QPen(Qt::blue,10));
    const QString bombNum = QString(QString::fromLocal8Bit((_gameRecord.bombNum()).c_str()));
    const QString fireNum = QString(QString::fromLocal8Bit((_gameRecord.fireNum()).c_str()));
    const QString iceNum = QString(QString::fromLocal8Bit((_gameRecord.iceNum()).c_str()));
    const QString boArNum = QString(QString::fromLocal8Bit((_gameRecord.boArNum()).c_str()));
    painter.drawText(920,345,bombNum);
    painter.drawText(920,390,fireNum);
    painter.drawText(920,440,iceNum);
    painter.drawText(920,490,boArNum);
    std::stringstream ss;
    string str;
    ss<<_game.getPlayerScore();
    ss>>str;
    const QString scoreNum = QString(QString::fromLocal8Bit(str.c_str()));
    painter.drawText(900,50,scoreNum);
    if(_game.level1Over())  {_game.clearbomb();_game.clearMonster();_game.clearObj();close();}
    if(_game.getWP1()) {_game.clearbomb();_game.clearMonster();_game.clearObj();close();}

}

void Gameworld1::keyPressEvent(QKeyEvent *e)
{
    //direction = 1,2,3,4 for 上下左右
    if(e->key() == Qt::Key_A)
    {
        this->_game.handlePlayerMove(3,1);
    }
    else if(e->key() == Qt::Key_D)
    {
        this->_game.handlePlayerMove(4,1);
    }
    else if(e->key() == Qt::Key_W)
    {
        this->_game.handlePlayerMove(1,1);
    }
    else if(e->key() == Qt::Key_S)
    {
         this->_game.handlePlayerMove(2,1);
    }
    else if(e->key() == Qt::Key_Space)
    {
        this->_game.playerProduceBomb();
    }
    else if(e->key() == Qt::Key_B)
    {
        if(_game.getFire()>0){
        _game.FireEWSNM();}
    }
    else if(e->key() == Qt::Key_I)
    {
        if(_game.getIce()>0){
            _game.iceString();
        }
    }
   /* else if(e->key() == Qt::Key_F)
    {
            _game.ProduceBullet();
    }
    else if(e->key() == Qt::Key_P)
    {
        _game.poisonSurrounding();
    }*/
    this->repaint();
}


void Gameworld1::randomMove(){
    int d = 1 + rand()%4;
    this->_game.monsterMove(d,1);
    _randomProduceBomb++;
    if(_randomProduceBomb==5){
        _game.monsterProduceBomb();
        _randomProduceBomb=0;
    }//每个怪物随机移动
    if(_game.monsterNum()<=10){
    _monsterCount++;
    if(_monsterCount==5)
    {
        _game.randomCreate();
        _monsterCount=0;
    }}
    _bombCount++;
    if(_bombCount==10){
        _game.addBomb();
        _bombCount=0;
    }
    _game.freezeCount();
    _game.bombTimeCount();
    //_game.BulletMove();
    //_game.poisonCount();
    this->repaint();
}
