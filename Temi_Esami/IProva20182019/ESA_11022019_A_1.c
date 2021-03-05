#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 ulteriori direttive di pre-processing 
*/
#define N 2
#define M 3

int main(void) {
//dichiarazioni
float Filter [M];
int Matrix [N][M];
float Result [N];

//riempio matrix secondo specifiche
srand(time(NULL));
for (int righe = 0; righe < N; righe++){
  for (int colonne = 0; colonne < M; colonne++){
    if (righe % 2 == 0){
      int casuale;
      do{
        casuale = rand() % 11;
      } while (casuale % 2 != 0);
      Matrix[righe][colonne] = casuale;
    }else{
      int casuale;
      do{
        casuale = rand() % 11;
      } while (casuale % 2 == 0);
      Matrix[righe][colonne] = casuale;
    }
  }
}

//riempio filter
for (int i = 0; i<M; i++){
  printf("Inserire un valore di filter: ");
  scanf("%f",&Filter[i]);
}
    
//stampa matrix
for (int righe = 0; righe < N; righe++){
  for (int colonne = 0; colonne < M; colonne++){
    printf("%3d",Matrix[righe][colonne]);
  }
  printf("\n");
}

for (int i = 0; i<M; i++){
  printf("%.1f  ",Filter[i]);
}

printf("\n");

//creazione result
for (int i = 0; i<N; i++){  //scorro result
  Result[i] = 0; 
  for (int righe = i; righe<=i; righe++){
    for (int colonne = 0; colonne<M; colonne++){
      Result[i] += ((Matrix[righe][colonne]) * Filter[colonne]);
      //printf("%f %f %d\n",sum,Filter[colonne],Matrix[righe][colonne]);
    }
  }
}

for (int i = 0; i<N; i++){
  printf("%.2f   ",Result[i]);
}

printf("\n");
    
  return 0;
}
