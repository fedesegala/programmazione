/*
Scrivere una funzione most che dato un intero
positivo n restituisca la sua cifra più significativa
(quella più a sinistra) nella rappresentazione in
base 10.
○ Ad esempio se n è 9234 allora most deve
restituire 9.
*/

#include <stdio.h>

int most(int n);
int main(){
    int n;
    do{
        printf("Inserire un numero POSITIVO: ");
        scanf("%d",&n);
    }while(n<=0);

    int msd = most(n); 
    printf("%d\n",msd);
}

int most(int n){
    while(n > 10){
        n/=10;
    }

    return n;
}