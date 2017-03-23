//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_MAP_H
#define LEGENDS_OF_WESTEROS_MAP_H


#include "Territory.h"

typedef double typeElem;


class Map {

public:
    Map();

    //Map(int r, int c);

    void show();

    Territory readTerritory(int r, int c);

    void writeTerritory(int r, int c, Territory val);

    int getRow() const {
        return rows;
    }

    int getColumn() const {
        return columns;
    }

    bool conquer(int invaderRow, int invaderColumn, int defenderRow, int defenderColumn);


private:
    int rows;
    int columns;
    Territory matrix[4][8];

    float calculateStrength(int initialRow, int initialColumn);

};


#endif //LEGENDS_OF_WESTEROS_MAP_H
