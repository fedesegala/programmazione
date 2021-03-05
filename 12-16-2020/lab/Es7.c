/*
Scrivere un programma ceh date tre matrice A, B, C 
delle stesse dimensioni, modifica C in modo che al 
termine dell'esecuzione si abbia C = A + B. 
Le matrici non sono necessariamente quadrate, ma avere la stessa 
dimensione in modo che sia possibile calcolarne la somma
Definire le dimensioni delle matrici con una costante simbolica 
*/

#include <stdio.h>
#define RIGHE 3 
#define COLONNE 2

void stampa(int [RIGHE][COLONNE]);
void main(){

    int A [RIGHE][COLONNE] = {
        {1,2},
        {5,6},
        {8,10}
    };

    int B [RIGHE][COLONNE] = {
        {4,5},
        {6,4},
        {1,0}
    };

    int C [RIGHE][COLONNE];   //matrice somma

    for (int righe = 0; righe<RIGHE; righe++){
        for (int colonne = 0; colonne<COLONNE; colonne++){
            C[righe][colonne] = A[righe][colonne] + B[righe][colonne];
        }
    }

    stampa(C);
}

void stampa (int matrice[RIGHE][COLONNE]){
    for (int i = 0; i<RIGHE; i++){
        for (int j = 0; j<COLONNE; j++){
            printf("%3d",matrice[i][j]);
        }
        printf("\n");
    }
}