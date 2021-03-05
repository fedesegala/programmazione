/*
si scriva un programma non scomposto in sottoprogrammi che elabori una matrice 9x9 di interi non negativi. 
determinare la sotto-matrice 3x3 che ha la somma massima e stamparne le coordinate del punto in alto a sinistra 
sotituire poi con uno 0 tutte le celle non comprese nella sotto-matrice 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 9
#define N_1 N/3

int main (){
    int matrice[N][N];

    srand(time(0));

    printf("Matrice originale originata con numeri casuali:\n");
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            matrice[i][j] = rand() % 101 + 1;
            printf("%d\t",matrice[i][j]);
        }
        printf("\n");
    }

    int x_max = 0; 
    int y_max = 0;
    int max_somma = 0;

    //calcolo sottomatrice max
    for (int i = 0; i<N; i+=3){
        for (int j = 0; j<N; j+=3){
            //sono in una sottomatrice 
            int somma = 0;
            for (int k = i; k<i+3; k++){
                for (int h = j; h<j+3; h++){
                    somma += matrice[k][h];
                }
            }
            if (somma > max_somma){
                max_somma = somma;
                x_max = j; 
                y_max = i;
            }
        }
    }

    printf("Ascissa: %d, Ordinata: %d\n",x_max,y_max);

    printf("Matrice Modificata: \n");
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (j >= x_max && j < (x_max + 3)){
                if (i >= y_max && i < (y_max +3)){
                    printf("%d\t",matrice[i][j]);
                }else{printf("0\t");}
            }else{printf("0\t");}
        }
        printf("\n");
    }
}