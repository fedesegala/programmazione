/*
I punti del piano cartesiano possono essere definiti utilizzando due vettori monodimensionali di uguale dimensione, 
il primo per memorizzare i valori delle ascisse e il secondo per i corrispondenti valori delle ordinate. Si
completi il file ESA 11022019 A 3.c in modo tale che il seguente programma (gi`a presente nello file stub):
int main(){
double xs[] = {0, -1.1, 2, 0.9}; // Ascisse
double ys[] = {0.5, 0, 1, 0}; // Ordinate
int size = 4;
double radius = 1;
print(xs, ys, size);
printf("Numero di punti dentro il cerchio di raggio %.2lf centrato nell’origine: %i\n",
radius, count_in(xs, ys, size, radius));
return 0;
}
produca il seguente risultato:
(0.00, 0.50)
(-1.10, 0.00)
(2.00, 1.00)
(0.90, 0.00)
Numero di punti dentro il cerchio di raggio 1.00 centrato nell’origine: 2
*/

#include <stdio.h>
#include <math.h>

int main(){
double xs[] = {0, -1.1, 2, 0.9}; // Ascisse
double ys[] = {0.5, 0, 1, 0}; // Ordinate
int size = 4;
double radius = 1;
print(xs, ys, size);
printf("Numero di punti dentro il cerchio di raggio %.2lf centrato nell’origine: %i\n",
radius, count_in(xs, ys, size, radius));
return 0;
}
