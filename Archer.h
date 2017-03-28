//
// Created by giulia on 06/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_ARCHER_H
#define LEGENDS_OF_WESTEROS_ARCHER_H

#include "SimpleTroop.h"

class Archer : public SimpleTroop {
public:
    Archer();
    float getStrenght () override;
private:
    float defense;
    float attack;
    float strenght;

};


#endif //LEGENDS_OF_WESTEROS_ARCHER_H
