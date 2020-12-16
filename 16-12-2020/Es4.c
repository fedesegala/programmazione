#include <stdio.h>
#define N 10 

//prototipi dei sottoprogrammi
void input_array(int [], int);
void array_abs(int [], int);
int pari(int [], int);
void stampa(int [], int);


void main(){
    int array [N] = {0};

    input_array (array, N); //il nome che passo è un puntatore alla prima cella di array[N] dichiarato nel main
    
    stampa (array, N);
    
    array_abs (array, N);
    
    stampa (array, N);
}

void input_array(int array [], int lunghezza){  //definizione e dichiarazione dei parametri formali
    for (int i = 0; i<lunghezza; i++){
        printf("Inserire un valore nell'array: ");
        scanf("%d",&array[i]);
    }
}

void array_abs (int array [], int lunghezza){   //definizione e dichiarazione parametri formali
    for (int i = 0; i<lunghezza; i++){
        array[i] = (array[i] >= 0) ? array[i] : -array[i];
    }
}

void stampa (int array[], int lunghezza){
    printf("\n");
    for (int i = 0; i<lunghezza; i++){
        printf("%d  ",array[i]);
    }
}

