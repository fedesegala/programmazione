/*
Scrivere un programma C che data una matrice int M[D1][D2] ed un
valore intero x, calcoli quante volte x occorre in M
*/

#include <stdio.h>
#define D1 4
#define D2 3 

void main(){
    int key; 
    int count = 0; 
    int matrix[D1][D2] = {{1,4,78},{45,8,9},{15,4,9},{4,8,6}};

    //input
    printf("Inserire un valore di cui contare le occorrenza in una matrice: ");
    scanf("%d",&key);

    for (int i = 0; i<D1; i++){
        for (int j = 0; j<D2; j++){
            if (matrix[i][j] == key)
                count++;
        }
    }

    printf("Ci sono %d occorrenze del valore inserito all'interno della matrice.\n",count);

}