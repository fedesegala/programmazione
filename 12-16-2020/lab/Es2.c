/*
Si realizzi un programma in C che, dati due interi n e m da standard input, facendo
uso di ua funzione di nome multipli, calcoli il numero degli interi appartenenti all'intervallo [1,n]
che sono multili di m. 
Il programma principale al termine della chiamata alla funzione multipli, 
dovrà stampare il numero di elementi appartenenti all'insieme e poi terminare. 
*/

#include <stdio.h>

int multipli(int, int);

void main(){
    int n, m; 
    
    printf("Inserire due interi n ed m: ");
    scanf("%d %d",&n,&m);

    int conteggio = multipli(n,m);

    printf("Tra 1 e %d sono presenti %d multipli di %d\n", n, conteggio, m);
}

int multipli(int n1, int n2){
    int count = 0;

    for (int i = 1; i<=n1; i++){
        if (i % n2 == 0){
            count++;
        }
    }
    return count;
}