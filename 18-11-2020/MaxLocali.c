/*
Scrivere un programma ceh dato un array di interi con i valori inseriti 
da ttastiera determina quanti massimi locali ci sono nell'array
*/

#include <stdio.h>
#define LENGTH 10

void main(){
    int array[10];
    int counter = 0;

    for (int i = 0; i<LENGTH; i++){
        printf("Inserire un valore: ");
        scanf("%d",&array[i]);
    }

    for (int i = 0; i<LENGTH; i++){
        if (i == 0 && array[0] > array[1]){
            counter ++;
        }
        if (i == LENGTH-1 && array[i] > array[i-1]){
            counter++;
        }
        if (i > 0 && i < LENGTH -1 && (array [i-1] < array[i] && array[i] < array[i+1])){
            counter ++;
        }
    }

    printf("Nell'array ci sono %d massimi locali. ",counter);
}