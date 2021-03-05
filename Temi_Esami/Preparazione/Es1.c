/*
Si	scriva	una	funzione	rotateright che	riceve	un	array	di	interi	
e	la	sua	lunghezza	e	modifica	
l’array	spostando	i	suoi	elementi	di	una	posizione	a	
destra	(cioè verso	la	fine	dell’array);	
l’elemento	che	esce	da	destra	deve	rientrare	da	sinistra.	
Scrivere	anche	il	main	se	si	vuole	
testare	il	programma
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void rotate_right (int [N]);

int main (){
    int array[N];
    
    srand(time(0));

    for (int i = 0; i<N; i++){
        array[i] = rand() % 101 + 10;
    }

    for (int i = 0; i<N; i++){
        printf("%d  ",array[i]);
    }

    printf("\n");
    
    rotate_right(array);

    for (int i = 0; i<N; i++){
        printf("%d  ",array[i]);
    }
}

void rotate_right(int array[N]){
    int da_sostituire = array[0];
    for (int i = 1; i<N; i++){
        int prossimo = array[i];
        array[i] = da_sostituire;
        da_sostituire = prossimo;
    }
    array[0] = da_sostituire;
}