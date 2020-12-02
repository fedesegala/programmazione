/*
Prodotto di polinomi 
Mi interesserà il coefficiente di ogni termine.
*/

#include <stdio.h>
#define MAX 8

void main(){
    int g1, g2, g3; //grado del polinomio
    int p1[MAX+1];  //lunghezza = grado, il +1 è per il termine noto 
    int p2[MAX+1];
    int p3[MAX*2+1] = 0;   //prodotto, il grado sarà MAX + MAX

    //acquisisco i due gradi e calcolo il terzo
    scanf("%d",&g1);
    scanf("%d",&g2);
    g3 = g1+g2;

    //acquisisco i due array
    for (int i = 0; i<=g1; i++){
        scanf("%d",&p1[i]);
    }
    for (int i = 0; i<=g2; i++){
        scanf("%d",&p2[i]);
    }
}