/*
Scrivere un programma che memorizza tutte le righe di una matrice 4x6 
in un unico array di interi lungo 24
*/

#include <stdio.h>
#define R 4
#define C 6
#define L R*C 

void main(){
    int a[L];
    int count = 0;
    int matrix[R][C] = {
        {1,4,5,2,3,6},
        {4,5,4,1,1,1},
        {7,3,2,3,4,5},
        {2,2,6,6,0,1}
    };
     
    for (int i = 0; i<R; i++){
        for (int j = 0; j<C; j++){
            count ++;
            a[count] = matrix[i][j];
            printf("%3d",a[count]);
        }
    }
    printf("\n");

}