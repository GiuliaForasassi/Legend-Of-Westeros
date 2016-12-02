//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_DRAGON_H
#define LEGENDS_OF_WESTEROS_DRAGON_H

#include "MagicTroop.h"

class Dragon : public MagicTroop {
public:
    Dragon();
    int getMagic(int a, int d);

private:
    int attack;
    int defense;
    int magic;

};


#endif //LEGENDS_OF_WESTEROS_DRAGON_H
