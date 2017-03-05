//
// Created by giulia on 06/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_ZOMBIE_H
#define LEGENDS_OF_WESTEROS_ZOMBIE_H


#include "MagicTroop.h"

class Zombie : public MagicTroop {
public:
    Zombie();
    float getMagic() override;

private:
    float attack;
    float defense;
    float magic;

};


#endif //LEGENDS_OF_WESTEROS_ZOMBIE_H
