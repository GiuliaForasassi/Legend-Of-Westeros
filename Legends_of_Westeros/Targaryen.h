//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_TARGARYEN_H
#define LEGENDS_OF_WESTEROS_TARGARYEN_H

#include "ArmyFactory.h"
#include "Soldier.h"
#include "Dragon.h"
#include "SimpleTroop.h"
#include "MagicTroop.h"

class Targaryen : public ArmyFactory {
public:
    Targaryen();
    int getPower(int s, int numS, int numD);



    //int getDefense() const {
    //    return defense;
    //}


private:
    int power;
    //int defense;
    int numDragons;
    int numSoldiers;
    SimpleTroop *strenghtS;

};


#endif //LEGENDS_OF_WESTEROS_TARGARYEN_H
