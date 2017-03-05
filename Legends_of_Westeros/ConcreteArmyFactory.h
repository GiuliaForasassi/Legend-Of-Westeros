//
// Created by giulia on 16/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_CONCRETEARMYFACTORY_H
#define LEGENDS_OF_WESTEROS_CONCRETEARMYFACTORY_H

#include "AbstractArmyFactory.h"
#include "Lannister.h"

class ConcreteArmyFactory : public AbstractArmyFactory {
    Army* createArmy(int i, int type1, int type2) override ;
};


#endif //LEGENDS_OF_WESTEROS_CONCRETEARMYFACTORY_H
