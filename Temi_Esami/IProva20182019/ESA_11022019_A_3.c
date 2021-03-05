/**
 * Compilare il programma con gcc aggiungendo alla fine -lm
 */
#include <stdio.h>
#include <math.h>

/*
 * Ritorna la distanza tra due punti
 */
double distance(double xs[], double ys[], int i, int j) {
    //printf("%.2lf\n",sqrt(xs[i]*xs[i] + ys[j]*ys[j]));
    return sqrt(xs[i]*xs[i] + ys[j]*ys[j]);
}

/**
 * Restituisce il numero dei punti la cui distanza dall'origine
 * degli assi è minore o uguale al valore indicato,
 * utilizzando la funzione distance().
 */
int count_in(double xs[], double ys[], int size, double radius) {
    int count = 0;
    for (int i = 0; i < size; i++){
        if (distance(xs,ys,i,i) < radius)
            count++;
    }
    return count;
}

/**
 * Stampa la sequenza dei punti 
 */
void print(double xs[], double ys[], int size) {
    for (int i = 0; i<size; i++){
        printf("(%.2lf , %.2lf)\n",xs[i],ys[i]);
    }
}

/*
 * Program entry point
 */
int main(){
    double xs[] = {0, -1.1, 2, 0.9};  // Ascisse
    double ys[] = {0.7, 0, 1, 0};  // Ordinate
    int size = 4;
    double radius = 1;

    print(xs, ys, size);
    printf("Numero di punti dentro il cerchio di raggio %.2lf centrato nell'origine: %i\n", radius, count_in(xs, ys, size, radius));
    return 0;
}
