/*
Goldbach: 
ogni numero pari maggiore di 2, può essere scritto come somma di due numeri primi che possono anche essere uguali 
Trovare tutte le coppie di numeri primi che danno un numero dato in input
*/

#include <stdio.h>
int prime (int); 

void main(){
    int num; 
    
    do{
        scanf("%d",&num);
    }while(num <= 2 || num % 2 != 0);

    for (int i = 2; i<=num/2; i++){
        if (prime(i) && prime(num-i)){
            printf("%d - %d\n%d - %d\n",i, num-i, num-i, i);
        }
    }
}

int prime (int val){
    if (val == 0 || val == 1)
        return 0; 
    else{
        for (int i = 2; i<val; i++)
            if (val % i == 0)
                return 0; 

        return 1;
    }
}