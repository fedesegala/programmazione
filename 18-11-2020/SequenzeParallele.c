/*
Scrivere un programma che chieda in input all'utente due sequenze di 5 numeri ciascuna, 
memorizzate rispettivamente in due array 
il programma stampi a video se la seconda sequenza è una permutazione della prima
*/

#include <stdio.h>
#define LENGTH 5

void main(){
    int seq1[LENGTH],seq2[LENGTH];
    int i = 0;

    //input
    for (int i = 0; i<2; i++){
        for (int j = 0; j<LENGTH; j++){
            if(i == 0){
                printf("Inserire un valore della prima sequenza: "); 
                scanf("%d",&seq1[j]);
            }else{
                printf("Inserire un valore della seconda sequenza: "); 
                scanf("%d",&seq2[j]);
            }
        }
    }

    /* devo cercare se ad ogni volta che mi trovo in un nuovo indice del mio array, è presente quel valore nel secondo array */
    for (i = 0; i<LENGTH; i++){
        int cerca = seq1[i];
        int trovato = 0; 
        for (int j = 0; j<LENGTH; j++){
            if (seq2[j] == seq1[i]){
                trovato = 1;
            }
        }
        if (trovato == 0){
            i = LENGTH;
        }
    }

    if (i == LENGTH+1){
        printf("Le due sequenze non sono una la permutazione dell'altra");
    }else{
        printf("La seconda sequenza è una permutazione della prima");
    }
    
}