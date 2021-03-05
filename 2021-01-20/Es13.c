/*
Data una matrice NXN (con N=9) utilizzata per una semplificazione del
gioco Sudoku. Si scriva un programma C in grado di:
○ Riempire la matrice da tastiera. In ogni cella della matrice dovrà
comparire soltanto un numero appartenente all’intervallo [1,9] (si
devono rifiutare i valori non appartenenti all’intervallo). Nessun
altro vincolo deve essere rispettato in fase di inizializzazione.
○ Stampare la matrice a video.
○ Chiedere all’utente l’inserimento da tastiera di un indice di riga r e
un indice di colonna c (rifiutando per entrambi eventuali valori
non appartenenti all’insieme {0,3,6}).
○ Verificare se nel quadrato di dimensione 3X3 e origine nel punto
(r,c), ogni valore dell’intervallo [1,9] compare esattamente 1 volta.
Stampare un opportuno messaggio a video.
Ad esempio, se l’utente ha inizializzato la matrice mostrata nel
prossimo lucido e inserisce le coordinate (0,3) (r=0, c=3), nella
sottomatrice di dimensione 3X3 evidenziata in grigio, ogni valore
dell’intervallo [1,9] compare esattamente 1 volta. Il programma dovrà
stampare a video un messaggio del tipo “Proprietà verificata”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 9 

void inizializza (int matrice[N][N]);
int verifica (int matrice[N][N], int, int);

int main(){
    int matrice[N][N];
    int r,c; 

    inizializza(matrice); 

    printf("Inserire r e c (0,3 o 9): ");
    scanf("%d",&r);
    scanf("%d",&c);
   
    printf("Ciao");
    printf("\n");

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("%d  ",matrice[i][j]);
        }
        printf("\n");
    }

    printf("Proprietà verificata: %d",verifica(matrice,r,c));

}

void inizializza (int matrice[N][N]){
    srand(time(0));

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            matrice[i][j] = rand() % (10 -1) + 1; 
        }
    }
}

int verifica (int matrice[N][N], int r, int c){
    int verifica [9] = {0};
    for (int i = r; i<r+3; i++){
        for (int j = c; j<c+3; j++){
            verifica[matrice[i][j]] ++;
        } 
    }

    for (int i = 0; i<9; i++){
        if (verifica[i] == 0)
            return 0;
    }

    return 1;
}
