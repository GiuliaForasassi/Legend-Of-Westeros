//
// Created by acasali on 07/03/17.
//

#ifndef LEGENDS_OF_WESTEROS_GAMECHARACTER_H
#define LEGENDS_OF_WESTEROS_GAMECHARACTER_H


#include "AbstractArmyFactory.h"
#include "Map.h"

class GameCharacter : public AbstractArmyFactory {
public:
    GameCharacter();
    void conquer();


private:
    void searchenemy();
    Map* map;
    AbstractArmyFactory* abstractArmyFactory;
    //Strategy* strategy;


};


#endif //LEGENDS_OF_WESTEROS_GAMECHARACTER_H
