//
// Created by acasali on 27/11/16.
//

#include "Map.h"
#include <iostream>

using namespace std;

Map::Map(int r, int c) {
    row = r;
    column = c;
    matrix[row][column];

    int i;
    for (i = 0; i < row; i++){
        for (int j=0; j < column; j++){
            matrix[i][j] = 0;

        }
    }
}
int Map::ReadMap(int r, int c) {
        //try{
            if(r >= 0 && r < row && c >= 0 && c < column)
                return matrix[r][c];
            else
                throw "Indici errati.";
        //}catch

    }

    void Map::WriteMap(int r, int c, int val){
        //try  {
            if(r >= 0 && r < row && c >= 0 && c < column)
                matrix[r][c] = val;
            else
                throw "Indici errati.";
        //}

    }
