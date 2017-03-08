//
// Created by giulia on 16/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_CONCRETEARMYFACTORY_H
#define LEGENDS_OF_WESTEROS_CONCRETEARMYFACTORY_H

#include "AbstractArmyFactory.h"
#include "Lannister.h"

class ConcreteArmyFactory : public AbstractArmyFactory {
    ConcreteArmyFactory(house namehouse) : namehouse(namehouse){}
    Army* createArmy(int typeSimple, int typeMagic) override ;

private:
    house namehouse;
};


#endif //LEGENDS_OF_WESTEROS_CONCRETEARMYFACTORY_H
