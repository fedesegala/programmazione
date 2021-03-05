/*
Si codifichi il sottoprogramma in cifra(int val) che ricevuto in ingresso un valore intero
sicuramente positivo, restituisce  il numero ottenuto cifrando ogni cifra di val con la cifra
successiva (9 diventa uno 0)
*/

#include <stdio.h>

int cifra (int val);
int potenza (int, int);

int main() {
    int val; 
    printf ("Inserire un numero positivo: ");
    do {
        scanf("%d",&val);
    }while (val<=0);

    int risultato = cifra(val);

    printf("%d\n",risultato);
}

int cifra (int val) {
    int res = 0;
    int indice = 0;

    while (val > 0){
        int n = val % 10;
        if (n < 9){
            res += potenza (10,indice) * (n+1);
        }else{
            res += 0;
        }
        val /= 10;
        indice++;
    }


    return res;
}

int potenza (int base, int esponente){
    if (esponente == 0){
        return 1;
    }else{
        int prod = 1;
        while (esponente > 0){
            prod *= base;
            esponente--;
        }
        return prod;
    }
}