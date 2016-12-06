#include <iostream>

using namespace std;

#include "ArmyFactory.h"
#include "Targaryen.h"
#include "SimpleTroop.h"
#include "MagicTroop.h"
#include "Soldier.h"
#include "Dragon.h"
#include "Map.h"
#include "Stark.h"
#include "Wizard.h"

int main() {
    Soldier s;
    //Targaryen *t=new Targaryen();
    //t->getPower(1,2,3,4,5);

    Targaryen *t = new Targaryen(5, 30);
    float ris = 0;
    ris = t->getPower();
    std::cout << "La potenza dei Targaryen è:" << std::endl;
    std::cout << ris << std::endl;

    Stark *st = new Stark(10, 25);
    float ris1 = 0;
    ris1 = st->getPower();
    std::cout << "La potenza degli Stark è:" << std::endl;
    std::cout << ris1 << std::endl;


}