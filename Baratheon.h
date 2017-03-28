//
// Created by giulia on 06/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_BARATHEON_H
#define LEGENDS_OF_WESTEROS_BARATHEON_H

#include "SimpleTroop.h"
#include "MagicTroop.h"
#include "Army.h"

class Baratheon : public Army {
public:
    Baratheon();
    Baratheon(int nrw,int nk);
    float getPower();

private:
    float power;
    int numRedWizards;
    int numKnights;
    SimpleTroop* strenghtS;
    MagicTroop* magicD;

};


#endif //LEGENDS_OF_WESTEROS_BARATHEON_H
