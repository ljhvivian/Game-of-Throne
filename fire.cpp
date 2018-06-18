#include "fire.h"


Fire::~Fire()
{

}
void Fire::explode()
{
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\fire.mp3"));
    player->setVolume(30);
    player->play();
}

