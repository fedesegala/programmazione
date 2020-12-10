/* 
Scrivere un programma ceh permette all'utente di inserire una matrice di 
valori interi di dimensione NXN (N = 5). IL programma deve calcolare e stampare 
l'indice della colonna in cui la massima differenza ottenuta tra due suoi elementi sia massima. 
Nel caso in cui ci sia più di una colonna con uguale differenza massima, stamperà l'indice della
prima colonna troata. 
*/

#include <stdio.h>
#define N 5

void main(){
    int matrice[N][N];
    int indice_max;
    int diff_max = 0;
    
    //traspongo i valori in modo da considerare la massima differenza
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("Inserire un valore della matrice: "); 
            scanf("%d",&matrice[j][i]);
        }
    }

    for (int i = 0; i<N; i++){
        int max = matrice[i][0];
        int min = matrice[i][0];
        for (int j = 0; j<N; j++){
            if (matrice[i][j] > max)
                max = matrice[i][j]; 

            if (matrice[i][j] < min)
                min = matrice[i][j];
            
            if (j == N-1){
                if (max-min == 0 && max-min == diff_max){
                    diff_max = 0; 
                    indice_max = 0;
                }else if (max-min > diff_max){
                    diff_max = max - min;
                    indice_max = i;
                }
            }

            printf("%d\t",matrice[i][j]);
        }
        printf("\n");
    }

    printf("La massima differenza è: %d -> indice %d\n",diff_max,indice_max);
}