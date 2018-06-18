#include "fruit.h"
using namespace std;
#include <iostream>
Fruit::Fruit()
{

}

Fruit::~Fruit()
{

}
void Fruit::onErase_fruit()
{
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\fruit.mp3"));
    player->setVolume(30);
    player->play();
}

