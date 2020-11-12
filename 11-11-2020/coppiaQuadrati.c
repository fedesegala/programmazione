/*
Chiamiamo coppia di quadrati (CQ) una coppia <a,b> di numeri interi che sono uno il quadrato dell’altro. Esempio <9,3> oppure <-3,9> (infatti 9=3*3).
Si codifichi un programma C che legge da tastiera una sequenza che termina con 99 (di lunghezza a priori illimitata) di numeri interi e stampa a
video quante coppie di numeri consecutivi all’interno della sequenza rappresentano una CQ
*/

#include <stdio.h>

void main(){
    int input;
    int contatore = 0; 
    int precedente = 99;

    printf("Questo programma stampa le coppie di quadrati inserite dall'utente\n");

    do {
        int successivo;
        printf("Si inserisca un numero intero: ");
        scanf("%d",&input);
        successivo = input;

        //printf("%d  %d\n",precedente, successivo);


        if (precedente != 99){
            if (successivo * successivo == precedente || precedente * precedente == successivo) {
                contatore += 1;
            }
        }
        precedente = successivo;
        //printf("%d  %d\n",precedente, successivo);
    } while(input != 99);

    printf("Le coppie di quadrati inserite sono: %d",contatore);
}