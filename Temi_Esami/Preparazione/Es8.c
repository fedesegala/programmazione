/*
Data la matrice m quadrata di 100x100 si codifichi un programma che
- inizializzi il contenuto con un valore = i*j + n_matricola costante
- richieda all'utente un numero compreso tra 0 e 99, forzando la correttezza dell'input
- per ogni colonna con indice minore del numero, calcolare il valore massimo
- stampare a video il minimo tra i valori memorizzati al punto precedente. 
*/

#include <stdio.h>

#define N 100
#define MATRICOLA 5

int main (){
    int m[N][N];
    int valore_utente; 

    //inizializzazione matrice
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            m[i][j] = i*j + MATRICOLA; 
        }
    }

    //input del valore da parte dell'utente 
    printf("Inserire un numero tra 0 e %d: ",N-1);
    do {
        scanf("%d",&valore_utente);
    }while (valore_utente < 0 || valore_utente >= N);

    int minimo_massimo;
    int flag = 1;
    for (int i = 0; i<N; i++){
        int max = m[i][0];
        for (int j = 0; j<valore_utente; j++){
            if (m[i][j] > max)
                max = m[i][j];
        }
        if (flag){
            minimo_massimo = max;
            flag = 0;
        }else{
            if (minimo_massimo > max){
                minimo_massimo = max;
            }
        }
    }

    //stampa a video dell'intera matrice 
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("Il minimo massimo è: %d\n",minimo_massimo);

}