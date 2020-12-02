/*
Si definisce triangolare un numero costituito dalla somma dei primi N 
numeri interi positivi per un certo N. 
Esempio: dato N=4, il numero triangolare Qè 10 (Q=1+2+3+4). 
Scrivere un programma che riceva dall’utente un numero intero positivo
 e stampi a video se èo meno triangolare (ossia se può essere scritto come somma dei primi Ninteri consecutivi).
*/

#include <stdio.h>

void main(){
    int input; 
    int somma = 0; 
    int i = 0;
    printf("Questo programma dato in input un numero intero positivo dice se è triangolare.\n");

    do {
        printf("Inserire il numero:\n"); 
        scanf("%d",&input);
    }while(input<=0);

    while(somma<input){
        i++;
        somma = somma+i;
    }

    if (somma==input){
        printf("Il numero in input è triangolare");
    }else{
        printf("Il numero in input non è triangolare");
    }
    
}