/*
Scrivere un programma che stampa a video la tavola pitagorica (un quadrato con le tabelline dei numeri da 1 a 10).
*/

#include <stdio.h>
#define N 10

void main(){
    int prodotto;
    printf("Questo programma stampa un quadrato con le tabelline da 1 a 10\n");
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=N; j++){
            prodotto = i*j;
            printf("%d\t",prodotto);
        }
        printf("\n\n");
    }
}