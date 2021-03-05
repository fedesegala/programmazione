/*
Si crei un programma che: 
- dichiari una matrice Matrix NxM di numeri interi
- dichiari un vettore di decimali di nome Filter di dimensione M
- inizializzi la matrice in modo che le righe pari abbiano numeri random pari
  e le dispari abbiano numeri random dispari, sia pari che dispari tra 0 e 10
- chieda all'utente l'inserimento degli M valori di Filter 
- stampi matrix e Filter
- implementi il prodotto matrice x vettore e stampandolo in un vettore Result[N]
  e lo stampi
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 2 
#define M 3

void moltiplica (int[][M], float[M], float[N]);

int main (){
    int Matrix [N][M];
    float Filter [M];
    float Result [N] = {0};
 
    srand(time(NULL));

    //inizializzo vettore
    for (int i = 0; i<M; i++){
        printf("Inserire un valore di Filter: ");
        scanf("%f",&Filter[i]);
    }
    
    //inizializzo la matrice e la stampo
    printf("Matrix:\n");
    for (int i = 0; i<N; i++){
        for (int j = 0; j<M; j++){
            if (i % 2 == 0){
                Matrix[i][j] = rand () % 6 * 2;
                printf("%d\t",Matrix[i][j]);
            }else{
                Matrix[i][j] = rand () % 5 * 2 + 1;
                printf("%d\t",Matrix[i][j]);
            }
        }
        printf("\n");
    }

    printf("Filter:\n");
    for (int i = 0; i<M; i++){
        printf("%.2f\t",Filter[i]);
    }

    moltiplica(Matrix,Filter,Result);

    printf("\nResult:\n");
    for (int i = 0; i<N; i++){
        printf("%.2f\t",Result[i]);
    }

    printf("\n");
}

void moltiplica (int Matrix[][M], float Filter[], float Result[]){
    for (int i = 0; i<N; i++){
        for (int j = 0; j<M; j++){
            Result[i] += Matrix[i][j] * Filter[j];
        }
    }
}