//
// Created by giulia on 06/12/16.
//

#include "Archer.h"

Archer::Archer() : attack(2), defense(1) {
    strenght = ((attack + defense)/2);
}

float Archer::getStrenght() {
    return strenght;
}

