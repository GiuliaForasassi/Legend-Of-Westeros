//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_SIMPLETROOP_H
#define LEGENDS_OF_WESTEROS_SIMPLETROOP_H

#include "Map.h"

class SimpleTroop : public Map {
public:
   // virtual ~SimpleTroop() {}

    virtual int getStrenght() = 0;

};


#endif //LEGENDS_OF_WESTEROS_SIMPLETROOP_H
