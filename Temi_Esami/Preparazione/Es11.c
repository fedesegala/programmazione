/*
Dato un array contenente al più 100 numeri interi. 
Inizializzare l'array da tastiera, il numero 99 indica la fine dell'input 
stampare a video le terne consecutive il cui prodotto sia minore della media
di tutti gli elementi del vettore. 
Le terne si possono sovrapporre. 
*/

#include <stdio.h>

#define N 100
#define LOCK 99

double media (int array[], int indice);

int main (){
    int array[N];

    int indice = 0; 
    int flag = 1;
    while (indice < N && flag){
        int tmp;
        printf("Inserire un numero, 99 per terminare: ");
        scanf("%d",&tmp);
        if (tmp != 99){
            array[indice] = tmp;
            indice++;
        }else{
            flag = 0;
        }
    }

    for (int i = 0; i<indice-2; i++){
        if (array[i] * array[i+1] * array[i+2] < media(array, indice)){
            printf("Terna: %d - %d - %d\n",array[i],array[i+1],array[i+2]);
        }
    }

    //printf("media: %.2f, %d",media(array,indice),indice);
}

double media (int array[], int indice){
    int sum = 0;
    for (int i = 0; i<indice; i++){
        sum += array[i];
    }

    return (double)sum/indice;
}