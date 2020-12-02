/*
Scrivere programma che richieda 20 caratteri e li salvi in un array
e che produca i seguenti risultati: 
    - array con gli stessi caratteri inseriti dove però al posto delle vocali 
    ci siano 1 2 3 4 e 5 (a e i o u)
    - un numero contente la somma delle cifre contenute nella stringa prodotta
*/

#include <stdio.h>
#define LENGTH 20

void main(){
    char array[LENGTH]; 
    char elaborato[LENGTH];
    int somma; 

    for (int i = 0; i<LENGTH; i++){
        printf("Inserire un carattere: "); 
        scanf("\n%c",&array[i]);
    }

    for (int i = 0; i<LENGTH; i++){
        switch (array[i]){
            case 'a': 
            case 'A': 
                elaborato[i] = '1';
                break;
            case 'e': 
            case 'E': 
                elaborato[i] = '2';
                break; 
            case 'i': 
            case 'I': 
                elaborato[i] = '3';
                break; 
            case 'o': 
            case 'O': 
                elaborato[i] = '4';
                break; 
            case 'u': 
            case 'U': 
                elaborato[i] = '5';
                break;
            default: 
                elaborato[i] = array[i];
        };
    }

    for (int i = 0; i<LENGTH; i++){
        switch(elaborato[i]){
            case '1': somma+=1; break;
            case '2': somma+=2; break;
            case '3': somma+=3; break;
            case '4': somma+=4; break;
            case '5': somma+=5; break;
            case '6': somma+=6; break;
            case '7': somma+=7; break;
            case '8': somma+=8; break;
            case '9': somma+=9; break;
        };
    }

    for (int i = 0; i<LENGTH; i++){
        printf("%c", elaborato[i]);
    }

    printf("\nLa somma dei caratteri è %d\n",somma);


}