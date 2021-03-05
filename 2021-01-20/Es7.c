/*
○ Scrivere un programma C che acquisisce un array a1 di 10
interi. Il programma crea e visualizza un nuovo array a2
contenente in ciascuna posizione i:
● la somma dei soli valori pari di a1 fino alla posizione i
inclusa, se i è pari.
● il prodotto dei valori di a1 dispari nelle posizioni tra i e
N-1, se i è dispari.
Per esempio se l’utente inserisce l’array:
1 2 4 2 8 6 7 8 8 1
il programma creerà e visualizzerà l’array:
0 7 6 7 16 7 22 1 38 1
*/

#include <stdio.h>
#define N 10

int pari (int [N], int);
int dispari (int [N], int);

int main(){
    int a1 [N]; 
    int a2 [N];
    
    for (int i = 0; i<N; i++){
        printf("inserire un numero: ");
        scanf("%d",&a1[i]);
    }

    for (int i = 0; i<N; i++){
        if (i % 2 == 0){
            a2[i] = pari (a1,i);
        }else{
            a2[i] = dispari (a1,i);
        }
    }

    for (int i = 0; i<N; i++){
        printf("%d ",a2[i]);
    }

    printf("\n");
}

int pari (int array[N], int limit){
    int somma = 0;

    for (int i = 0; i <= limit; i++){
        if (array[i] % 2 == 0){
            somma += array[i];
        }
    }

    return somma;
}

int dispari (int array[N], int indice){
    int prodotto = 1;

    for (int i = indice; i < N; i++){
        if (array[i] %2 != 0){
            prodotto *= array[i];
        }
    }

    return prodotto;
}