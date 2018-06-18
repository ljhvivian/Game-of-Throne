#include "bodyarmor.h"

bodyarmor::bodyarmor()
{

}
void bodyarmor::onErase_fruit()
{
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\fruit.mp3"));
    player->setVolume(30);
    player->play();

}

bodyarmor::~bodyarmor()
{

}

