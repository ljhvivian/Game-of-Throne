#include "bomb.h"


void Bomb::explode()
{
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\bomb.mp3"));
    player->setVolume(30);
    player->play();
}

Bomb::~Bomb()
{

}

