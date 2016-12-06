//
// Created by acasali on 03/12/16.
//

#include "Wizard.h"

Wizard::Wizard() : attack(6), defense(2) {
    magic = ((attack + defense)/2);
}

float Wizard::getMagic() {
    return magic;
}