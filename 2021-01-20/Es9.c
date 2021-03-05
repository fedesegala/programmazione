/*
Scrivere un programma che acquisisce un array di 10
numeri interi. Il programma, terminata l’acquisizione,
”muove” tutti i valori diversi da 0 alla sinistra dell’array,
e tutti gli zeri a destra dell’array. Al termine il
programma visualizza l’array seguito dal numero di
valori non nulli in esso presenti. Non è importante
l’ordine degli elementi non nulli.
Esempio:
Ingresso: 1 0 2 0 0 3 4 0 3 2
Uscita: 1 4 2 3 3 2 0 0 0 0 (o anche un diverso ordine dei
primi 6 valori) 6
*/

#include <stdio.h>
#define N 10

int move (int [N]);

int main(){
    int array[N];
    for (int i = 0; i<N; i++){
        printf("Inserire un valore nell'array: ");
        scanf("%d",&array[i]);
    }

    int not_null = move(array);

    printf("Valori non nulli: %d\n",not_null);

    for (int i = 0; i<N; i++){
        printf("%d   ",array[i]);
    }

    printf("\n");
}

int move (int array [N]){
    int occorrenze = 0;

    for (int i = 0; i<N-1; i++){
        for(int j = i; j<N-1; j++)
        if (array[j] == 0 && array[j+1] != 0){
            array[j] = array[j+1];
            array[j+1] = 0;
        }
    }

    for (int i = 0; i<N; i++){
        if (array[i] != 0)
            occorrenze++;
        }

    return occorrenze;
}