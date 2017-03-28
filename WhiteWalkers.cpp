//
// Created by giulia on 06/12/16.
//

#include "WhiteWalkers.h"
#include "Knight.h"
#include "Zombie.h"

WhiteWalkers::WhiteWalkers() : numZombies(20), numKnights(5) {
    strenghtS = new Knight();
    magicD = new Zombie();
}

WhiteWalkers::WhiteWalkers(int nz, int nk) {
    strenghtS = new Knight();
    magicD = new Zombie();
    numKnights = nk;
    numZombies = nz;
    power = strenghtS->getStrenght() * nk + (magicD->getMagic() * nz);
}

float WhiteWalkers::getPower() {
    return power;
}
