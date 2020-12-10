/*
Scrivere un programma che esegua la somma di tutti gli elementi 
che si trovano sopra la diagonale principale di una matrice 
*/

#include <stdio.h>
#define M 4

void main(){
    int matrice[M][M] = {
        {4,5,6,7},
        {3,4,5,6},
        {2,3,4,5},
        {1,2,3,4}
    };
    int sommatoria = 0;

    for (int row = 0; row<M; row++){
        for (int col = 0; col<M; col++){
            if (col>row){
                sommatoria += matrice[row][col];
            }
        }
    }

    printf("La sommatoria di tutti gli elementi che si trovano sopra la diagonale principale è: %d \n",sommatoria);
}