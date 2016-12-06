//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_SOLDIER_H
#define LEGENDS_OF_WESTEROS_SOLDIER_H

#include "SimpleTroop.h"

class Soldier : public SimpleTroop{
public:
    Soldier();
    float getStrenght () override;
private:
    float defense;
    float attack;
    float strenght;



};


#endif //LEGENDS_OF_WESTEROS_SOLDIER_H
