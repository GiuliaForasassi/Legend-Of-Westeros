//
// Created by acasali on 27/11/16.
//

#include "Targaryen.h"
#include "Soldier.h"
#include "Dragon.h"

Targaryen::Targaryen() : numDragons(5), numSoldiers(30) {
    strenghtS = new Soldier();



}


int Targaryen::getPower(int s, int numS, int numD) {
    numSoldiers = numS;
    numDragons = numD;
    power = strenghtS->getStrenght()*numS + ;

}
