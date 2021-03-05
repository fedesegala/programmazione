/*
Scrivere un programma che legga da standard input una sequenza di numeri
la quale termina con input = 0 e stabilire se si tratta di una sequenza crescente
*/

#include <stdio.h>

int main (){
    int n;
    int crescente = 1;
    int first = 1;
    int precedente = n;
    do {
        printf("Inserire un numero: ");
        scanf("%d",&n);

        if (first){
            first = 0;
            precedente = n;
        } else if (n != 0 && !first){
            if (n < precedente)
                crescente = 0;
            precedente = n;
        }

    } while(n != 0);

    printf("%d\n",crescente);
}