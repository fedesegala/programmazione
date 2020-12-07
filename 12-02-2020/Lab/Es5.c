/*
In un concorso di bruttezza, n giudici esprimono 
il loro giudizio su m candidati. Il giudizio è un 
valore numerico tra 0 e 5 (più alto il voto più
brutto il candiato). I risultati sono organizzati in 
una matrice int R[N][M]

Si scriva un programma in linguaggio C per determinare
il candidato più brutto ed il giudice più cattivo 
(ovvero il giudice che attribuisce i più alti voti di bruttezza)
*/

#include <stdio.h>
#define N 3 //giudici 
#define M 3 //candidati

void main(){
    int risultati[N][M] = { //matrice con i risultati
        {0,3,4},        
        {1,4,5},
        {2,3,4}
    };
    int risultati_trasposta[M][N];  //matrice che ha su ogni riga i voti dati dal singolo giudice
    float media_giudici[N] = {0};   //media voti assegnati dai giudici
    float media_candidati[M] = {0}; //media voti ricevuti dai candidati
    int giudice;    //giudice più cattivo
    int candidato;  //candidato più brutto

    //media voto per ogni candidatos
    for (int i = 0; i<N; i++){
        int somma = 0;
        for (int j = 0; j<M; j++){
            somma += risultati[i][j]; 
            if (j == M-1){
                media_candidati[i] = (float)somma/M;
            }
        }
    }

    //calcolo la matrice trasposta
    for (int i = 0; i<N; i++){
        for (int j = 0; j<M; j++){
            risultati_trasposta[i][j] = risultati[j][i];
        }
    }

    //media voti per ogni giudice
    for (int i = 0; i<M; i++){
        int somma = 0;
        for (int j = 0; j<N; j++){
            somma += risultati_trasposta[i][j]; 
            if (j == N-1){
                media_giudici[i] = (float)somma/M;
            }
        }
    }

    giudice = media_giudici[0];
    for (int i = 1; i<N; i++){
        if (giudice < media_giudici[i]){
            giudice = i;
        }
    }

    candidato = media_candidati[0];
    for (int i = 1; i<N; i++){
        if (giudice < media_candidati[i]){
            giudice = i;
        }
    }

    printf("Il giudice più cattivo è il numero%d", giudice+1);
    printf("\nIl candidato più brutto è il numero %d\n", candidato+1);

}