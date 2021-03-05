/*
Scrivere un sottoprogramma che dati due interi, verifica se il primo è miltiplo del secondo e restituisce 1 o 0 al chiamante
*/

#include <stdio.h>

int multiplo(int, int);

void main(){
    int n1,n2;
    printf("Inserire due interi: ");
    scanf("%d %d",&n1,&n2);

    printf("Esito: %d\n",multiplo(n1,n2));
}

int multiplo(int n1, int n2){
    return (n1 % n2 == 0)? 1 : 0;
}