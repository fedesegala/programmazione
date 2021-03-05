/*
Scrivere un programma che implementi quanto descritto: 
- Funzione 1: Riceve come parametro di ingresso una matrice NxN di caratteri, ne individua il carattere che compare con maggiore frequenza e lo restituisce. 
In caso di molteplici caratteri, si utilizzi il primo trovato
- Funzione 2: Riceve come parametri di ingresso un matrice NxN di caratteri e un carattere. Stamp al medesima matrice sostituendo con " " tutti i caratteri
uguali al carattere dato 
Si scriva infine un main che ricerchi il carattere che compare più frequentemente in una matrice definita dall'utente e stampa la matrice mostrando uno spazio 
al posto dei caratteri uguali a quello individuato
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 

char carattere_frequente (char matrice[][N]);
void sostituisci (char, char[][N]);

int main (){
    char m [N][N]; 

    srand(time(0));
    
    //inizializzo e stampo la matrice originale con caratteri randomici (lettere minuscole dell'alfabeto)
    printf("Matrice originale: \n");
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            m[i][j] = rand() % (122 - 97 +1) + 97;
            printf("%c\t",m[i][j]);
        }
        printf("\n");
    }

    //alternativamente a questo tipo di input
    /*
        for (int i = 0; i<N; i++){
            for (int j = 0; j<N; j++){
                printf("Inserire un carattere: ");
                scanf("\n%c",m[i][j]);
            }
        }
    */

    //calcolo il carattere più frequente
    char frequente = carattere_frequente(m);

    //calcolo la matrice elaborata
    printf("Matrice elaborata: \n");
    sostituisci (frequente,m);
}

char carattere_frequente (char matrice[N][N]){
    char c = 0; //prendo il primo trai caratteri ascii
    int occorrenze = 0; //occorrenze del carattere più frequente

    //per ogni elemnento della matrice, scorro da capo tutta la matrice, contando quante volte quell'elemento compare
    //se compare più volte dell'elemento in origine salvato, aggiorno occorrrenze e c
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            int cnt = 0;
            for (int k = 0; k<N; k++){
                for (int h = 0; h<N; h++){
                    if (matrice[k][h] == matrice[i][j]){
                        cnt ++;
                    }
                }
            }
            
            if (cnt > occorrenze){
                occorrenze = cnt; 
                c = matrice[i][j];
            }
        }
    }

    //Algoritmo Alternativo
    /*
        //ogni posizione dell'array occorrenze corrisponde ad un carattere in input e 
        //ne aggiorno il numero di occorrenze scorrendo la matrice
        char occorrenze [256] = {0};
        for (int i = 0; i<N; i++){
            for (int j = 0; j<N; j++){
                occorrente[matrice[i][j]]++;
            }
        }

        int c = 0, int max = occorrenze[0];
        for (int i = 0; i<256; i++){
            if (occorrenze[i] > max){
                c = i; 
                max = occorrenze[i];
            }
        }
        return c;
    */

    return c;
}

void sostituisci (char c, char matrice[N][N]){

    //scorro tutta la matrice
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (matrice[i][j] == c){
                //se l'elemento in posizione i,j è proprio uguale a c
                //stampo spazio
                printf(" \t");
            }else{
                //altrimenti stampo il carattere trovato
                printf("%c\t",matrice[i][j]);
            }
        }
        printf("\n");
    }
}
