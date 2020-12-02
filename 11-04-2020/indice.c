/*
Scrivere un programma che acquisisca un indice X tra 0 e 9 (
controllare validità del valore inserito) e una sequenza di 10 numeri interi. 
Il programma dovrà stampare la somma dei numeri in posizioni minori di X
e il prodotto dei numeri in posizioni successive a X.
*/

#include <stdio.h>

void main(){
    int indice; 
    int somma = 0; 
    int prodotto = 1;

    do {
        printf("Inserire un indice compreso tra 0 e 9\n");
        scanf("%d",&indice);
    }while(indice<0 || indice>9);

    /*
    faccio inserire all'utente i numeri con un ciclo for, se la i del for è < dell'indice aggiungo i numeri alla somma, 
    altrimenti li moltiplico per il prodotto
    */
    for (int i = 0; i<10; i++){
        int input;
        printf("\nInserire un numero intero:\n");
        scanf("%d",&input);

        if (i<indice){
            somma+=input;
        }else if (i>indice){
            prodotto*=input;
        }
        else{
            i++;
        }

        printf ("\nPasso %d, La somma è: %d\nIl prodotto è: %d",i+1,somma,prodotto);
    
    }
}