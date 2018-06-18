#include "character.h"
#include<iostream>
//direction =1,2,3,4 for 上下左右
void Character::move(int direction, int steps){
    switch (direction){
        case 1:
            this->_pos_y -= steps;
            di=1;
            break;
        case 2:
            this->_pos_y += steps;
            di=2;
            break;
        case 3:
            this->_pos_x -= steps;
            di=3;
            break;
        case 4:
            this->_pos_x += steps;
            di=4;
            break;
    }
}
