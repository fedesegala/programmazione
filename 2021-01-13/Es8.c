/*
Scrivere un programma C che acquisisce un array di
10 interi. Il programma individua e visualizza tutte le
sotto-sequenze di lunghezza massima (cioè non
contenute in una sotto-sequenza più lunga) e maggiore
di 1 costituite da soli numeri pari. Per esempio se
l’utente inserisce l’array: 1 2 4 3 2 6 6 7 8 1,
il programma visualizzerà le due sotto-sequenze:
2 4 e 2 6 6
*/

#include <stdio.h>
#define N 10

void sub_sequences (int array[N]);
void print_sequenza (int array[N], int start, int lunghezza);
int main (){
    int arr[N]; 
    for (int i = 0; i<N; i++){
        printf("Inserire un intero: ");
        scanf("%d",&arr[i]);
    }

    sub_sequences(arr);

    return 0;
}

void sub_sequences (int arr[N]){
    int flag = 0;
    int conta = 0;
    int indice;
    for (int i = 0; i<N; i++){  //scorro tutto l'array
        if(arr[i] % 2 == 0 && !flag){   //inizio di una sequenza
            indice = i;
            conta++;
            flag=1;
        }else if(arr[i] % 2 == 0 && flag){  //sequenza iniziata e prosegue
            conta++;
        }else if(arr[i] % 2 != 0 && flag){  //sequenza termina, invocazione stampa sequenza
            flag = 0;
            if (conta > 1)
            print_sequenza(arr,indice,conta);
            printf("\n");
            conta = 0;
        }
        if (i == N-1 && conta > 1){         //caso in cui la sequenza prosegue fino a fine vettore ed è maggiore di 1
            print_sequenza(arr,indice,conta);
        }
    }
}

void print_sequenza(int arr[N], int start, int lunghezza){
    for (int i = 0; i<lunghezza; i++){
        printf("%d   ",arr[i+start]);
    }
}