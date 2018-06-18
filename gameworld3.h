#ifndef GAMEWORLD3_H
#define GAMEWORLD3_H
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
class Gameworld3;
}

class Gameworld3 : public QDialog
{
    Q_OBJECT

public:
    explicit Gameworld3(QWidget *parent = 0);
    ~Gameworld3();
    void paintEvent(QPaintEvent *e);
    void keyPressEvent(QKeyEvent *);
    int getScore(){return _game.getPlayerScore();}
    bool ifGetWP(){return _game.getWP3();}
protected slots:
    void randomMove();//响应时钟事件的函数
private:
    Ui::Gameworld3 *ui;
    World _game;
    NoteTable _gameRecord;
    QTimer *timer;
    //时钟，控制玩家移动频率
    static int _randomProduceBomb;
    static int _monsterCount;
    static int _bombCount;
    static int _score3;
};

#endif // GAMEWORLD3_H
