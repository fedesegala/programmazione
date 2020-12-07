/*
Scrivere un programma C (matricola_lab01.c, sostituendo "matricola" con il proprio numero di matricola universitaria) per calcolare la media,
 il massimo ed il minimo di una sequenza di voti inseriti dall'utente.

I valori ammessi devono essere maggiori o uguali a 18 e minori o uguali a 30. L'inserimento dei voti prosegue fino a quando 
l'utente non inserisce un numero non valido (cioè minore di 18 o maggiore di 30).

Subito dopo l'immissione del valore di fine inserimento vengono visualizzati media, massimo, minimo ed il numero di voti inseriti.
Qualora il primo valore inserito fosse di fine inserimento dovrà essere visualizzato un messaggio di errore, al quale, seguirà la terminazione del programma.

Si ricorda che verranno considerati nel punteggio anche la presenza di commenti e la corretta indentazione.
*/

// Author: Federico Segala (VR457144)




#include <stdio.h>

int main(){
    //declaration   
    int somma = 0;          //sommatoria dei valori inseriti
    int min = 0; 
    int max = 0;
    float media;            //somma/contatore
    int input; 
    int contatore = 0;      //variabile per il conteggio di quanti valori sono stati inseriti; 

    //stampo descrizione del programma 
    printf("Questo programma chiede una sequenza di valutazioni da 18 a 30, e ne stampa il massimo");
    printf("il minimo e la media.\nL'input dell'utente termina con l'inserimento di un valore non valido\n");

    //corpo centrale del programma
    do{
        //input utente
        printf("Inserire un valore tra 18 e 30: ");
        scanf("%d",&input);
        if (max == 0 && min == 0){          //se mi trovo al primo valore inserito dall'utente
            max = input;                    //inposto il primo valore come massimo
            min = input;                    //imposto il primo valore come minimo
            contatore++;                    //aumento di uno il contatore
            somma += input;                 //incremento la sommatoria del valore inserito 
        }else{
            if (input >= 18 && input <= 30 && max <= input){        //se l'input è valido considero di cambiare il valore di massimo
                max = input;
            }
            if (input >= 18 && input <= 30 && min >= input){        //se l'input è valido considero di cambiare il valore di minimo
                min = input;
            }
            if(input >= 18 && input <= 30) {                        //se l'input è valido modifico il valore della sommatoria dei voti
                somma += input;                                     //con la quale calcolerò poi la media
            contatore ++;                                           //assieme alla sommatoria incremento il numero di valori inseriti
            }
        }
        
    }while(input >= 18 && input <= 30);
    //uscito dal ciclo di input calcolo la media dei voti
    media = (float)somma / contatore; 

    //Caso errore: questo può avvenire solo nella prima selezione, ovvero al primo input dell'utente
    if(max > 30 || max <18){
        printf("ERRORE: è stato inserito come primo valore della sequenza un valore non ammesso\n");
        return 0;
    }

    //output
    printf("\nIl massimo voto tra quelli inseriti è: %d\n", max);
    printf("Il minimo voto tra quelli inseriti è: %d\n", min);
    printf("La media tra le valutazioni inserite è: %.3f\n", media);
}

/*
NOTA BENE: 
Se non avessi voluto utilizzare il return 0: 
if (max > 30 || max < 18){
    printf ("ERRORE";)
}else{
    printf di media, minimo e massimo
}

Ho utilizzato il return 0 soltanto per avere un codice più pulito
*/