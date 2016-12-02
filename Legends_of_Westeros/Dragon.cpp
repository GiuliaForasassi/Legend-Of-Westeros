//
// Created by acasali on 27/11/16.
//

#include "Dragon.h"

Dragon::Dragon() : attack(10), defense(8) {}

int Dragon::getMagic(int a, int d) {
    attack = a;
    defense = d;
    magic = ((a + d)/2);
    return 0;
}
