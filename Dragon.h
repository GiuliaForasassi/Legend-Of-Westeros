//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_DRAGON_H
#define LEGENDS_OF_WESTEROS_DRAGON_H

#include "MagicTroop.h"

class Dragon : public MagicTroop {
public:
    Dragon();
    float getMagic() override;

private:
    float attack;
    float defense;
    float magic;

};


#endif //LEGENDS_OF_WESTEROS_DRAGON_H
