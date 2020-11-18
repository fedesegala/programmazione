#include <stdio.h>
#define LENGTH 20 

void main(){
    int array [LENGTH];

    for (int i=0; i<LENGTH; i++){
        printf("Inserire un valore; "); 
        scanf("%d",&array[i]);
    }

    for (int i = 1; i<LENGTH; i++){
        int chiave = array[i]; 
        int j = i-1;
        while (j>= 0 && array[j] > chiave){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = chiave;
    }

    for (int i = 0; i<LENGTH; i++){
        printf("%d\n",array[i]);
    }

    for (int i = LENGTH-1; i>=0; i--){
        int occorrenze = 0;
        printf("%d:",array[i]);
        for (int j = 0; array[i-j] == array[i]; j++){
            occorrenze++;
        }
        printf("%d occorrenze;  ",occorrenze);
        i-=occorrenze-1;
        occorrenze = 0;
    }
}