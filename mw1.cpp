#include "mw1.h"
#include "ui_mw1.h"
#include "icon.h"
#include <QTimer>
#include <map>

using namespace std;
int MW1::_randomProduceBomb=0;
MW1::MW1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MW1)
{
    ui->setupUi(this);

    //init game world
    _game.initWorld("D:\\Bomber\\mapfile.txt");

    //以下是对时钟的初始化
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(randomMove()));//timeoutslot()为自定义槽
        //时钟事件与randomMove函数绑定
    timer->start(100);
    timer->setInterval(1000);

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        //设置随机数种子
}

MW1::~MW1()
{
    delete ui;
}

void MW1::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    this->_game.show(pa);
    pa->end();
    delete pa;
}

void MW1::keyPressEvent(QKeyEvent *e)
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
    this->repaint();
}


void MW1::randomMove(){
    int d = 1 + rand()%4;
    this->_game.handleMonster1Move(d,1);
    _randomProduceBomb++;
    if(_randomProduceBomb==5){
        _game.monsterProduceBomb();
        _randomProduceBomb=0;
    }
    _game.bombTimeCount();
    this->repaint();
}
