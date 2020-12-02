/*
Richiede all’utente di inserire 20 numeri interi a piacere e li salva in un array.
    Crea e stampa un array risultato in cui:
        Ogni elemento in posizione pari (n) è uguale alla somma degli elementi dell’array originale in posizione pari dall’inizio fino a n.
        Ogni elemento in posizione dispari (m) è uguale alla somma degli elementi dell’array originale in posizione dispari dall’inizio fino a m
*/

#include <stdio.h>
#define LENGTH 10

void main(){
    int array [LENGTH];
    int elaborato [LENGTH];

    for (int i = 0; i<LENGTH; i++){
        printf("Inserire un valore: "); 
        scanf("%d",&array[i]);
    }

    for (int i = 0; i<LENGTH; i++){
        if (i%2 == 0){
            int somma = 0;
            for (int j = 0; j<i+1; j=j+2){
                somma += array[j];
            }
            elaborato[i] = somma;
        }else{
            int somma = 0;
            for (int j = 1; j<i+1; j=j+2){
                somma += array[j];
            }
            elaborato[i] = somma;
        }
    }

    for (int i = 0; i<LENGTH; i++){
        printf("%d  ",elaborato[i]);
    }
    printf("\n");
}