#include "ice.h"

Ice::Ice()
{

}
void Ice::explode()
{
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\ice.mp3"));
    player->setVolume(30);
    player->play();
}
Ice::~Ice()
{

}

