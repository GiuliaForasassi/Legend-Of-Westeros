//
// Created by giulia on 06/12/16.
//

#include "Knight.h"

Knight::Knight() : attack(4), defense(3) {
    strenght = ((attack + defense)/2);
}

float Knight::getStrenght() {
    return strenght;
}

