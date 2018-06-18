#ifndef GAMEWORLD2_H
#define GAMEWORLD2_H
#include <QDialog>
#include <QImage>
#include <QPainter>
#include<QKeyEvent>
#include "rpgobj.h"
#include "world.h"
#include "notetable.h"
#include<QTime>
#include<QTimer>

namespace Ui {
class Gameworld2;
}

class Gameworld2: public QDialog
{
    Q_OBJECT

public:
    explicit Gameworld2(QWidget *parent = 0);
    ~Gameworld2();
    void paintEvent(QPaintEvent *e);
    void keyPressEvent(QKeyEvent *);
    int getScore(){return _game.getPlayerScore();}
    bool ifGetWP(){return _game.getWP2();}

protected slots:
    void randomMove();//响应时钟事件的函数
private:
    Ui::Gameworld2 *ui;
    World _game;
    NoteTable _gameRecord;
    QTimer *timer;
    //时钟，控制玩家移动频率
    static int _randomProduceBomb;
    static int _monsterCount;
    static int _bombCount;
};

#endif // GAMEWORLD2_H
