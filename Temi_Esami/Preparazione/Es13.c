/*
Scrivere un programma che acquisisce una sequenza di caratteri s1 terminata dal carattere # che non va
considerato. 
Si opotizzi che la sequenza sia al massimo lunga 20 caratteri e che venga memorizzata in un array. 
Nel caso in cui l'utente inserisce più caratteri gli elementi in eccesso non vengono considerati. 
Il programma costruisce una nuova sequenza s2, copiando ciascuna vocale minuscola incontrata 
Si stampi al termine S2 
*/

#include <stdio.h>

#define N 20

int main(){
    char s1[N] = {0}, s2[2*N] = {0};
    int indice = 0;
    char input;
    do {
        printf("Inserire un carattere, # per terminare: ");
        scanf("\n%c",&input);
        if (indice < N && input != '#'){
            s1[indice] = input;
            indice ++;
        }
    }while (input != '#');
    
    int indice_s2 = 0;
    for (int i = 0; i<N; i++){
        switch (s1[i]){
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u': 
                s2[indice_s2] = s1[i];
                s2[indice_s2+1] = s1[i];
                indice_s2 +=2;
                break;
            default: 
                s2[indice_s2] = s1[i];
                indice_s2++;
        }
    }

    for (int i = 0; i<2*N; i++){
        if (s2[i] != 0)
        printf("%c  ",s2[i]);
    }

    printf("\n");

}