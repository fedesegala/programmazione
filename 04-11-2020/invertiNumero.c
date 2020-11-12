/*Scrivere un programma che inverta un numero dato in input e che avvisi se esso è palindromo*/

#include <stdio.h>

void main(){
    int numero, numeroInvertito, ricorda; 

    printf("Inserire un numero da invertire: \n");
    scanf("%d",&numero);

    ricorda = numero;
    numeroInvertito = 0;
    

    while(numero>0){
        numeroInvertito *= 10;
        numeroInvertito += numero % 10;
        numero /= 10;
    }

    if (ricorda == numeroInvertito){
        printf("Il numero inserito è palindromo");
    }else {
        printf("Il numero invertito è %d",numeroInvertito);

    }

}