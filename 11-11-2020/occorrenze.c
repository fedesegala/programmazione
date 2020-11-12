/*
Scrivere un programma che dato un array di interi A  ed un intero x determina quante occorrenze di x sono in A.
*/

#include <stdio.h>
#define LENGTH 25

void main(){
    //ipotizzo un array già esistente, senza che l'utente lo possa inserire 
    int array [LENGTH] = {
        1,2,45,16,8,45,4,5,56,2,5,4,2,87,12,1,2,6,5,89,215,6,126,8,52
    };
    
    int cerca, contatore;
    printf("Inserire un valore che si voglia cercare all'interno dell'array: ");
    scanf("%d",&cerca);

    for (int i=0; i<LENGTH; i++){
        if (array[i] == cerca)
            contatore ++;
    }

    if (!contatore){
        printf("Non ci sono occorrenze del numero che si intende cercare \n");
    }else if (contatore == 1){
        printf("C'è soltanto un'occorrenza del numero che si intende cercare\n");
    }else{
        printf("Ci sono %d occorrenze del numero che si intende cercare\n", contatore);
    }
}