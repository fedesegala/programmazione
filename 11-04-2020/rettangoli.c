/*
Scrivere un programma che ricevuto in ingresso due numeri interi positivi a e b (se così non è, li richiede), 
visualizza un rettangolo di dimensione a*b usando il carattere '*’. 
*/

#include  <stdio.h>

void main(){
    int base,altezza;

    do  {
        printf("Inserire a e b interi e positivi, in modo che il programma\nvada a creare un rettangolo di base 'a' e altezza 'b':\n");
        scanf("%d%d",&base,&altezza);
    }while(base<=0 || altezza<=0);

    for (int i=0; i<altezza; i++){
        for (int j=0; j<base; j++){
            printf("*\t");
        }
        printf("\n");
    }
}