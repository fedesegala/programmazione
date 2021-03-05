/*
Scrivere due sottoprogrammi maxr e maxc che
prendono in ingresso una matrice 3X3 di interi e
restituiscono rispettivamente al chiamante l’indice
della riga/colonna in cui la somma di tutti gli elementi
è massima. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int maxR(int [N][N]);
int maxC(int [N][N]);

int main(){
    int matrix[N][N];
    srand(time(0));
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            matrix[i][j] = (rand() % (100 + 50 + 1)) - 50; //rand() % (upper - lower + 1) +lower
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    printf("max riga: %d\n",maxR(matrix));
    printf("max colonna: %d\n",maxC(matrix));
}

int maxR (int matrix[N][N]){
    int max = 0;
    for(int i = 0; i<N; i++){
        max += matrix[0][i];
    };
    int indice=0;
    for (int r = 0; r<N; r++){
        int somma = 0;
        for (int c = 0; c<N; c++){
            somma += matrix[r][c];
        }
        if(somma > max){
            max = somma; 
            indice = r;
        }
    }

    return indice;
}

int maxC (int matrix[N][N]){
    int max = 0;
    for(int i = 0; i<N; i++){
        max += matrix[i][0];
    };
    int indice=0;
    for (int r = 0; r<N; r++){
        int somma = 0;
        for (int c = 0; c<N; c++){
            somma += matrix[c][r];
        }
        if(somma > max){
            max = somma; 
            indice = r;
        }
    }

    return indice;
}