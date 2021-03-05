/*
una polilinea può essere definita da una serie di punti che rappresentano gli estremi dei segmenti che
la compongono. 
I punti del piano possono essere definiti utilizzando due vettori monodimensionali di uguale dimensione
il primo per le x, il secondo per le y
*/

#include <stdio.h>
#include <math.h>

double length (double x[], double y[], int size);
int count_in_quadrant (double[], double[], int, int);

int main(){
double xs[] = {0, -1, 2, 1}; // Ascisse
double ys[] = {1, 0, 1, 0}; // Ordinate
int size = 4;
printf("Lunghezza della polilinea: %lf\n", length(xs, ys, size));
printf("Numero di punti nel primo quadrante: %i\n", count_in_quadrant(xs, ys, size, 1));
return 0;
}

double length(double x[], double y[], int size){
    double length = 0;
    for (int i = 0; i<size-1; i++){
        length += sqrt(pow(x[i] - x[i+1],2)+pow(y[i] - y[i+1],2));
    }

    return length;
}

int count_in_quadrant (double x[], double y[], int size, int quadrante){
    int count = 0; 
    for (int i = 0; i<size; i++) {
        switch (quadrante){
            case 1:
                if (x[i] > 0)
                    if (y[i] > 0)
                        count ++;
                break;
            case 2: 
                if (x[i] < 0)
                    if (y[i] > 0)
                        count ++;
                break;
            case 3:
                if (x[i] < 0)
                        if (y[i] < 0)
                        count ++;
                break;
            case 4:
                if (x[i] > 0)
                    if (y[i] < 0)
                        count ++;
                break; 
        }
    }

    return count;
}
