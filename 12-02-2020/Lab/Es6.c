/*
Testo da vedere nella consegna
*/

#include <stdio.h>
#define N 3

void main(){
    int matrice[N][N] = {
        {1,2,6},
        {3,5,8},
        {4,9,13}
    };
    int array[N*N] = {0};

    int indice = 0;

    int righe = 0; 
    int colonne = 0; 
    array[indice] = matrice[righe][colonne];

    while(indice < N*N){
        indice++;
        
    }

    for (int i = 0; i<N*N; i++){
        printf("%d  ",array[i]);
    }
}