/*
Scrivere una funzione avente due parametri interi b ed e che calcoli la potenza b^e
*/

#include <stdio.h>

int potenza(int, int);

void main(){
    int b, e; 

    printf("Inserire b ed e: ");
    scanf("%d %d",&b,&e);

    int risultato = potenza(b,e);

    printf("%d\n",risultato);
}

int potenza(int b, int e){
    int p = 1; 
    if (e == 0){
        return 1;
    }else{
        return b*potenza(b,e-1);
    }
}