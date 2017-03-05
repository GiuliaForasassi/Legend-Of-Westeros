//
// Created by giulia on 16/12/16.
//

#include "ConcreteArmyFactory.h"

// TODO usare enum per il tipo di armata
Army* createArmy(int i, int type1, int type2) {
    return new Lannister();
}