//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_TARGARYEN_H
#define LEGENDS_OF_WESTEROS_TARGARYEN_H

#include "Army.h"
#include "Soldier.h"
#include "Dragon.h"
#include "SimpleTroop.h"
#include "MagicTroop.h"

class Targaryen : public Army {
public:
    Targaryen();
    Targaryen(int nd,int ns);
    //int getPower(int s, int numS, int numD, int a, int d) override ;
    float getPower();


    //int getDefense() const {
    //    return defense;
    //}


private:
    float power;
    //int defense;
    int numDragons;
    int numSoldiers;
    SimpleTroop* strenghtS;
    MagicTroop* magicD;
};


#endif //LEGENDS_OF_WESTEROS_TARGARYEN_H
