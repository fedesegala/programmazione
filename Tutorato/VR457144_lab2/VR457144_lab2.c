/*
Scrivere un programma in C per calcolare la somma di due numeri binari. Nominare il file matricola_lab02.c sostituendo "matricola" 
con il proprio numero di matricola universitaria (es. se la vostra matricola è VR123456, dovrete consegnare un singolo file nominato 
VR123456_lab02.c).

I due valori dovranno essere inseriti dall'utente. Il programma dovrà, innanzitutto, 
controllare se i due numeri inseriti siano effettivamente espressi in notazione binaria. 
Qualora i valori inseriti fossero errati dovrà essere visualizzato un messaggio di errore, al quale, 
seguirà la terminazione del programma.

Es: v1 = 100101; v2 = 111;
	  v1 = 110110; v2 = 1310; -> ERRORE!

Si dovrà, quindi, effettuare la somma dei due valori inseriti e stampare il risultato. 
La somma deve essere svolta bit a bit, dunque, non è ammessa la conversione del numero binario.

Es:
		 111 <- carry bit (riporto)
	---------
		 100101 +
				111 =
	  ---------
		  101100
*/

//Author: Segala Federico 

/*
IPOTESI DI LAVORO: 
Siccome i numeri saranno memorizzati in una struttura di tipo INT per evitare problemi di overflow, verrà richiesto l'inserimento di numeri 
con una quantità di cifre inferiore a 10 in modo che a prescindere la somma trai due valori inseriti venga corretta.
Nel caso in cui le cifre di almeno uno dei due numeri siano maggiori o uguali a 10, il programma terminerà con relativo messaggio di errore. 
*/
#include <stdio.h>

void main(){
	int n1, n2; 
	int somma = 0; 
	int max_Cifre;
	int cifre_1 = 0;
	int cifre_2 = 0;

	//input 
	printf("NOTA BENE: Il programma stampa la somma di due binari con lunghezza < 10, per evitare problemi di OVERFLOW\n\n");
	printf("Inserire il primo addendo binario: ");
	scanf("%d",&n1);

	printf("Inserire il secondo addendo binario: ");
	scanf("%d",&n2);

	//controllo la validità del primo addendo
	int validita_n1 = 1;
	int copia_n1 = n1; 
	do{
		int cifra_attuale = copia_n1 % 10;
		copia_n1 /= 10;
		if (cifra_attuale != 0 && cifra_attuale != 1){
			validita_n1 = 0;
		}
		cifre_1++;
	}while(copia_n1 != 0 && validita_n1);

	//controllo la validità del secondo addendo
	int copia_n2 = n2; 
	int validita_n2 = 1; 
	do{
		int cifra_attuale = copia_n2 % 10;
		copia_n2 /= 10;
		if (cifra_attuale != 0 && cifra_attuale != 1){
			validita_n2 = 0;
		}
		cifre_2++;
	}while(copia_n2 != 0 && validita_n2);

	//determino il numero di cifre del numero più lungo
	if (cifre_1 > cifre_2){
		max_Cifre = cifre_1;
	}else{
		max_Cifre = cifre_2;
	}

	//se i due addendi sono validi sviluppo il programma
	if (validita_n1 && validita_n2 && max_Cifre < 10){
		

		int indice = 0;	//variabile per scorrere le cifre del numero maggiore inserito
		int cin = 0;	//riporto in ingresso ai due bit da sommare
		int moltiplica_10 = 1;	//potenza del 10 in cui verrà inserito uno 0 o un 1 nel calcolo della somma
		
		//Scorro i bit componenti i due numeri
		for (; indice<max_Cifre || cin==1; indice++){
			int bit_1 = n1%10;	//bit in posizione meno significativa dell'attuale addendo 1
			int bit_2 = n2%10;	//bit in posizione meno significativa dell'attuale addendo 2

			//ora che ho i LSB posso calcolare i nuovi numero su cui ripetere le due operazioni precedenti
			n1/=10;
			n2/=10;

			//sommo i due LSB al CIN per ottenere il corrispondente della loro somma in decimale
			int bit_somma = cin + bit_1 + bit_2;
			

			//se la somma è 0, scrivo 0 e passo alla posizione 10^(indice+1)
			if (bit_somma == 0){
				cin=0;	//nessun riporto
				moltiplica_10*=10;	//mi sposto alla potenza del dieci successiva
			}

			//se la somma è 1, scrivo 1 in posizione 10^indice, e passo alla posizione 10^(indice+1)
			if (bit_somma == 1){
				cin = 0;	//nessun riporto 
				somma += 1*moltiplica_10;	//aumento la somma di uno nella posizione che vale 10^indice   
				moltiplica_10*=10;	//mi sposto alla potenza del dieci successiva
			}
			
			//se la somma è due, scrivo 0, passo alla posizione 10^(indice+1) e imposto il riporto a 1
			if (bit_somma ==2){
				cin = 1;	//riporto 1
				moltiplica_10*=10;	//mi sposto alla potenza del dieci successiva
			}

			//se la somma è 1, scrivo 1 in posizione 10^indice, e passo alla posizione 10^(indice+1), imposto il riporto a 1
			if (bit_somma == 3){
				cin = 1;	//riporto 1
				somma += 1*moltiplica_10;	//aumento la somma di uno nella posizione che vale 10^indice
				moltiplica_10*=10;
			}
		}

		//terminato il ciclo stampo la somma ottenuta
		printf("\nLa somma trai due numeri binari inseriti è: %d\n",somma);

	}else{	//se uno dei due valori non è valido stampo un messaggio di errore
		printf("\nERRORE:\n-Uno dei due valori contiene valori diversi da 0 e 1\n-Uno o entrambi i valori hanno un numero di cifre >= 10 -> OVERFLOW!\n");
	}
}