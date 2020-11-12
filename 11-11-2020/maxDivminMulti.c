/*
Scrivere un programma che calcoli il massimo comun divisore e il minimo comune multiplo 
di due numeri inseriti in input. Entrambi i numeri devono essere > 0 
*/

#include <stdio.h>

void main(){
    int a,b; 
    int maxDivisore;
    int minMultiplo;

    do{
        printf("inserire a>0: \n");
        scanf("%d",&a);
        printf("inserire b>0: \n");
        scanf("%d",&b);
    } while (a<=0 || b<=0);

    //prendo i punti di partenza
    if (a>b){
        maxDivisore = b;
        minMultiplo = a;
    }else{
        maxDivisore = a;
        minMultiplo = b;
    }

    //calcolo il massimo comune divisore
    for (int i = maxDivisore; i>0; i--){
        if (b%i==0 && a%i==0){
            maxDivisore = i;
            i = -1;
        }
    }

    //calcolo il minimo comune multiplo
    for (int i = minMultiplo; i<=(a*b); i++){
        if (i%a==0 && i%b== 0){
            minMultiplo = i;
            i = (a*b)+1;
        }
    }

    printf("Il massimo comune divisore è: %d\n",maxDivisore);
    printf("Il minimo comune multiplo è: %d\n",minMultiplo);


}