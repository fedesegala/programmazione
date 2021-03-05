/*
Scrivere un programma C che:
○ Richiede all’utente di inserire 20 caratteri e li salva in
un array.
○ Produce due risultati:
● Un array costruito con i caratteri inseriti in cui ogni
vocale (maiuscola o minuscola) è sostituita da una
cifra corrispondente (A=1, E=2, I=3, O=4, U=5).
● Un numero contenente la somma delle cifre
(caratteri da 0 a 9) contenute nella stringa
prodotta.
*/

#include <stdio.h>
#define N 20

void input(char [N]);
void cambia(char origine[N], char cambiato[N]);
void stampa(char [N]);
int somma(char [N]);

int main(){
    char origine[N];
    char cambiato[N];
    input (origine);
    cambia (origine,cambiato);

    printf("array originale: \n");
    stampa(origine);
    printf("\narray risultato: \n");
    stampa(cambiato);

    printf("\nSomma delle cifre nel risultato: %d\n",somma(cambiato));
}

void input(char array[N]){
    for (int i = 0; i<N; i++){
        printf("%d: Inserire un carattere: ",i+1);
        scanf("\n%c",&array[i]);
    }
}

void stampa(char array[N]){
    for (int i = 0; i<N; i++){
        printf("%c  ",array[i]);
    }
}

void cambia(char origine[N], char cambiato[N]){
    for (int i = 0; i<N; i++){
        switch (origine[i]){
            case 'a':
            case 'A': 
                cambiato[i] = '1';
                break;
            case 'e': 
            case 'E': 
                cambiato[i] = '2';
                break;
            case 'i': 
            case 'I': 
                cambiato[i] = '3';
                break;
            case 'o': 
            case 'O': 
                cambiato[i] = '4';
                break;
            case 'u': 
            case 'U': 
                cambiato[i] = '5';
                break;
            default: 
                cambiato[i] = origine[i];
        }
    }
}

int somma(char array[N]){
    int somma = 0; 
    for (int i = 0; i<N; i++){
        if (array[i] >= 48 && array[i] <= 57){  //se ho uncarattere compreso tra 1 e 9 
            somma += (array[i] - 48);   //char '1' = 49: per avere 1 devo fare int('1') - 48 
        }
    }

    return somma;
}
