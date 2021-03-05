/*
○ Scrivere un programma in linguaggio C che riceve in
ingresso una sequenza di N numeri interi. Il valore N
èinserito dall’utente e al massimo vale 10. I numeri
sono memorizzati in un vettore. Terminato
l’inserimento della sequenza di numeri, il programma
deve visualizzare una riga di asterischi per ogni
numero inserito. Il numero di asterischi nella riga è̀
pari al valore del numero inserito.
○ Ad esempio, dato il vettore 9 4 6 il programma deve
visualizzare:
Elemento 1: 9 *********
Elemento 2: 4 ****
Elemento 3: 6 ****** 
*/

#include <stdio.h>
#define MAX 10

int main(){
    int n; 
    int arr[MAX] = {0};

    printf("Inserire un numero tra 1 e 10: ");
    do {
        scanf("%d",&n);
    }while (n < 1 || n > MAX);

    for (int i = 0; i<n; i++){
        printf("Inserire un numero > 0: ");
        do{            
            scanf("%d",&arr[i]);
        }while (arr[i] < 1);
    }

    for (int i = 0; i<n; i++){
        printf("Elemento %d: ",i+1);
        for (int j = 0; j<arr[i]; j++){
            printf("*");
        }
        printf("\n");
    }

}