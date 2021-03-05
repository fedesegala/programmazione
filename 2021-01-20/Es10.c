/*
Scrivere un programma che acquisisce una sequenza di
8 interi positivi e ne disegna un istogramma ruotato di
90 gradi, utilizzando il carattere *. 
*/

#include <stdio.h>
#define N 8

int max (int [N]);

int main(){
    int array[N];
    for (int i = 0; i<N; i++){
        printf("Inserire un'intero positivo: ");
        do{
            scanf("%d",&array[i]);
        }while(array[i]<0);
    }

    for (int i = 0; i<N; i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
    int massimo = max(array);
    while(massimo>0){
        for (int j = 0; j<N; j++){
            if (array[j] == massimo){
                printf("*\t");
                array[j]--;
            }else{
                printf(" \t");
            }
        }
        massimo --;
        printf("\n");  
    }
     
}

int max (int array[N]){
    int max = array[0];
    
    for (int i = 1; i<N; i++){
        if (array[i] > max)
            max = array[i];
    }

    return max;
}