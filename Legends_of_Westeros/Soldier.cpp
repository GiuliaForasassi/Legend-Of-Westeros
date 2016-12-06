//
// Created by acasali on 27/11/16.
//

#include "Soldier.h"

Soldier::Soldier() : attack(1), defense(2) {
    strenght = ((attack + defense)/2);
}

float Soldier::getStrenght() {
        return strenght;
}

