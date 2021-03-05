/*
Scrivere un sottoprogramma scomponi che ricevuto in ingresso strettamente positivo n, 
lo scompone e restituisce al chiamante i fattori. 
Memorizzare i valori in un array di dim max 10.
*/

#include <stdio.h>

#define N 10

void scomponi (int val, int array[N]);

int main (){
    int n; 
    int fattori [N] = {0};
    printf("Inserire n positivo: ");
    //input e validazione di n
    do{
        scanf("%d",&n);
    }while(n <= 0);

    scomponi(n,fattori);

    for (int i = 0; i<N; i++){
        if (fattori[i] != 0){
            printf("%d\t",fattori[i]);
        }
    }

    printf("\n");
}

void scomponi (int val, int array[N]){
    int indice = 0;
    while (val > 1 && indice < N){
        for (int i = 2; i<=val; i++){
            if (val % i == 0){
                array[indice] = i;
                i = val;
                indice++;
            }
        }

        val /= array[indice-1];
    }
}