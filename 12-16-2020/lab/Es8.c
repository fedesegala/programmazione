/*
Scrivere un sottoprogramma scomponi che ricevuto in ingresso un numero intero positivo n, 
lo scompone e restituisce al chiamante i fattori
Memorizzre i valori in un array di dim max 10
Ad esempio per n = 60 il programma trasmette i valori 2 2 4 5 
*/

#include <stdio.h>
#define MAX 10 

void scomponi(int, int[]);
int primo_divisore(int);

void main(){
    int n; 
    int fattori[MAX] = {0};

    printf("Inserire un numero: ");
    scanf("%d",&n);

    scomponi(n, fattori);

    for(int i = 0; i<MAX; i++){
        if(fattori[i] != 0){
            printf("%d\t",fattori[i]);
        }
    }

    printf("\n");
}

void scomponi(int num, int vettore[]){
    int indice = 0;
    int temp = num;

    while(temp > 1){
        vettore[indice] = primo_divisore(temp);
        temp = temp/vettore[indice];
        indice++;
    }
}

int primo_divisore(int num){
    for (int i = 2; i<=num; i++){
        if (i <= num && num % i == 0){
            return i; 
            i = num+1;
        }
    }
}