/*
m1: 1 2 1
    1 1 2 

m2: 1 2
    1 1
    1 3

prodotto: colonne 1 = righe 2 -> m. prodotto = [righe1][colonne2]
    somma(riga 0 * colonna 0)   somma(riga 0 * colonna 1)
    somma(riga 1 * colona 0)    somma(riga 1 * colonna 1)

Si scriva un programma che esegua il prodotto di due matrici
*/

#include <stdio.h>
#define N 3
#define P 2 
#define M 2

void main(){

    //inizializzo le matrici
    int a [M][N] ={{1,2,1},{1,1,2}};
    int b [N][P] = {{1,2},{1,1},{1,3}};
    //dichiaro matrice prodotto
    int prod [M][P];

    for (int i = 0; i<M; i++){      //per tutte le righe della matrice prodotto (= righe m1 -> sto scorrendo anche queste)
        for (int j = 0; j<P; j++){      //per tutte le colonne della matrice prodotto (= colonne m2 -> sto scorrendo anche queste)
            prod[i][j] = 0;
            for (int k = 0; k<N; k++){  //per tutti i k della dimensione comune calcolo i prodotti
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    //stampo le matrici 
    for (int i = 0; i<M; i++){
        for (int j = 0; j<N; j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i<N; i++){
        for (int j = 0; j<P; j++){
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i<M; i++){
        for (int j = 0; j<P; j++){
            printf("%3d",prod[i][j]);
        }
        printf("\n");
    }

}