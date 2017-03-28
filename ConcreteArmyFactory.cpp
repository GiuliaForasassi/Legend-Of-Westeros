//
// Created by giulia on 16/12/16.
//

#include "ConcreteArmyFactory.h"
#include "Stark.h"
#include "Greyjoy.h"
#include "Targaryen.h"
#include "WhiteWalkers.h"
#include "Baratheon.h"


Army *ConcreteArmyFactory::createArmy(int typeSimple, int typeMagic) {
    switch(namehouse) {
        case house::Lannister:
            return new Lannister(typeSimple, typeMagic);
        case house::Stark:
            return new Stark(typeSimple, typeMagic);
        case house::Greyjoy:
            return new Greyjoy(typeSimple, typeMagic);
        case house::Targaryen:
            return new Targaryen(typeSimple, typeMagic);
        case house::WhiteWalkers:
            return new WhiteWalkers(typeSimple, typeMagic);
        case house::Baratheon:
            return new Baratheon(typeSimple, typeMagic);
    }
    return nullptr;
}
