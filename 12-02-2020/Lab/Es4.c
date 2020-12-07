/*
Scrivere un programma che calcoli quanti elementi in una matrice occorrono almeno due volte 
*/

//da vedere 

#include <stdio.h>
#define R 4
#define C 3
#define LENGTH 256
void main(){
    int conteggio = 0;
    int conteggio_caratteri[LENGTH] = {0};
    char matrice[R][C] = {
        {'1','a','c'},
        {'a','b','d'},
        {'A','2','5'},
        {'1','2','7'}
    }; 

    for (int i = 0; i<R; i++){
        for (int j = 0; j<C; j++){
            conteggio_caratteri[matrice[i][j]]++;
        }
    }

    for (int i = 0; i<LENGTH; i++){
        if (conteggio_caratteri[i] > 1)
            conteggio++;
    }

    printf("Ci sono %d valori duplicati\n",conteggio);
}