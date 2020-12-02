/*
Data una matrice 4x4 chiamiamo k-sequenza una sequenza di valori tutti uguali a k 
consecutivi sulla riga che si può anche estendere a più righe

Chiedere la matrice 
Chiedere k 
Trovare la sequenza della prima k sequenza

3 5 2 4 
4 4 4 4
4 4 3 0
0 4 4 2

in questo caso con k = 3 la prima k sequenza è uguale a 1, allo stesso modo con 5 e 2;
nel caso in cui sia 4, la prima k sequenza sarà 10
*/

#include <stdio.h>
#define N 4 

void main(){
    int m[N][N]; 
    int count = 0; 
    int k; 

    printf("Inserire k: "); 
    scanf("%d",&k);

    //acquisizione
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            scanf("\n%d", &m[i][j]);
        }
    }

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (count == 0){
                if (m[i][j] == k){
                    count ++;
                }
            }else{
                if (m[i][j] == k){
                    count ++;
                }else{
                    i = N; 
                    j = N;
                }
            }
        }
    }

    printf("La k sequenza è lunga %d", count);
}

