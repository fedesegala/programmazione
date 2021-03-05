/*
Una funzione leggi che richiede all’utente di
inserire da standard input una matrice 4x5.
● Una funzione trasposta che riceve come
parametro una matrice a 4x5 e una matrice b
5x4. La funzione calcola la trasposta di a e la
memorizza in b.
○ Una matrice a con i righe e j colonne può
essere trasposta in una matrice b con j righe
e i colonne, dove ogni elemento b(j,i) = a(i,j).
*/

#include <stdio.h>
#define ROWS 4
#define COLS 5
void leggi(char [][COLS]);
void trasponi(char [][COLS], char [][ROWS]);

void main(){
    char matrice [ROWS][COLS];
    char trasposta [COLS][ROWS];

    leggi(matrice);
    trasponi(matrice,trasposta);
    printf("Originale:\n");
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLS; j++){
            printf("%c\t",matrice[i][j]);
        }
        printf("\n");
    }
    printf("Trasposta:\n");
    for (int i = 0; i<COLS; i++){
        for (int j = 0; j<ROWS; j++){
            printf("%c\t",trasposta[i][j]);
        }
        printf("\n");
    }

}

void leggi(char matrice[][COLS]){
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLS; j++){
            scanf("%c\n",&matrice[i][j]);
        }
    }
}
void trasponi(char m[ROWS][COLS], char trasposta[COLS][ROWS]){
    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLS; j++){
            trasposta[j][i] = m[i][j];
        }
    }
}