/*
Si	completi	il	seguente	programma	scrivendo	la	funzione	quasi_max,
che	riceve	un	array	di	interi	e	la	sua	lunghezza	e	ritorna	il	quasi	massimo	dell’array,
cioè il	più grande	numero	contenuto	nell’array	che	non	sia	il	massimo.	
Per	esempio,	sotto	dovrà venire	stampato	23,	che	è	il	quasi	massimo	di	arr.	
Nota:	per	semplicità si	assuma	che	il	quasi	massimo	dell’array	esista,	
quindi	non	ci	si	preoccupi	di	gestire	i	casi	in	cui	esso	non	esiste,	per	esempio	quando	l’array	è	
vuoto	o	ha	un	solo	elemento.	Suggerimento:	definite	funzioni	ausiliarie,	se	vi	risultano	di	
aiuto.
*/

#include <stdio.h>

#include	<stdio.h>

int quasi_max (int array[], int l);
int massimo (int array[], int l);
int minimo (int array[], int l);

int	main()	{
		int	arr[]	=	{	28,	10,	7,	9,	14,	22,	23,	28,	-4,	23	};
		printf("quasi	massimo:	%d\n",	quasi_max(arr,	10));
		return	0;
}

int quasi_max (int array[], int l){
    int max = massimo (array,l);
    int min = minimo (array,l);

    for (int i = 0; i<l; i++){
        if (array[i] == max)
            array[i] = min;
    }

    return massimo (array,l);
}

int massimo (int array[], int l){
    int max = array[0];
    
    for (int i = 0; i<l; i++){
        if (array[i] > max)
            max = array[i];
    }

    return max;
}

int minimo (int array[], int l){
    int min = array[0];
    
    for (int i = 0; i<l; i++){
        if (array[i] < min)
            min = array[i];
    }

    return min;
}