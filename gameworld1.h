#ifndef GAMEWORLD1_H
#define GAMEWORLD1_H
#include <QDialog>
#include <QImage>
#include <QPainter>
#include <QKeyEvent>
#include "rpgobj.h"
#include "world.h"
#include <notetable.h>
#include<QTime>
#include<QTimer>
#include<QMediaPlayer>

namespace Ui {
class Gameworld1;
}

class Gameworld1 : public QDialog
{
    Q_OBJECT

public:
    explicit Gameworld1(QWidget *parent = 0);
    ~Gameworld1();
    void paintEvent(QPaintEvent *e);
    void keyPressEvent(QKeyEvent *);
    virtual int getScore(){return _game.getPlayerScore();}
    virtual bool ifGetWP(){return _game.getWP1();}
protected slots:
    void randomMove();//响应时钟事件的函数
private:
    Ui::Gameworld1 *ui;
    World _game;
    //World2 _game;
    NoteTable _gameRecord;
    QTimer *timer;
    //时钟，控制玩家移动频率
    static int _randomProduceBomb;
    static int _monsterCount;
    static int _bombCount;
};

#endif // GAMEWORLD1_H
