/*
Scrivere sottoprogramma conta che preso come
parametro un array di caratteri e la sua dimensione,
conta quante vocali minuscole sono presenti nell’array
e restituisce il valore al chiamante. Il main chiede in
ingresso all’utente un array di 10 caratteri,
richiamando il sottoprogramma conta stampa il
numero di vocali nell’array
*/

#include <stdio.h>
#define N 10

int conta(char [], int l);
int main(){
    char c [N];
    for (int i = 0; i<N; i++){
        scanf("%c\n",&c[i]);
    }
    int vocali = conta(c,4);
    printf("%d\n",vocali);
}
int conta(char arr[], int l){
    int cnt = 0;
    for (int i = 0; i<l; i++){
        if(arr[i] == 'a' || arr[i] == 'A'
           || arr[i] == 'e' || arr[i] == 'E'
           || arr[i] == 'i' || arr[i] == 'I'
           || arr[i] == 'o' || arr[i] == 'O'
           || arr[i] == 'u' || arr[i] == 'U')
            cnt++;
    }
    return cnt;
}