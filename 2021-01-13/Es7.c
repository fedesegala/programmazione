/*
Scrivere un sottoprogramma C che riceve come
parametri due matrici quadrate 4x4 di numeri interi,
chiamate m1 e m2. Il sottoprogramma calcola e
restituisce al chiamante il numero di volte che il valore
m1[i][j]=m2[i][j]
Esempio: Date in ingresso le due matrici sotto il
sottoprogramma restituirà il valore 4.
9 4 9 2    1 2 3 4
3 4 6 8    3 4 1 1
5 2 3 4    1 1 7 4
3 4 5 2    3 6 7 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4


int count_uguaglianze(int m1[N][N], int m2[N][N]);

int main(){
    int m1[N][N], m2[N][N];

    srand(time(0));

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            m1[i][j] = rand() % (31 + 10) -10;
            printf("%d-",m1[i][j]);
            m2[i][j] = rand() % (31 + 10) -10;
            printf("%d\n",m2[i][j]);
        }
    }

    int uguaglianze = count_uguaglianze(m1,m2);

    printf("%d\n",uguaglianze);
}

int count_uguaglianze(int m1[N][N], int m2[N][N]){
    int cnt = 0;
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (m1[i][j] == m2[i][j])
                cnt++;
        }
    }
    return cnt;
}