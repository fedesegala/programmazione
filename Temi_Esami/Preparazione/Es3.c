/*
Si scriva una funzione Max-array che riceve due array di interi ORIGINAL e RESULT 
e la loro lunghezza (uguale per entrambi). La funzione deve modificarfe result in modo 
che ogni suo elemento di indice i diventi il massimo degli elementi di original, con indice 
compreso tra 0 e i inclusi. La funzione non deve modificare gli elementi di original. 
Se length == 0, la funzione non deve fare nulla
*/

#include <stdio.h>
#define N 10

void max_array(int original[], int result[], int l);
int max (int array[], int indice);

int main (){
    int original [] = {-2,6,7,5,8,-3,0,-4,0,-1};
    int result [N];

    max_array (original, result, 10); 

    for (int i = 0; i<N; i++){
        printf("%d   ",result[i]);
    }

    printf("\n");
}

void max_array (int original[], int result[], int l){
    if (l != 0){
        for (int i = 0; i<l; i++){
            result[i] = max(original, i);
        }
    }
}

int max (int array[], int indice){
    int max = array[0];
    for (int i = 0; i<=indice; i++){
        if (array[i] > max)
            max = array[i];
    }
    return max;
}