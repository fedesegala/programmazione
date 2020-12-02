/*
Scrivere un programma che ricevuto in ingresso un numeri interi positivi a (se così non è, lo richiede), 
visualizza un quadrato di lato a usando il carattere ‘X’ sulla diagonale principale e il carattere ’*’ altrove.
*/

#include <stdio.h>

void main(){
    int lato; 

    do  {
        printf("Inserire la misura positiva di un lato, il programma dara' in output un quadrato di '*' con 'X' sulle diagonali principali\n");
        scanf("%d",&lato);
    }while(lato<=0);

    for (int i=0; i<lato; i++){
        for (int j=0; j<lato; j++){
            if (i == j || i + j == lato-1){
                printf("X\t");
            }else{
                printf("*\t");
            }
        }
        printf("\n\n");
    }
}