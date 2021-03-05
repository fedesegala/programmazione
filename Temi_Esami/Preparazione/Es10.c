/*
Dato un array di N interi, scrivere l'algoritmo e il frammento di programma 
per chiedere all'utente l'inserimento di un numero intero x e un numero y compreso tra 0 e N, 
verificare poi se nell'array ci sono y multipli di x consecutivi. 
Stampare a video un opportuno messaggio che indica dove sono stati trovati i primi y multipli di x
(a partire da quale posizione), se tali multipli non esistono allora stampare un messaggio opportuno
*/

#include <stdio.h>

#define N 10

int main (){
    int x, y;

    //inizializzazione dell'array 
    int array []= {0,0,2,4,6,8,10,12,14,16};

    printf("Inserire x: ");
    do{
        scanf("%d",&x);
    }while(x==0);

    printf("Inserire y: ");
    do {
        scanf("%d",&y);
    } while (y<0 || y>N);

    int indice = -1;
    //scorro tutto l'array
    for (int i = 0; i<N; i++){
        if (array[i] != 0 && array[i] % x == 0 && indice == -1){
            indice = i;
            int occorrenze = 0;
            for (int j = i; j<N; j++){
                if (array[j] % x == 0){
                    occorrenze++;
                    if (occorrenze == y){
                        j  = N; i = N;
                    }
                    if (j == N-1 && occorrenze != y){
                        indice = -1;
                    }
                }else{
                    indice = -1; 
                    j = N; i += occorrenze;
                }
            }
        }
    }

    if (indice != -1){
        printf("Indice di partenza: %d\n",indice);
    }else{
        printf("Falso\n");
    }
}