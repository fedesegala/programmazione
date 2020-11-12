/*
Scrivere un programma che, chiesti all'utente due numeri interi positivia e b comunica all'utente 
se si tratta di una coppia di numeri affiatati oppure no.
Definiamo due numeri affiatati se sono diversi tra loro e la loro somma è 
pari al prodotto delle cifre che li compongono. */

#include <stdio.h>

void main(){
    int a, b; 
    int somma, prodotto = 1;

    printf("Inserire a e b: \n");
    scanf("%d%d",&a,&b);

    somma = a+b; 

    while (a!=0){
        if(a!=0){
            prodotto*=(a%10);
            a/=10;
        }
        if(b!=0){
            prodotto*=(b%10);
            b/=10;
        }
    }

    if (somma == prodotto) {
        printf("Somma: %d, Prodotto: %d. I numeri sono affiatati\n",somma,prodotto);
    }else {
        printf("Somma: %d, Prodotto: %d. I numeri non sono affiatati\n",somma,prodotto);
    }
}