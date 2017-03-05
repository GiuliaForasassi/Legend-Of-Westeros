//
// Created by giulia on 06/12/16.
//

#include "RedWizard.h"

RedWizard::RedWizard() : attack(8), defense(3) {
    magic = ((attack + defense)/2);
}

float RedWizard::getMagic() {
    return magic;
}
