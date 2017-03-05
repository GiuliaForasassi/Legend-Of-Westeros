//
// Created by giulia on 06/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_GREYJOY_H
#define LEGENDS_OF_WESTEROS_GREYJOY_H


#include "Army.h"
#include "SimpleTroop.h"
#include "MagicTroop.h"

class Greyjoy : public Army {
public:
    Greyjoy();
    Greyjoy(int nw,int na);
    float getPower();

private:
    float power;
    int numWizards;
    int numArchers;
    SimpleTroop* strenghtS;
    MagicTroop* magicD;



};


#endif //LEGENDS_OF_WESTEROS_GREYJOY_H
