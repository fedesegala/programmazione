/*
Scrivere un programma ceh data una matrice quadrata di dimensione 5 
verifica che in ogni riga ed in ogni colonna ci siano sempre tutti e soli
valori da 1 a 5, estremi inclusi. 
Restituisce 1 se la proprietà sussiste, 0 altrimenti
*/

#include <stdio.h>
#define D 5

int verifica(int[]);
void main(){
    int matrice[D][D] = {
        {1,2,3,4,5},
        {2,3,0,5,1},
        {3,4,5,1,2},
        {4,5,1,2,3},
        {5,1,2,3,4}
    };
    
    int prop = 1;

    int trasposta[D][D];
    for (int i = 0; i<D; i++){
        for (int j = 0; j<D; j++){
            trasposta[i][j] = matrice[i][j];
        }
    }

    for (int i = 0; i<D; i++){
        int array_righe [D];
        int array_colonne [D]; 
        for (int j = 0; j<D; j++){
            array_righe[j] = matrice[i][j];
            array_colonne[j] = trasposta[i][j];
        }
        if(!verifica(array_righe) || !verifica(array_colonne)){
            prop = 0;
            i = D+1;
        }
    }


    printf("%d\n",prop);

}

int verifica(int vettore[]){
    int check = 1;
    int controllo[D] = {0};

    for (int i = 0; i<D; i++){
        controllo[vettore[i]-1]++;
    }

    for (int i = 0; i<D; i++){
        if (controllo[i] == 0){
            check = 0;
        }
    }

    return check;
}