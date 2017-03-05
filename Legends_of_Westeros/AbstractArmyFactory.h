//
// Created by giulia on 16/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_ABSTRACTARMYFACTORY_H
#define LEGENDS_OF_WESTEROS_ABSTRACTARMYFACTORY_H

#include "Army.h"
#include "SimpleTroop.h"
#include "MagicTroop.h"
#include "Lannister.h"

class AbstractArmyFactory {
public:
    virtual Army* createArmy(int i, int type1, int type2) = 0;
};


#endif //LEGENDS_OF_WESTEROS_ABSTRACTARMYFACTORY_H
