/*
Scrivere un programma che realizzi il gioco mastermind.
*/

#include <stdio.h>
#define ROSSO 'r'
#define VERDE 'v'
#define GIALLO 'g'
#define NERO 'n'
#define TENTATIVI 10

void main(){
    //posizioni input giocatore 1 e 2
    int pos1R, pos1G, pos1V, pos1N;
    int pos2R, pos2G, pos2V, pos2N;

    int flag = 0;
    int posR, posG, posV, posN = 0;

    //input giocatore 1
    printf("\n\nGIOCATORE1\n\n");
    for (int i=0; i<4; i++){
        char tmp;
        printf("Inserire una lettere corrispondente ai colori rosso, giallo, verde, nero: ");
        scanf("\n%c",&tmp);
        if (tmp == ROSSO){
            pos1R = i;
        }else if (tmp == VERDE){
            pos1V = i;
        }else if (tmp == GIALLO){
            pos1G = i;
        } else if (tmp == NERO){
            pos1N = i;
        }
    }

    //giocatore 2
    printf("\n\nGIOCATORE2\n\n");

    for (int i = 0; (i<TENTATIVI && !flag); i++){
        printf("TENTATIVO %d\n", i+1);
        for (int j=0; j<4; j++){
            char tmp;
            printf("Inserire una lettere corrispondente ai colori rosso, giallo, verde, nero: ");
            scanf("\n%c",&tmp);
            if (tmp == ROSSO){
                pos2R = j;
            }else if (tmp == VERDE){
                pos2V = j;
            }else if (tmp == GIALLO){
                pos2G = j;
            }else if (tmp == NERO){
                pos2N = j;
            }
        }

        if (pos1G == pos2G){
            posG = 1;
        }else{
            posG = 0;
        }

        if (pos1R == pos2R){
            posR = 1;
        }else{
            posR = 0;
        }

        if (pos1V == pos2V){
            posV = 1;
        }else{
            posV = 0;
        }

        if (pos1N == pos2N){
            posN = 1;
        }else{
            posN=0;
        }

        if (posG && posR && posV && posN){
            flag = 1;
            printf("\nIl giocatore 2 ha vinto!!!");
        }else {
            if (posG == 1){
                printf("Il giallo è nella posizione corretta\n");
            }
            if (posV == 1) {
                printf("Il verde è nella posizione corretta\n");
            }
            if (posR == 1){
                printf("Il rosso è nella posizione corretta\n");
            }
            if (posN == 1) {
                printf("Il nero è nella posizione corretta\n");
            }
            if (!posG && !posV && !posR && !posN){
                printf("Nessuna colore è al posto giusto! Ritenta! \n"); 
            }
            if (i==TENTATIVI-1 && flag==0){
                printf("\n\nGiocatore 2 ha perso\n il seguente è l'ordine coretto:\n");
                for (int i = 0; i<4; i++){
                    if (i == pos1G){
                        printf("g  ");
                    }             
                    if (i == pos1N){
                        printf("n  ");
                    }
                    if (i == pos1R){
                        printf("r  ");
                    }
                    if (i == pos1V){
                        printf("v  ");
                    }
                }
                printf("\n");
            }
        }
    }
}