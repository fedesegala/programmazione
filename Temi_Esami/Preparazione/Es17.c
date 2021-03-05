/*
Si crei un programma che: 
- dichiari un array di decimali di nome Array di dimensione N
- dichiari una matrice M, di dimensione NxN, di numeri decimali
- chieda all'utente l'inserimento dei N valori di Array
- inizializzi M in modo che le righe pari abbiano numeri random tra 0.00 e 20.00, mentre 
le righe dispari abbiano random compresi tra 0.00 e 10.00
-stampi M e Array
-implementi il prodotto matrice x vettore e lo salvi in un vettore result[]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main (){
    float Array[N];
    float M[N][N];
    float result[N] = {0};

    srand(time(0));

    for (int i = 0; i<N; i++){
        printf("Inserire un numero: ");
        scanf("%f",&Array[i]);
    }
    printf("\nMatrice:\n");
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (i % 2 == 0){
                M[i][j] = (float)(rand() % 2000) / 100;
            }else{
                M[i][j] = (float)(rand() % 1000) / 100;
            }
            printf("%.2f\t",M[i][j]);
        }
        printf("\n");
    }
    printf("\nArray:\n");
    for (int i = 0; i<N; i++){
        printf("%.2f\t",Array[i]);
    }

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            result[i] += M[i][j] * Array[j];
        }
    }

    printf("\nResult:\n");
    for (int i = 0; i<N; i++){
        printf("%.2f\t",result[i]);
    }

}