/*
-> Dati due interi voglio sapere quale è il più grande

-> Dati tre interi voglio sapere quale è il più grande
*/

#include <stdio.h> 

int f(int, int);
void main(){
    int n1, n2, n3;
    int max;

    scanf("%d%d%d",&n1,&n2,&n3);
    
    max = f(f(n1,n2),n3);

    printf("\n%d\n",max);
}

int f(int n1, int n2){
    if (n1>n2){
        return n1;
    }else{
        return n2;
    }
}
