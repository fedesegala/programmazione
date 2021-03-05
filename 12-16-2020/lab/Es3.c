/*
Scrivere un sottoprogramma che ricevuto in ingresso 
un intero positivo conta e restituisce al chiamante 
il numero di cifre che compongono il numero in ingresso 
e ne sono divisori
*/

#include <stdio.h>

int conta_divisori_interni(int numero);

void main(){
    int num;
    int conteggio; 

    printf("Inserire un numero di cui contare i divisori che lo compongono: ");
    do {
        scanf("%d",&num);
    }while(num<=0);

    conteggio = conta_divisori_interni(num);
    
    printf("%d\n",conteggio);
}

int conta_divisori_interni(int numero){
    int conta = 0;
    int temp = numero; 

    while (temp > 0){
        int attuale = temp % 10; 
        temp /= 10;

        if(numero % attuale == 0)
            conta ++;
    }

    return conta;
}