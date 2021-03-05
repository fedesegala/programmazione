/*
Si crei un programma che implementi il prodotto tra matrici quadrati di interi. 
-) dichiarare e inizializzare due matrice A e B NxN (n definito = 3) 
A: B:
1 1 1 1 2 3
2 2 2 1 2 3
3 3 3 1 2 3
-) dichiarare e allocare una matrice risultato R di dimensioni NxN;
-) calcolare il prodotto tra matrici R=A x B;
-) stampi la matrice risultato;
-) NB: si deve completare il file di riferimento nei punti contrassegnati da commenti 
*/

#include <stdio.h>

#define N 3

int main(){
    int A [][N]= {
        {1,1,1},
        {2,2,2},
        {3,3,3}};
    int B [][N]= {
        {1,2,3},
        {1,2,3},
        {1,2,3}};
    int prodotto [N][N] = {0};

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            for (int k = 0; k<N; k++){
                prodotto [i][j] += A[i][k] * B[k][j];
            }
            printf("%d\t",prodotto[i][j]);
        }
        printf("\n");
    }
}