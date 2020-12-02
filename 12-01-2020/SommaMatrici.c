/*
programma che esegua la somma di due matrici
    - devono avere le stesse dimensioni
*/

#include <stdio.h>
#define R 3 
#define C 4 

void main(){
    int m1[R][C] = {{1,3,2,4},{0,2,1,3},{0,0,0,0}};
    int m2[R][C] = {{0,1,2,0},{1,2,0,4},{1,-1,-3,1}};

    int somma [R][C]; 

    for (int i = 0; i<R; i++){
        for (int j = 0; j<C; j++){
            somma[i][j] = (m1[i][j] + m2[i][j]);
            printf("%d  ", somma[i][j]);
        }
        printf("\n");
    }

    

}