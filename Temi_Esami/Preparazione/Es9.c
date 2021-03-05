/*
Dato un array quitX di 365 valori interi, che rappresentano le quotazioni nell'anno solare
corrente del titolo azionario X, si codifichi un programma in grado di: 
- Inizializzare il contenuto dell'array quotX con valori letti da standard input compresi tra 0 e 100 
scartando valori fuori dall'intervallo 
- Determinare in quanti periodi dell'anno il titolo si è mantenuto costante: quante volte la medesima
quotazione si è presentata in giorni successivi 
- Salvare in un array [2] la quotazione massima e il primo giorno in cui è stata memorizzata
-stampare a video un istogramma orizzontale 
*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define N 2 
#define ANNO 365

int main (){
    int quotX[ANNO];
    int periodi_costanza = 0;
    
    srand(time(0));

    //inizializzo array con valori casuali
    for (int i = 0; i<ANNO; i++){
        quotX[i] = rand() % 101;
        //printf("%d\n",quotX[i]);
    }
    

    //conto i periodi in cui la quota si è mantenuta costante
    for (int i = 0; i<ANNO; i++){
        int key = quotX[i];
        int somma = 0;
        for (int j = i; j<ANNO; j++){
            if (quotX[j] == key)
                somma++;
            else
                j = ANNO;
        }
        if (somma > 1){
            periodi_costanza++;
            i += somma-1;
        }
    }

    //salvataggio quotazione massima
    int max = quotX[0];
    int giorno = 1;
    for (int i = 1; i<ANNO; i++){
        if (quotX[i] > max){
            max = quotX[i];
            giorno = i+1;
        }
    }

    int arr[2] = {max,giorno};

    printf("QUOTA COSTANTE: %d\nQUOTA MASSIMA: %d\nGIORNO: %d\n",periodi_costanza,arr[0],arr[1]);

    for (int i = 0; i<ANNO; i++){
        printf("giorno %d,\tquotazione %d\t: ",i+1,quotX[i]);
        for (int j = 0; j<quotX[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    
}