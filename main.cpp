#include <iostream>
#include <time.h>

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
#include "Map.h"

ostream& operator<<(ostream &o, Strategy s) //traduzione da strategy a stringa per fare cout
{
    switch(s)
    {
        case Strategy::onlyMagic:
            return o << "onlyMagic";
        case Strategy::onlySimple:
            return o << "onlySimple";
        case Strategy::lessDefense:
            return o << "lessDefense";
        default:
            return o << "valore non valido";
    }
}

/*
 * TODO: fare la grafica
 * TODO: gestione automatica degli avversari
 */
int main() {

    srand(time(NULL)); //da chiamare una volta quando tirerò a caso i numeri con la rand
                       //serve con la rand, la chiamo una volta sola nel main

    //Soldier* s;
    //Targaryen *t=new Targaryen();
    //t->getPower(1,2,3,4,5);

    //assegno una strategy casuale ad ogni casata
    Baratheon::strategy = Army::randomStrategy();
    Greyjoy::strategy = Army::randomStrategy();
    Lannister::strategy = Army::randomStrategy();
    Stark::strategy = Army::randomStrategy();
    Targaryen::strategy = Army::randomStrategy();
    WhiteWalkers::strategy = Army::randomStrategy();

    //creo la mappa
    Map m;

    while(true)
    {
        m.show();
        int ir, ic, dr, dc;
        cout << "Inserire riga invasore" << endl;
        cin >> ir;
        cout << "Inserire colonna invasore" << endl;
        cin >> ic;
        cout << "Inserire riga difensore" << endl;
        cin >> dr;
        cout << "Inserire colonna difensore" << endl;
        cin >> dc;

        try {
            m.conquer(ir, ic, dr, dc);
        }
        catch(exception &e)
        {
            cerr << e.what() << endl;
        }


    }

    /*Targaryen *t = new Targaryen(5, 30);
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

    //obiettivo: poter richiamare getStrategy da un puntatore ad Army

    Army *a1, *a2, *a3, *a4, *a5,*a6;

    a1 = b;
    a2 = g;
    a3 = l;
    a4 = st;
    a5 = t;
    a6 = w;

    cout << a1->getStrategy() << endl;
    cout << a2->getStrategy() << endl;
    cout << a3->getStrategy() << endl;
    cout << a4->getStrategy() << endl;
    cout << a5->getStrategy() << endl;
    cout << a6->getStrategy() << endl;*/

}