//
// Created by acasali on 27/11/16.
//

#include "Dragon.h"

Dragon::Dragon() : attack(10), defense(8) {
    magic = ((attack + defense)/2);
}

float Dragon::getMagic() {
    return magic;
}
