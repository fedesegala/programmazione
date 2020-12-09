#include <stdio.h>
int fattoriale(int n);

void main()
{
    int i = fattoriale(3);
    printf("%d",i);
}

int fattoriale(int n)
{
    int prodotto = 1; 
    for (int i = n; i>0; i--)
    {
        prodotto *= i;
    }

    return (prodotto);
}