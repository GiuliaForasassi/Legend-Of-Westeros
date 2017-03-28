//
// Created by giulia on 06/12/16.
//

#include "Greyjoy.h"
#include "Archer.h"
#include "Wizard.h"

Greyjoy::Greyjoy() : numWizards(3), numArchers(32) {
    strenghtS = new Archer();
    magicD = new Wizard();
}

Greyjoy::Greyjoy(int nw, int na) {
    strenghtS = new Archer();
    magicD = new Wizard();
    numArchers = na;
    numWizards = nw;
    power = strenghtS->getStrenght() * na + (magicD->getMagic() * nw);
}

float Greyjoy::getPower() {
    return power;
}
