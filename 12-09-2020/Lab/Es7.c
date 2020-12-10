/*
Scrivere un programma C che chiede all’utente un numero intero n.
Il programma inizializza il contenuto della matrice seguendo il seguente schema:

    n   n+1 n+2 n+3 n+4
    n+1 n+1 n+2 n+3 n+4
    n+2 n+2 n+2 n+3 n+4
    n+3 n+3 n+3 n+3 n+4
    n+4 n+4 n+4 n+4 n+4

Per esempio se n=5, il programma popolerà la matrice come segue:

    5 6 7 8 9io 
    6 6 7 8 9
    7 7 7 8 9
    8 8 8 8 9
    9 9 9 9 9
*/

#include <stdio.h>
#define M 5

void main(){
    int matrice[M][M]; 
    int n; 

    printf("Inserire un numero: ");
    scanf("%d",&n);

    for (int i = 0; i<M; i++){
        for (int j = 0; j<M; j++){
            int valore_dominante;
            if (i<j)
                valore_dominante = j;
            else
                valore_dominante = i;
            
            matrice[i][j]  = n+valore_dominante;

            printf("%d\t",matrice[i][j]);
        }
        printf("\n");
    }
}