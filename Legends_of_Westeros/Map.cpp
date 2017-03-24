//
// Created by acasali on 27/11/16.
//

#include "Map.h"
#include "Stark.h"
#include "Lannister.h"
#include "Greyjoy.h"
#include "Baratheon.h"
#include "WhiteWalkers.h"
#include "Targaryen.h"
#include <iostream>

using namespace std;

Map::Map() : rows(4), columns(8) {
    matrix[rows][columns];

    int tempMat[4][8] = {{0, 0, 3, 0, 5, 1, 2, 2},
                         {0, 2, 4, 0, 1, 5, 2, 2},
                         {0, 3, 3, 4, 1, 6, 5, 2},
                         {0, 0, 0, 5, 1, 1, 2, 2}
    };

    int i;
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            switch (tempMat[i][j]) {
                case 0:
                    matrix[i][j] = Territory(false);
                    break;
                case 1:
                    matrix[i][j] = Territory(new Stark());
                    break;
                case 2:
                    matrix[i][j] = Territory(new Lannister());
                    break;
                case 3:
                    matrix[i][j] = Territory(new Greyjoy());
                    break;
                case 4:
                    matrix[i][j] = Territory(new Baratheon());
                    break;
                case 5:
                    matrix[i][j] = Territory(new WhiteWalkers());
                    break;
                case 6:
                    matrix[i][j] = Territory(new Targaryen());
                    break;
            }

        }
    }
}

Territory Map::readTerritory(int r, int c) {
    //try{
    if (r >= 0 && r < rows && c >= 0 && c < columns)
        return matrix[r][c];
    else
        throw "Indici errati.";
    //}catch

}

void Map::writeTerritory(int r, int c, Territory val) {
    //try  {
    if (r >= 0 && r < rows && c >= 0 && c < columns)
        matrix[r][c] = val;
    else
        throw "Indici errati.";
    //}

}

void Map::show() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j].isEarth())    //terra
            {
                cout << matrix[i][j].getArmy()->getName()[0];
            }
            else  //acqua
            {
                cout << "-";
            }

        }
        cout << endl;
    }

}

bool Map::conquer(int invaderRow, int invaderColumn, int defenderRow, int defenderColumn) {

    // controlli su indici
    if (!(invaderColumn < columns && invaderColumn >= 0 && invaderRow < rows && invaderRow >= 0))
        return false;
    if (!(invaderColumn < columns && invaderColumn >= 0 && defenderRow < rows && defenderRow >= 0))
        return false;

    // assegno variabili
    Army *invader, *defender;
    invader = matrix[invaderRow][invaderColumn].getArmy();
    defender = matrix[defenderRow][defenderColumn].getArmy();

    // controlli su variabili (casate differenti, acqua ecc.)
    // ...

    // calcolo le forze tenendo conto delle varie strategy
    int invaderStrength, defenderStrength;
    // calcolo forza invader
    invaderStrength = calculateStrength(invaderRow, invaderColumn);

    // calcolo forza defender
    defenderStrength = calculateStrength(defenderRow, defenderColumn);

    // decido il vincitore
    int result = rand() % (invaderStrength + defenderStrength);
    int numSimTroops;
    int numMagTroops;
    if (result < invaderStrength) {
        //vince invader
        numSimTroops = defender->getNumSimpleTroops() * 70 / 100;
        numMagTroops = defender->getNumMagicTroops() * 70 / 100;

        if ((numMagTroops + numSimTroops) <= 2) {
            //è sconfitto, si riassegna il territorio

        }
        else
        {
            //colpito ma non affondato
            defender->setNumSimpleTroops(numSimTroops);
            defender->setNumMagTroops(numMagTroops);
        }
    }
    else {
        //vince defender
        numSimTroops = invader->getNumSimpleTroops() * 70 / 100;
        numMagTroops = invader->getNumMagicTroops() * 70 / 100;

    }

    return false;
}

float Map::calculateStrength(int initialRow, int initialColumn) {
    // crea e inizializza una matrice temporanea per vedere se ho già contato un territorio
    //bool calculatedMat[rows][columns];
    vector<vector<bool>> calculatedMat;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            calculatedMat[i][j] = 0;

    return calculateStrengthRecursive(initialRow, initialColumn, calculatedMat);
}


float Map::calculateStrengthRecursive(int row, int col, vector<vector<bool>> calculatedMat) {
    if (!(col < columns && col >= 0 && row < rows && row >= 0))
        return 0;
    if (calculatedMat[row][col] == 1)
        return 0;
//voleva un puntatore a matrice ma errore quindi vettore di vettori di bool
    Army *army = matrix[row][col].getArmy();

    // tra qui e...
    int power = army->getPower();
    calculatedMat[row][col] = 1;


    // ... qui, dovrò differenziare la strategy

    if (matrix[row - 1][col + 1].getArmy()->getName() == army->getName())
        power += calculateStrengthRecursive(row - 1, col + 1, calculatedMat);

    if (matrix[row][col + 1].getArmy()->getName() == army->getName())
        power += calculateStrengthRecursive(row, col + 1, calculatedMat);

    if (matrix[row + 1][col + 1].getArmy()->getName() == army->getName())
        power += calculateStrengthRecursive(row + 1, col + 1, calculatedMat);


    if (matrix[row + 1][col].getArmy()->getName() == army->getName())
        power += calculateStrengthRecursive(row + 1, col, calculatedMat);

    if (matrix[row + 1][col - 1].getArmy()->getName() == army->getName())
        power += calculateStrengthRecursive(row + 1, col - 1, calculatedMat);

    if (matrix[row][col - 1].getArmy()->getName() == army->getName())
        power += calculateStrengthRecursive(row, col - 1, calculatedMat);

    if (matrix[row - 1][col - 1].getArmy()->getName() == army->getName())
        power += calculateStrengthRecursive(row - 1, col - 1, calculatedMat);

    if (matrix[row - 1][col].getArmy()->getName() == army->getName())
        power += calculateStrengthRecursive(row - 1, col, calculatedMat);


    return power;

}