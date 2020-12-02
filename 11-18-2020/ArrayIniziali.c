/*
Scrivere un programma che memorizzi in un array 20 caratteri 
inseriti dall'utente e altri due caratteri c ed r. 
Il programma restituisca un array costituito a partire dall'array 
principale in cui ogni ricorrenza di c è sostituita con r
*/

#include <stdio.h>
#define LENGTH 20
 
void main(){
    char input[LENGTH];
    char output[LENGTH];
    char c,r;

    for (int i = 0; i<LENGTH+1; i++){
        if (i<LENGTH){
            printf("%d) Inserire un carattere da memorizzare nell'array di 20 caratteri: ",i+1);
            scanf("\n%c",&input[i]);
        }else{
            printf("\n\nOra inserire rispettivamente c ed r separati da ' ' \nc sarà il carattere le cui \nricorrenze saranno sostituite con r: ");
            scanf ("\n%c %c",&c,&r);
        }
    }

    for (int i = 0; i<LENGTH; i++){
        if (input[i] == c){
            output[i] = r;
        }else{
            output[i] = input[i];
        }
    }

    for (int i = 0; i<LENGTH; i++){
        printf("%c",output[i]);
    }
}