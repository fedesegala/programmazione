/*
Scrivere un programma che memrizzi in un array i primi 15 numeri di fibonacci
*/

#include <stdio.h>
#define LENGTH 15

void main(){
    int array [LENGTH];

    printf("Questo programma memorizza in un array di lunghezza 15, i primi 15 numeri di fibonacci e li stampa a video.\n");

    //imposto i due casi base, ovvero i primi due valori della sequenza saranno due 1
    //in seguito per ogni posizione dell'array prenderò le due precedenti e ne memorizzerò la somma
    for (int i = 0; i<LENGTH; i++){
        if(i == 0 || i == 1)
            array[i] = 1; 
        else array[i] = array[i-1] + array[i-2];
    }

    //stampa dell'array;
    for (int i = 0; i<LENGTH; i++){
        printf("%d  ", array[i]);
    }
    printf("\n");
}