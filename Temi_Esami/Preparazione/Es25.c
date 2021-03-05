/*
Un'azienda retribuisce i propri venditori con delle provvigioni come segue: 
ogni venditore percepisce 200 $ a settimana più il 9% delle vendite lorde concluse durante la settimana. 
Si scriva un programma che utilizzi un array di contatori per determinare quanti venditori abbiano guadagnato
una retribuzione compresa in uno dei seguenti intervalli
200-299
300-399
400-499
500-599
600-699
700-799
800-899
900-999
1000 e oltre

i guadagni dei 100 venditori devono essere casuali con un limite massimo di 20000 dollari
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_INTERVALLI 9
#define VENDITORI 100
#define STIPENDIO 200

int main (){
    int conta_intervallo[9] = {0};
    int venditori [VENDITORI];

    srand (time(NULL));

    for (int i = 0; i<VENDITORI; i++){
        venditori[i] = STIPENDIO + (rand() % 20001) * 0.09;
    }

    for (int i = 0; i<VENDITORI; i++){
        //continuo if else       
    }
}