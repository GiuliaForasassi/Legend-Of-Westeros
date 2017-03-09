//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_MAP_H
#define LEGENDS_OF_WESTEROS_MAP_H


typedef double typeElem;


class Map {

public:
    Map();

    Map(int r, int c);

    int ReadMap(int r, int c);

    void WriteMap(int r, int c, int val);

    int getRow() const {
        return row;
    }

    int getColumn() const {
        return column;
    }


private:
    int row;
    int column;
    int matrix[3][3];


};


#endif //LEGENDS_OF_WESTEROS_MAP_H
