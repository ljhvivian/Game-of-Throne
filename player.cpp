#include "player.h"

Player::Player()
{
}
void Player::explode()
{
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Bomber3\\hurt.mp3"));
    player->setVolume(30);
    player->play();
}

Player::~Player()
{

}

