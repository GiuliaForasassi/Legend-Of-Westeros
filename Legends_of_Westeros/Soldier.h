//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_SOLDIER_H
#define LEGENDS_OF_WESTEROS_SOLDIER_H

#include "SimpleTroop.h"

class Soldier : public SimpleTroop{
public:
    Soldier();
    int getStrenght(int a, int d);
private:
    int defense;
    int attack;
    int strenght;



};


#endif //LEGENDS_OF_WESTEROS_SOLDIER_H
