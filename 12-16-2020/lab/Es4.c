/*
Scrivere un sottoprogramma che ricevuto in ingresso un numero intero, 
calcola e restituisce il numero intero ottenuto mettendo le cifre
in ordine opposto. 
Ad esempio 12345 -> 54321
190 -> 91
*/

#include <stdio.h>

int flippa_numero(int); 
int conta_cifre(int);
int potenza(int, int);

void main(){
    int n = 190; 
    int n_flip; 
    
    n_flip = flippa_numero(n);
    printf("%d\n",n_flip);
}

int flippa_numero(int num){
    int flipped = 0; 
    int moltiplica = potenza(10,conta_cifre(num)) / 10;

    while(num > 0){
        int attuale = num % 10;
        num /= 10;

        flipped += attuale*moltiplica;
        moltiplica /= 10;
    }

    return flipped;

}

int conta_cifre(int num){
    int cont = 0; 

    while(num>0){
        num /= 10; 
        cont++;
    }

    return cont;
}

int potenza(int base, int esponente){
    int risultato = 1;

    for (int i = 0; i<esponente; i++){
        risultato *= base;
    }

    return risultato;
}