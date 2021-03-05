/*
Scrivere una funzione che data una matrice
char M[p][q] copi tutti gli elementi di M in un array
lungo p*q nell’ordine esemplificato in figura
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 4
#define C 5 
#define ARR R*C

void elaborazione(int matrix[R][C], int arr[ARR]);

int main(){
    int matrix[R][C]; 
    int array[ARR];
    
    srand(time(0));
    
    for (int i = 0; i<R; i++){
        for (int j = 0; j<C; j++){
            matrix[i][j] = rand() % 101 + 10;
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }

    elaborazione(matrix,array);

    for (int i = 0; i<ARR; i++){
        printf("%d  ",array[i]);
    }
}

void elaborazione(int matrix[R][C], int array[ARR]){
    int indice = 0;
    int col = 0;
    int flag = 0;
    while (col < C) {
        if (flag % 2 == 0) {
            for (int i = 0; i < R; i++){
                array[indice] = matrix[i][col];
                indice++;
            }
            flag = 1;
        } else {
            for (int i = R-1; i >= 0; i--){
                array[indice] = matrix[i][col];
                indice++;
            }
            flag = 0;
        }
        col++;     
    }
}