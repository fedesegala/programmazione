/*
Scrivere un programma che chiede all'utente di riempire una matrice quadrata 5*5 di caratteri. 
Il programma individua il carattere che compare più frequentemente e lo mostra a schermo (si ipotizzi che sia sempre unico).
Inoltre il programma, visualizza il contenuto della matrice, mostrando un asterisco al posto dei caratteri uguali a quello individuato
*/

#include <stdio.h>
#define N 5

void main(){
    char matrice[N][N];
    int indice = 1;
    for (int righe = 0; righe<N; righe++){
        for (int colonne = 0; colonne<N; colonne++){
            printf("%d Inserire uno dei valori della matrice: ",indice);
            scanf("\n%c",&matrice[righe][colonne]);
            indice++;
        }
    }
    
    char chiave;
    int occorrenze = 0;

    for (int righe = 0; righe<N; righe++){
        for (int colonne = 0; colonne<N; colonne++){
            char cerca = matrice[righe][colonne];
            int occorrenze_1 = 1; 
            for (int righe_1 = 0; righe_1<N; righe_1++){
                for (int colonne_1 = 0; colonne_1<N; colonne_1++){
                    if (righe_1 != righe && colonne_1 != colonne && matrice[righe_1][colonne_1] == cerca){
                        occorrenze_1++;
                    }
                }
            }

            if (occorrenze_1 > occorrenze){
                chiave = cerca;
                occorrenze = occorrenze_1;
            }
        }
    }

    printf("\n\nIl carattere più frequente è: %c\nOra il programma stamperà la matrice con * al posto del carattere più frequente:\n\n",chiave); 
    for (int righe = 0; righe<N; righe++){
        for (int colonne = 0; colonne<N; colonne++){
            if (matrice[righe][colonne] == chiave){
                printf("*\t");
            }else{
                printf("%c\t",matrice[righe][colonne]);
            }
        }
        printf("\n");
    }
}