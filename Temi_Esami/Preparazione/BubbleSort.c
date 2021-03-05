#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int array[19];

    srand (time (NULL));
    for (int i = 0; i<19; i++){
        array[i] = rand () % 101;
    }

    for (int i = 0; i<18; i++){
        for (int j = 0; j<18; j++){
            if (array[j] > array[j+1]){
                int tmp = array[j]; 
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i<19; i++){
        printf("%d\t",array[i]);
    }
}