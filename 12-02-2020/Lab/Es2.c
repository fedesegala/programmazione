/*
Scrivere un programma ceh data una matrice quadrata in m[D][D] calcoli la sua trasposta int n[d][d]
*/

#include <stdio.h>
#define N 4

void main(){
    int m1[N][N] = {
        {1,3,2,-1},
        {4,1,5,5},
        {2,1,0,7},
        {2,4,1,5}
    }; 
    int trasp[N][N];

    for (int i = 0; i<N; i++){      //righe 
        for (int j = 0; j<N; j++){      //colonne 
            trasp[i][j] = m1[j][i];
            printf("%3d",trasp[i][j]);
        }
        printf("\n");
    }
}