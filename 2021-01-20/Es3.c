/*
Si scriva un programma in linguaggio C per
calcolare il valore massimo e minimo di un
insieme di n numeri inseriti da tastiera. Il
programma deve leggere il valore di n, ed in
seguito deve leggere una sequenza di n numeri. A
questo punto il programma deve stampare il
massimo ed il minimo tra i numeri inseriti. 
*/

#include <stdio.h>

int main(){
    int n;
    int indice = 0; 
    int max, min;

    printf("Inserire un valore n: ");
    scanf("%d",&n);

    while (indice < n){
        if (indice == 0){
            printf("%d: inserire un numero: ",indice+1);
            scanf("%d",&max);
            min = max;
        }else{
            int temp; 
            printf("%d: inserire un numero: ",indice+1);
            scanf("%d",&temp);
            if (temp > max){
                max = temp;
            } else if (temp < min){
                min = temp;
            }
        }

        indice++;
    }

    printf("MIN: %d, MAX: %d\n",min,max);
}