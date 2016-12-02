//
// Created by acasali on 27/11/16.
//

#include "Soldier.h"

Soldier::Soldier() : attack(1), defense(2) {}

int Soldier::getStrenght(int a, int d) {
    attack = a;
    defense = d;
    strenght = ((a + d)/2);
    return 0;
}

