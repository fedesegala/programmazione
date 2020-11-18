/*
Creare un programma che prende in input una sequenza di numeri interi lunga al massimo 100 caratteri che termini in 0
il programma crei un array eliminando tutti i numeri duplicati; 
successivamente stampi il numeri di valori distinti presenti all'interno del secondo array
*/

#include <stdio.h>
#define MAXLENGTH 100

void main(){
    int input[MAXLENGTH] = {0};
    int output[MAXLENGTH] = {0};
    int count = 0;

    //prendo input da tastiera
    for (int i = 0; i<MAXLENGTH && input[i-1] != 0; i++){
        printf("Inserire un intero: ");
        scanf("%d",&input[i]);
    }

    //creo il vettore output
    /*
        scorro i valori del primo vettore, per ogni valore controllo che non 
        sia già presente nel secondo (significa che quella è la prima occorrenza)
        ed in quel caso lo aggiungo al secondo vettore
        Variante: creare un array composto dei soli valori che nella prima sequenza non ammettono duplicati
    */
    for (int i = 0; i<MAXLENGTH; i++){
        int presente = 0;   //variabile flag che assume valore 1 se nel secondo vettore c'è un'occorrenza del valore che sto cercando
        if (i==0){
            output[i] = input[i];   //il primo elemento del primo array non è sicuramente duplicato
        }else{
            for (int j = 0; j<MAXLENGTH; j++){   //scorro il secondo array
                if (input[i] == output[j]){   //se trovo il valore che cercavo imposto presente a 1 ed esco dal ciclo di scorrimento
                    presente = 1;
                    j = MAXLENGTH+1;
                }
            }
            if (!presente){   //se il flag è ancora falso significa che il valore non è già presente e lo posso aggiungere al secondo vettore
                output[i] = input[i];
            }
        }
    }

    //Conto quali valori non hanno più di un'occorrenza nel vettore iniziale
    for (int i = 0; i<MAXLENGTH; i++){  //scorro l'array di partenza
        int trovato = 0;    //variabile flag
        for (int j = 0; j<MAXLENGTH; j++){  //scorro di nuovo il primo array e cerco occorrenze dello valore in i 
            if (i != j && input[i] == input[j])     // se i e j sono diverse e il valori in i e j sono uguali => duplicato presente
                trovato = 1;
        }
        if (!trovato)   //se dopo il check il valore flag è ancora falso significa che quel dato valore non è duplicato e posso incrementare il counter
            count++;
    }

    //output
    printf("I valori non duplicati sono: %d\n",count);

    for (int i = 0; i<MAXLENGTH; i++){
        if(output[i] != 0)
            printf("%d ",output[i]);
    }
}