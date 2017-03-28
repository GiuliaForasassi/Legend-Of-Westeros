//
// Created by giulia on 06/12/16.
//

#include "Baratheon.h"
#include "RedWizard.h"
#include "Knight.h"

Baratheon::Baratheon() : numRedWizards(8), numKnights(7) {
    strenghtS = new Knight();
    magicD = new RedWizard();
}

Baratheon::Baratheon(int nrw, int nk) {
    strenghtS = new Knight();
    magicD = new RedWizard();
    numKnights = nk;
    numRedWizards = nrw;
    power = strenghtS->getStrenght() * nk + (magicD->getMagic() * nrw);
}

float Baratheon::getPower() {
    return power;
}
