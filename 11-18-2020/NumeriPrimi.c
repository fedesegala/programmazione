/*
Scrivere un programma che memorizzi in un array di lunghezza 15
tutti i numeri primi < 50 e successivamente li stampi a video
*/

/*da vedere*/
#include <stdio.h>
#define LENGTH 15


void main(){
    int array [LENGTH] = {0}; //pongo tutti i valori dell'array a 0
    int indice = 0;
    int da_valutare = 1; 
    
    while (indice < LENGTH){                                //finché non ho inizializzato tutti i valori dell'array
    int primo = 1;                                          //imposto un flag che diventa falso se il numero da valutare non è primo
        if (da_valutare >= 1){
            for (int i = da_valutare-1; i>=2; i--){         //scorro tutti i numeri, partendo dal precedente del numero valutato fino a 2
                if (da_valutare%i == 0){                    //se il numero valutato è divisibile per uno dei suoi precedenti fino a 2 allora non sarà primo
                    primo = 0;  
                    i=0;                                    //esco dal ciclo for
                }
            }
        if (primo) {                                        //se il flag primo è ancora vero, salvo il valore da valutare nell'apposito indice e incremento l'indice
                array[indice] = da_valutare;
                indice++;
            }
            da_valutare++;                                  //aumento da_valutare in modo da trovare un numero primo successivo
        }
    }
    

    for (int i = 0; i<LENGTH; i++){                         //stampo l'array
        printf("%d  ",array[i]);
    }

    printf("\n");
}