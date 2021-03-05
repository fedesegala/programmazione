/*
Si scriva un programma che data una matrice quadrata riempita di soli 0 e 1 stampi: 

    - il numero di sequenze di 1 contenute complessivamente nelle righe della matrice
    - la lunghezza della sequenza di 1 più lunga 
    - la lunghezza della sequenza di 1 più corta 
*/

#include <stdio.h>
#define D 5

int conta_sequenze (int[D][D]);
int max_sequenza (int[D][D]);
int min_sequenza (int[D][D]);

void main(){
    int matrice[D][D] = {
        {0,1,1,1,1},
        {1,1,0,1,1},
        {1,1,0,1,1},
        {1,1,0,1,1},
        {0,1,1,1,0}
    };

    int n_sequenze; 
    int max;
    int min; 

    for (int i = 0; i<D; i++){
        for (int j = 0; j<D; j++){
            printf("%3d",matrice[i][j]);
        }
        printf("\n");
    }

    n_sequenze = conta_sequenze(matrice);
    max = max_sequenza(matrice);
    min = min_sequenza(matrice);


    printf("%d\n",n_sequenze);
    printf("%d\n",max);
    printf("%d\n",min);
}

int conta_sequenze(int matrice[D][D]){
    int n_sequenze = 0; 
    for (int i = 0; i<D; i++){
        int attuale = matrice[i][0];
        int conteggio = (attuale == 1)? 1 : 0;
        for (int j = 1; j<D; j++){
            if (matrice[i][j] == 1){
                conteggio ++;
                if (j == D-1){
                    n_sequenze++;
                }
            }else{
                if (conteggio > 1){
                    n_sequenze ++;
                    conteggio = 0;
                }
            }
        }
    }

    return n_sequenze;
}

int max_sequenza(int matrice[D][D]){
    int max = 0;
    for (int i = 0; i<D; i++){
        int attuale = matrice[i][0];
        int conteggio = (attuale == 1)? 1 : 0;
        for (int j = 1; j<D; j++){
            if (matrice[i][j] == 1){
                conteggio ++;
                if (j == D-1){
                    if (conteggio > max){
                        max = conteggio;
                    }
                }
            }else{
                if (conteggio > 1){
                    if (conteggio > max){
                        max = conteggio;
                    }
                }
            }
        }
    }
    return max;
}

int min_sequenza (int matrice[D][D]){
    int min = D;
    for (int i = 0; i<D; i++){
        int attuale = matrice[i][0];
        int conteggio = (attuale == 1)? 1 : 0;
        for (int j = 1; j<D; j++){
            if (matrice[i][j] == 1){
                conteggio ++;
                if (j == D-1){
                    if (conteggio < min){
                        min = conteggio;
                    }
                }
            }else{
                if (conteggio > 1){
                    if (conteggio < min){
                        min = conteggio;
                    }
                }
            }
        }
    }
    return min;
}