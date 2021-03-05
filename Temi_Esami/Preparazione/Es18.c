/*
Un numero `e detto “divibile dispari destro” se il numero stesso e tutti i numeri 
ottenuti rimuovendo successivamente la cifra pi`u a destra ammettono almeno un 
divisore dispari diverso da 1. 
Scrivere nel file ESA 11022019 B 2.c il sottoprogramma int rightodd(int val) 
che ricevuto in ingresso un intero val sicuramente positivo restituisce 1 se il numero 
`e divisibile dispari destro, 0 altrimenti. Ad esempio, se al sottoprogramma viene passato in 
ingresso il numero 65 esso restituir`a 1, infatti 65 ha 5 come divisore dispari e 6 ha 3
come divisore dispari.
*/

#include <stdio.h>

int rightodd (int val);
int divisibile_dispari (int val);

int main (){
    int n = 73;

    printf("%d",rightodd(n));
}

int rightodd (int val){
    int prop = 1;
    if (divisibile_dispari(val)){
        while (val > 0){
            if (!divisibile_dispari(val)){
                prop = 0; val = 0;
            }else{
                val /= 10;
            }
        }
    }else{
        prop = 0;
    }

    return prop;
}

int divisibile_dispari(int val){
    int prop = 0;
    for (int i = 3; i<val; i+=2){
        if (val % i == 0){
            prop = 1;
        }
    }
    return prop;
}