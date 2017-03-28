//
// Created by giulia on 06/12/16.
//

#include "Lannister.h"
#include "Dragon.h"
#include "Archer.h"

Lannister::Lannister() : numDragons(4), numArchers(35) {
    strenghtS = new Archer();
    magicD = new Dragon();
}

Lannister::Lannister(int nd, int na) {
    strenghtS = new Archer();
    magicD = new Dragon();
    numArchers = na;
    numDragons = nd;
    power = strenghtS->getStrenght() * na + (magicD->getMagic() * nd);
}

float Lannister::getPower() {
    return power;
}