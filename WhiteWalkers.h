//
// Created by giulia on 06/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_WHITEWALKERS_H
#define LEGENDS_OF_WESTEROS_WHITEWALKERS_H


#include "Army.h"
#include "SimpleTroop.h"
#include "MagicTroop.h"

class WhiteWalkers : public Army{
public:
    WhiteWalkers();
    WhiteWalkers(int nz,int nk);
    float getPower();

private:
    float power;
    int numZombies;
    int numKnights;
    SimpleTroop* strenghtS;
    MagicTroop* magicD;

};


#endif //LEGENDS_OF_WESTEROS_WHITEWALKERS_H
