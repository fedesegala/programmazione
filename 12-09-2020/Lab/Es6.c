/*
Scrivere un programma che chieda all'utente di inserire una matrice di interi di dimensione 3X3
Il programma stampi a video il valore 1 se la matrice contiene tutti gli interi a partire da 0 
fino al numero di celle -1. 0 in caso contrario 

ad esempio con la matrice 

    1   0   2
    3   4   6
    5   7   8

Il programma stamperà a video 1
*/

#include<stdio.h>
#define M 3
#define LUNGHEZZA M*M

void main(){
    int matrice[M][M];
    int controllo[LUNGHEZZA] = {0};

    int indice = 0; //valore per la stampa dell'input della matrice
    for (int i = 0; i<M; i++){
        for (int j = 0; j<M; j++){
            printf("%d) Inserire un valore della matrice: ", indice);
            scanf("%d",&matrice[i][j]);

            if (matrice[i][j] >= 0 && matrice[i][j] < LUNGHEZZA){
                controllo[matrice[i][j]] ++;
            }
            indice++;
        }
    }

    int valori_presenti = 1; 
    for (int i = 0; i<LUNGHEZZA; i++){
        if (controllo[i] == 0)
            valori_presenti = 0;
    }

    printf("%d\n",valori_presenti);
}