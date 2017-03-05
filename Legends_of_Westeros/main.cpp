#include <iostream>

using namespace std;

#include "Army.h"
#include "Targaryen.h"
#include "SimpleTroop.h"
#include "MagicTroop.h"
#include "Soldier.h"
#include "Dragon.h"
#include "Map.h"
#include "Stark.h"
#include "Wizard.h"
#include "Lannister.h"
#include "Archer.h"
#include "Baratheon.h"
#include "RedWizard.h"
#include "Knight.h"
#include "Greyjoy.h"
#include "WhiteWalkers.h"

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

    Lannister *l = new Lannister(4, 35);
    float ris2 = 0;
    ris2 = l->getPower();
    std::cout << "La potenza dei Lannister è:" << std::endl;
    std::cout << ris2 << std::endl;

    Baratheon *b = new Baratheon(8, 7);
    float ris3 = 0;
    ris3 = b->getPower();
    std::cout << "La potenza dei Baratheon è:" << std::endl;
    std::cout << ris3 << std::endl;

    Greyjoy *g = new Greyjoy(3, 32);
    float ris4 = 0;
    ris4 = g->getPower();
    std::cout << "La potenza dei Greyjoy è:" << std::endl;
    std::cout << ris4 << std::endl;

    WhiteWalkers *w = new WhiteWalkers(20, 5);
    float ris5 = 0;
    ris5 = w->getPower();
    std::cout << "La potenza dei WhiteWalkers è:" << std::endl;
    std::cout << ris5 << std::endl;
}