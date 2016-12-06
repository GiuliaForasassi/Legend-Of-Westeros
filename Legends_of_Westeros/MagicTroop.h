//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_MAGICTROOP_H
#define LEGENDS_OF_WESTEROS_MAGICTROOP_H

#include "Map.h"

class MagicTroop : public Map{
public:
   // virtual ~MagicTroop() {}

    virtual float getMagic() = 0;


};


#endif //LEGENDS_OF_WESTEROS_MAGICTROOP_H
