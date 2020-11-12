/*
Scrivere un programma che dato un array  di caratteri lungo 10 (con i valori letti da standard input) lo stampa,
lo stampa invertito, sostituisce ogni vocale minuscola con un ’*’
*/

#include <stdio.h>
#define LENGTH 10 

void main(){
    char caratteri [LENGTH];

    for(int i=0; i<LENGTH; i++){
        printf("Inserire un carattere: "); 
        scanf("\n%c",&caratteri[i]);
    }

    for (int i=LENGTH-1; i>=0; i--){
        if (caratteri[i] == 'a' || caratteri[i] == 'e' || caratteri[i] == 'i' || caratteri[i] == 'o' || caratteri[i] == 'u'
            || caratteri[i] == 'A' || caratteri [i] == 'E' || caratteri[i] == 'I' || caratteri[i] == 'O' || caratteri[i] == 'U'){
                printf("*  ");
            }else{
                printf("%c  ",caratteri[i]);
            }
    }

    printf("\n");

}