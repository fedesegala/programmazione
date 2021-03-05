/*
Un numero si dice troncabile primo destro se il numero stesso e tutti i numeri ottenuti rimuovendo 
successivamente la cifra più a destra sono primi. Scrivere il sottoprogramma right_prime (int val) 
che ricevuto in ingresso un val sicuramente positivo, restituisce 1 se il numero è troncabile primo destro
Ad esempio 317 è troncabile primo destro
*/

#include <stdio.h>

int right_prime (int val);
int prime (int val);

int main (){
    int val;
    
    //acuistisco e valido val
    printf("Inserire un numero strettamente positivo: ");
    do{
        scanf("%d",&val);
    }while(val <= 0);

    printf("Proprietà: %d\n",right_prime(val));
}

int right_prime (int val){
    while (val > 0){
        if (prime(val)){
            val /= 10;
        }else{
            return 0;
        }
    }
    return 1;
}

int prime (int val){
    for (int i = 2; i<=val/2; i++){
        if (val % i == 0){
            return 0;
        }
    }
    return 1;
}