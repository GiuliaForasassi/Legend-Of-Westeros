//
// Created by giulia on 06/12/16.
//

#include "Zombie.h"

Zombie::Zombie() : attack(1), defense(6) {
    magic = ((attack + defense)/2);
}

float Zombie::getMagic() {
    return magic;
}