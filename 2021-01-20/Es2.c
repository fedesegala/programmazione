/*
Si scriva un programma C che definisce la funzione
int cifra_minima(int num) la quale deve restituire la cifra
più bassa nella rappresentazione decimale di num. Tale
programma dovrà inoltre definire un main che
(1) chiede all’utente di inserire un numero non negativo,
(2) chiama la funzione cifra_minima per calcolarne la cifra
più bassa e
(3) stampa tale cifra minima trovata.
Esempi
$./a.out Inserisci un numero non negativo: 1232
La cifra_minima di 1232 e’ 1
$ ./a.out Inserisci un numero non negativo: 0 La
cifra_minimia di 0 è 0
$ ./a.out Inserisci un numero non negativo: -5
Inserisci un numero non negativo: 30756
La cifra_minima di 30756 è 0
*/

#include <stdio.h>

int cifra_minima (int num);

int main(){
    int num = -1; 
    while (num < 0){
        printf("Inserire un intero non negativo: ");
        scanf("%d",&num);
    }

    int min = cifra_minima (num);

    printf("%d\n",min);
}

int cifra_minima (int num){
    int min = num%10;
    while (num > 9){
        num /= 10;
        if (min > num%10){
            min = num%10;
        }
    }
    return min;
}