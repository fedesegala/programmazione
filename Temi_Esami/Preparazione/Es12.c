/*
Data una matrice quadrata di lato N, essa viene utilizzata per semplificare il gioco Sudoku
il programma deve: 
- riempire la matrice da tastiera: in ogni cella deve comparire solo un numero appartenente 
all'intervallo 1-9
-stampare a video la matrice 
-chiedere l'inserimento di una riga r e di una colonna c, rifiutando in entrambi i casi valori diversi
da {0,3,6} e verificare se nel quadrato di dimentsione 3X3 e origine nel punto r,c ogni valore 
dell'intervallo [1-9] compare esattamente una volta, stampando un opportuno messaggio a video
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 9

int main (){
    int sudoku [N][N]; 
    int r,c;

    srand (time(0));

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            sudoku[i][j] = rand() % 9 + 1;
        }
    }
    

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("%d\t",sudoku[i][j]);
        }
        printf("\n");
    }

    printf("Inserire una riga (0,3 o 6): ");
    do{
        scanf("%d",&r);
    }while (r != 3 && r != 0 && r != 6);

    printf("Inserire una colonna (0,3 o 6): ");
    do{
        scanf("%d",&c);
    }while(c != 0 && c != 3 && c != 6);

    int verifica[N] = {0};
    for (int i = r; i<r+3; i++){
        for (int j = c; j<c+3; j++){
            verifica[sudoku[i][j]-1] ++;
        }
    }

    int proprieta = 1;
    for (int i = 0; i<N; i++){
        if (verifica[i] == 0){
            proprieta = 0;
        }
    }

    printf("%d\n",proprieta);
}