/*
Si scirva un programma che permetta all'utente di inizializzare una matrice di interi 
di dimansione NxN (n fissato) 
Dopo aver stampato a video la matrice, il programma deve chiedere all'utente le coordinate x e y, comprese tra 0 e N-1 
di un elementi della matrice (ovviamente rifiutando eventuali valori non validi come coordinata) e stampare la somma
degli elementi compresi nel rettangolo avente come angolo inferiore destro l'elemento di coordinate x,y
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 6 

int somma (int matrice[N][N], int x, int y);

int main (){
    int matrice[N][N]; 
    int x,y; 

    srand(time(0));

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            matrice[i][j] = rand () % (101 + 50) - 50; 
            printf("%d\t",matrice[i][j]);
        }
        printf("\n");
    }

    printf("Inserire x compresa tra 0 e %d: ",N);
    do {
        scanf("%d",&x);
    } while (x < 0 || x >= N);

    printf("Inserire y compresa tra 0 e %d: ",N);
    do {
        scanf("%d",&y);
    } while (y < 0 || y >= N);

    printf("%d\n",somma(matrice,x,y));
}

int somma (int matrice[N][N], int x, int y){
    int somma = 0;
    for (int i = 0; i<=x; i++){
        for (int j = 0; j<=y; j++){
            printf("%d\t",matrice[i][j]);
            somma += matrice[i][j];
        }
        printf("\n");
    }
    return somma;
}