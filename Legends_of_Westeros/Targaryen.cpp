//
// Created by acasali on 27/11/16.
//
#include <iostream>

using namespace std;

#include "Targaryen.h"
#include "Soldier.h"
#include "Dragon.h"

Targaryen::Targaryen() : numDragons(5), numSoldiers(30) {
    strenghtS = new Soldier();
    magicD = new Dragon();
}

Targaryen::Targaryen(int nd, int ns) {
    strenghtS = new Soldier();
    magicD = new Dragon();
    numSoldiers = ns;
    numDragons = nd;
    power = strenghtS->getStrenght() * ns + (magicD->getMagic() * nd);
}

float Targaryen::getPower() {
    //numSoldiers = numS;
    //numDragons = numD;
    //power = strenghtS->getStrenght(a, d) * numS + magicD->getMagic(a, d) * numD;
    return power;

}
