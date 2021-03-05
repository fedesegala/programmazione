/*
Scrivere un programma C che acquisisce un array a1
di 10 interi. Il programma crea e visualizza un nuovo
array a2 contenente in ciascuna posizione i:
● la somma dei numeri di a1 fino alla posizione i
inclusa, se i è pari
● il prodotto dei valori di a1 nelle posizioni i e i-1, se i
è dispari.
Per esempio se l’utente inserisce l’array:
1 2 4 2 8 6 6 8 8 1
programma creerà e visualizzerà l’array:
1 2 7 8 17 48 29 48 45 8
*/

#include <stdio.h>
#define N 10

int somma_i(int array[N], int index);
int prodotto_adiacenti(int array[N], int index);
void stampa(int array[N]);

int main(){
    int a1[N]; 
    int a2[N] = {0}; 

    //acquisizione array
    for (int i = 0; i<N; i++){
        printf("%d: Inserire un intero: ",i+1);
        scanf("%d",&a1[i]);
    }

    for (int i = 0; i<N; i++){
        if(i%2==0){
            a2[i] = somma_i(a1,i);
        }else{
            a2[i] = prodotto_adiacenti(a1,i);
        }
    }

    stampa(a2);

}

int somma_i (int array[N], int index){
    if (index == 0){
        return array[0];
    }else{
        int somma = 0;
        for (int i = 0; i <= index; i++){
            somma += array[i];
        }
        return somma;
    }
}

int prodotto_adiacenti(int array[N], int index){
    return array[index]*array[index-1];
}

void stampa(int array[N]){
    for (int i = 0; i<N; i++){
        printf("%d  ",array[i]);
    }
    printf("\n");
}