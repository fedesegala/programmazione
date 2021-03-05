/*
Si scriva una funzione partiziona che riceve un array di
interi di dimensione 10 e lo modifica in modo che tutti i
numeri dispari precedano i numeri pari.
Si scriva quindi una funzione main che testa la funzione
chiedendo all’utente i valori per riempire un array,
passa tale array alla funzione partizione e lo stampa
dopo la sua esecuzione.
Verrà penalizzata la soluzione che utilizza un
array di supporto per raggiungere la soluzione.
Esempio:
$ ./a.out Inserire 10 valori interi: 59 26 53 22 31 41 80
87 78 37
Ecco i valori raggruppati: 53 59 41 31 87 37 22 26 80 78
*/

#include <stdio.h>
#define N 10 

void partiziona (int [N]);

int main(){
    int array[N];

    for (int i = 0; i<N; i++){
        printf("Inserire un numero: ");
        scanf("%d",&array[i]);
    }

    partiziona (array);

    for (int i = 0; i<N; i++){
        printf("%d  ",array[i]);
    }

    printf("\n");
}

void partiziona(int array[N]){
    for (int i = 0; i<N; i++){
        for (int j = i; j<N-1; j++){
            if (array[j] % 2 == 0 && array[j+1] % 2 != 0){
                int tmp = array[j+1]; 
                array[j+1] = array[j]; 
                array[j] = tmp;
            }
        }
    }
}