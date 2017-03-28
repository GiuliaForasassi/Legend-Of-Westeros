//
// Created by acasali on 03/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_STARK_H
#define LEGENDS_OF_WESTEROS_STARK_H

#include "SimpleTroop.h"
#include "MagicTroop.h"
#include "Army.h"

class Stark : public Army {
public:
    Stark();
    Stark(int nw,int ns);
    //int getPower(int s, int numS, int numD, int a, int d) override ;
    float getPower();

private:
    float power;
    int numWizards;
    int numSoldiers;
    SimpleTroop* strenghtS;
    MagicTroop* magicD;

};


#endif //LEGENDS_OF_WESTEROS_STARK_H
