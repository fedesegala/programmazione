/*
Scrivere un programma che chiede all'utente di inserire da tastiera una matrice 3X3 con
SOLI VALORI MAGGIORI O UGUALI A ZERO.
Il programma, dopo aver stampato la matrice a video, verifica se la matrice è o meno pari
e stampa un opportuno messaggio a video.

Una matrice si dice pari se è composta di soli valori pari
*/

#include <stdio.h>
#define M 3

void main(){
    int matrice[M][M];
    int matrice_pari = 1;
    int indice = 1;
    for (int i = 0; i<M; i++){
        for (int j = 0; j<M; j++){
            do{
                printf("%d) Inserire un vlore maggiore o uguale a 0: ",indice);
                scanf("%d",&matrice[i][j]);
                if(matrice[i][j] % 2 < 0){
                    printf("%d) Errore!! è richiesto un valore maggiore o uguale a 0!\n",indice);
                }
            }while(matrice[i][j] < 0);

            if (matrice[i][j] % 2 != 0)
                matrice_pari = 0;
            indice++;
        }
    }
    printf("\n\nOra la stampa della matrice inserita: \n\n");
    for (int i = 0; i<M; i++){
        for (int j = 0; j<M; j++){
            printf("%d\t",matrice[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrice Pari? %d\n",matrice_pari);

}