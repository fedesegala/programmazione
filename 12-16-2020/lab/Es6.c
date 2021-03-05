/*
Si scriva un programma C che definisce una funzione 
int next_prime(int last); che restituisce il numero primo immediatamente
successivo a last 
Si utilizzi i seguente main() per testare...
*/

#include <stdio.h>

int next_prime(int last);

int main() {
    int number; 
    int c; 
    int p = 2; 
    printf("Quanti numeri primi vuoi stampare? ");
    scanf("%d", &number);
    for (c = 0; c < number; c++){
        printf("%d\n",p);
        p = next_prime ( p );
    }
}

int next_prime(int last){
    int prova = last+1; 
    int primo = 1; 

    for (int i = 2; i<prova && primo; i++){
        if (prova % i == 0)
            primo = 0;
    }

    if (primo){
        return prova;
    }else{
        return next_prime(prova);
    }

}