//
// Created by giulia on 06/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_KNIGHT_H
#define LEGENDS_OF_WESTEROS_KNIGHT_H


#include "SimpleTroop.h"

class Knight : public SimpleTroop {
public:
    Knight();
    float getStrenght () override;
private:
    float defense;
    float attack;
    float strenght;

};


#endif //LEGENDS_OF_WESTEROS_KNIGHT_H
