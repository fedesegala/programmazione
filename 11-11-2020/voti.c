/*
crivere un programma C che richiede all’utente 10 voti (compresi tra 18 e 30) e 
li memorizza all’interno di un array, quindi stampa l’array, il voto massimo, minimo e medio.
*/

#include <stdio.h>
#define LENGTH 10

void main(){
    int voti [LENGTH];
    float media, sommaProvvisoria = 0;
    int massimo, minimo;

    //riempimento dell'array con validazione input
    for (int i=0; i<LENGTH; i++){
        do{
            printf("Inserire un voto: ");
            scanf("%d",&voti[i]);
            //controllo la validità del voto
            if(voti[i] < 18 || voti[i] > 30)
                printf("ERRORE: Deve essere inserito un voto compreso tra 18 e 30\n");
        }while(voti[i]<18 || voti[i] >30);
    }

    //inizializzo la sommaProvvisoria con il voto in prima posizione in modo da tenere in considerazione tutti i voti
    sommaProvvisoria = voti[0];

    //calcolo sommaProvvisoria, massimo e minimo
    for (int i=0; i<LENGTH-1; i++){
        //ricerca massimo
        if (voti[i] > voti[i+1]){
            massimo = voti[i];
        }else{
            massimo = voti[i+1];
        }

        //ricerca minimo
        if (voti[i] < voti[i+1]){
            minimo = voti[i];
        }else{
            minimo = voti[i+1];
        }

        //calcolo sommatoria voti
        sommaProvvisoria += voti[i]+1;
    }

    //calcolo media
    media = sommaProvvisoria/LENGTH;

    printf("\nRISULTATI ELABORAZIONE\nIl minimo voto è: %d\nIl massimo voto è: %d\nLa media dei voti inseriti è %.2f\n",minimo,massimo,media);

}