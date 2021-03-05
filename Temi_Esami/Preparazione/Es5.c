/* 
Si scriva un programma chhe permette all'utente di inizializzare una matrice di interi di dimansione NxN
con numeri interi compresi tra 0 e 99 estremi inclusi. 
Dopo aver stampato la matrice a video il programma deve chiedere all'utente di inserire il valore di un intero val
e deve poi contare e stampare a video le occorrenze di val di ogni riga della matrice. 
Infine, il programma deve sostituire con uno 0 le occoreenza di val nelle sole righe della matrice con più di due occorrenze di val
*/

#include <stdio.h>
#define N 4

int main (){
    int matrice[N][N];
    int val; 

    //input della matrice
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("Inserire un numero compreso tra 0 e 99: ");
            do {
                scanf("%d",&matrice[i][j]);
            }while (matrice[i][j] < 0 || matrice[i][j] > 99);
        }
    }

    //stampa della matrice 
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("%d\t",matrice[i][j]);
        }
        printf("\n");
    }

    //input di val 
    printf("Inserire ora val: ");
    scanf("%d",&val);

    int occorrenze[N] = {0};

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (matrice[i][j] == val)
                occorrenze[i] ++;
        }
        printf("Riga %d: %d occorrenze\n",i+1,occorrenze[i]);
    }

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (occorrenze[i] > 2){
                if (matrice[i][j] == val)
                    printf("0\t");
                else
                    printf("%d\t",matrice[i][j]);
            }else{
                printf("%d\t",matrice[i][j]);
            }
        }
        printf("\n");
    }
}