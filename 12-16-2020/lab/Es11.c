/*
Scrivere un programma che legga un carattere, uno spazio e quindi
una sequenza di caratteri minuscoli terminati da . 
e che stampi quando ha letto dopo il primo spazio, ma 
sostituendo tutte le vocali minuscole con il primo carattere letto 
(la stampa avverà dopo ogni carattere letto). Per fare ciò
si definisca una funzione cambia che, dati i due caratteri restituisca il primo 
carattere se il secondo è una vocale minuscola altrimenti restituisca il secondo.
*/

#include <stdio.h>

char cambia (char, char);

void main(){
    char sostituisci; 
    char spazio = 'c';
    char spazio_1;

    printf("%d",spazio);

    printf("Inserire un carattere con cui sostituire le vocali della sequenza: \n");
    scanf("%c ",&sostituisci);

    char carattere;
    do{
        scanf("%c",&carattere);
        printf("%c\n",cambia(carattere,sostituisci));
    }while(carattere != '.');

}

char cambia(char car, char sost){
    switch (car){
        case 'a': 
        case 'e':
        case 'i':
        case 'o': 
        case 'u':
            return sost;
            break;
        default: 
            return car;
    }
}