// dato un numero in input si verifichi se è palindromo

#include <stdio.h>

int palindromo (int);

int main (){
    int n = 676;
    
    printf("%d\n",palindromo(n));
}

int palindromo (int n){
    int p = 1;
    
    int rev = 0;
    int rem;
    while (n > 0){
        rem = n % 10;
        rev += rev * 10 + rem;
        n /= 10;   
    }

    if (rev == n)
        return 1;
    else 
        return 0;
}