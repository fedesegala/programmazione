/*
Si scriva una funzione divide che riceve tre parametri: un array original di int, un array destination di double
e la lunghezza dei due array, che si assume essere la stessa per entrambi. La funziopne deve modificare destination
in modo che ogni suo elemeto in posizione i, diventi l'elementoi di original in posizione i diviso per i+1
*/

#include <stdio.h>

void divide(int original[], double destination[], int l);

int main (){
    int original[] = {5,4,3,2,1,0};
    double destination [6];
    divide(original, destination, 6);

    for (int i = 0; i<6; i++){
        printf("%.2f  ",destination[i]);
    }

    printf("\n");
}

void divide (int original[], double destination[], int l){
    for (int i = 0; i<l; i++){
        destination[i] = ((double)original[i] / (i+1));
    }
}