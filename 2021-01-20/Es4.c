/*
Si scriva un programma in linguaggio C che converta un
numero binario in un numero decimale. Il numero
binario è rappresentato su N bit, e il valore di N è
inserito da tastiera. L’utente inserisce le cifre del numero
binario un bit alla volta, partendo dal bit meno
significativo (ossia dal bit di peso 0). Il programma
visualizzerà il numero decimale corrispondente.
○ Suggerimento. Per calcolare le potenze di 2 utilizzare la
funzione pow, includendo la libreria math.h. Ad esempio
per calcolare 25, si scriveràpow(5,2). In generale, data
una base a, per calcolare y = ab, si scrive y = pow(a,b)
includendo la libreria math.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n = 0;
    int in; 
    int indice = 0; 
    do{
        printf("Inserire la cifre del numero: ");
        scanf("%d",&in);
        
        while(in < 0 || in >= 2){
            printf("Errore inserire nuovamente: ");
            scanf("%d",&in);
        }

        n += in*pow(2,indice);
        indice ++;

    }while(indice <= 10);

    printf("%d\n",n);
}