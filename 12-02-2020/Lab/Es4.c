/*
Scrivere un programma che calcoli quanti elementi in una matrice occorrono almeno due volte 
*/

#include <stdio.h>
#define R 3 
#define C 3

void main(){
    int conteggio = 0;
    int m[R][C] = {
        {1,2,4},
        {3,5,6},
        {1,1,2}
    };

    int checked [R*C/2];
    
    for (int i = 0; i<R; i++){
        for (int j = 0; j<C; j++){
            int key = m[i][j]; 
            for (int k = 0; k<R; k++){
                for (int f = 0; f<C; f++){
                    if (m[k][f] == key){
                        int trovaChecked = 0;
                        for (int b = 0; b<R*C/2; b++){
                            if (checked[b] == key){
                                trovaChecked = 1;
                            }
                        }
                        if(!trovaChecked){
                            conteggio ++;
                            checked[conteggio] = m[i][j];
                        }                        
                    }
                }
            }
        }
    } 
    printf("%d",conteggio);   
}