/*
Scrivere un programma che data una matrice int A[M][M] verifichi 
se per ogni elemento x della diagonale principale esiste un elemento y della diagonale secondaria
tale che y>x
*/

#include <stdio.h>
#define M 4

void main(){
    int matrice[M][M] = {
        {1,3,5,1},
        {7,4,6,7},
        {6,6,2,3},
        {10,14,2,8}
    };

    int max_principale = matrice[0][0];  
    int max_secondaria = matrice[0][M-1];

    for (int righe = 0; righe<M; righe++){
        for (int colonne = 0; colonne<M; colonne++){
            if (righe == colonne && max_principale < matrice[righe][colonne]){
                max_principale = matrice[righe][colonne];
            } 

            if (righe+colonne == M-1){
                //mi trovo sulla diagonale secondaria
                if (max_secondaria < matrice[righe][colonne]){
                    max_secondaria = matrice[righe][colonne];
                }
            }
        }
    }

    if (max_secondaria > max_principale){
        printf("La proprietà è vera, infatti %d > %d\n",max_secondaria,max_principale);
    }else{
        printf("La proprietà è falsa, infatti %d <= %d\n",max_secondaria,max_principale);
    }
}