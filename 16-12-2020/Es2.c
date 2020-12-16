/*
Un numero è troncabile primo right 
se lui e tutti i numeri ottenuti rimuovendo la prima cifra a destra sono primi
Creare un programma che dice se un numero è troncabile primo destro

Es: 317 è tpr: 317 è primo, 31 è primo, 3 è primo
*/

#include <stdio.h>
int right_prime(int);
int prime(int);
void main(){
    int n, r; 

    printf("Dammi un numero intero positivo: ");
    do{
        scanf("%d",&n);
    }while(n<=0);

    r = right_prime(n);

    printf("Esito: %d",r);
}

int right_prime(int val){
    while(val>0){
        if(prime(val)){
            val /= 10;
        }else{
            return 0;
        }
    }
    return 1;
}

int prime(int val){
    if (val == 0 || val == 1)
        return 0;
    else{
        for (int i = 2; i<val; i++){
            if (val % i == 0){
                return 0;
            }
        }
        return 1;
    }
}
