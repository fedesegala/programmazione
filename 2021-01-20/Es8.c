/*
○ Scrivere un programma per la verifica dei codici ISBN10.
Un codice ISBN-10 è una sequenza numerica di 10
cifre (da 0 a 9) e, per verificarne la validità: (i) si
moltiplica ogni cifra per un peso in base alla posizione
della cifra stessa: la prima cifra per 10, la seconda per
9, la terza per 8 e cosìvia, (ii) si sommano i risultati,
(iii) la somma deve essere un multiplo intero di 11. Ad
esempio:
○ ISBN: 0078818095
0*10 + 0*9 + 7*8 + 8*7 + 8*6 + 1*5 + 8*4 + 0*3 + 9*2 +
5*1 = 220 220 èun multiplo di 11, di conseguenza il
codice ISBN èvalido
Nella risoluzione dell’esercizio si implementi la seguente
funzione: int valido (int isbn[]) che riceve in ingresso un
codice ISBN e restituisce 1 se èvalido, 0 altrimenti. 
*/

#include <stdio.h>
#define N 10
int valido (int [N]);

int main(){
    int ISBN[N];
    for (int i = 0; i<N; i++){
        printf("Inserire cifra dell'ISBN: ");
        do{
            scanf("%d",&ISBN[i]);
        } while(ISBN[i] < 0 || ISBN[i] > 9);
    }
    
    printf("validità: %d\n",valido(ISBN));
}

int valido (int ISBN [N]){
    int somma = 0, indice = 10;

    for (int i = 0; i<N; i++){
        somma += ISBN[i] * indice;
        indice--;
    }

    if (somma % 11 == 0)
        return 1;
    
    return 0;
}

