#include "monster.h"

Monster::~Monster()
{

}
void Monster::explode()
{
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\monster.mp3"));
    player->setVolume(30);
    player->play();
}
