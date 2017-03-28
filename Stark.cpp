//
// Created by acasali on 03/12/16.
//

#include "Stark.h"
#include "Soldier.h"
#include "Wizard.h"


Stark::Stark() : numWizards(10), numSoldiers(25) {
    strenghtS = new Soldier();
    magicD = new Wizard();
}

Stark::Stark(int nw, int ns) {
    strenghtS = new Soldier();
    magicD = new Wizard();
    numSoldiers = ns;
    numWizards = nw;
    power = strenghtS->getStrenght() * ns + (magicD->getMagic() * nw);
}

float Stark::getPower() {
    return power;
}