/*
Data una matrice di interi, verificare se è una matrice identità: 
ovvero, se ha 1 sulla diagonale principale e 0 altrove.
*/

#include <stdio.h>
#define N 8

void main(){
    int matrice[N][N];
    int identità = 1; 

    //input 
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            scanf("%d", &matrice[i][j]); 
        }
    }

    //cerco se esiste un controesempio della diagonale principale
    for (int i = 0; i<N && identità; i++){
        for (int j = 0; j<N && identità; j++){
            if (i == j){
                if (matrice[i][j] != 1){
                    identità = 0;
                }
            }else{
                if (matrice [i][j] != 0){
                    identità = 0;
                }
            }
        }
    }

    //output 
    if (identità){
        printf("La matrice è una identità");
    }else{
        printf("La matrice non è un'identità");
    }
}
