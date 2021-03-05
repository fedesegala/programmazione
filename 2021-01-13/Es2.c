#include <stdio.h>
#define N 10 

void leggi(int array[N]);
float media(int array[N]);
int moda(int array[N]);
float mediana(int array[N]);
void ordina(int array[N]);

void main(){
    int array[N];

    leggi(array);
    printf("\nLa media dei voti inseriti è %.3f",media(array));
    printf("\nLa moda è %d",moda(array));
    printf("\nLa mediana è %.3f\n",mediana(array));
}

void leggi(int array[N]){
    for (int i = 0; i<N; i++){
        do{
            printf("%d Inserire un intero non negativo tra 0 e 10: ",i+1);
            scanf("%d",&array[i]);
        }while(array[i] < 0 || array[i] > 10);
    }
}
float media(int array[N]){
    int somma = 0;
    for (int i = 0; i<N; i++){
        somma+=array[i];
    }
    return ((float)somma/N);
}
int moda(int array[N]){
    int frequenze[N+1] = {0};
    for (int i = 0; i<N; i++){
        frequenze[array[i]] ++;
    }
    int key=0;
    int max=array[key]; 
    for (int i = 0; i<N; i++){
        if (max<frequenze[i]){
            key = i; 
            max=array[key];
        }
    }
    return max;
}
void ordina(int array[N]){
    int temp;
    int i,j;
    for (i = 0; i<N; i++){
        for (j = 0; j<N; j++){
            if (array[i] < array[j] && j<i){
                temp = array[j]; 
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}
float mediana(int array[N]){
    ordina(array);
    /*for(int i = 0; i<N; i++){
        printf("%d\t",array[i]);
    }*/
    if (N%2==0){
        int pos = N/2;
        int n1 = array[pos];
        int n2 = array[pos-1];
        return ((float)(n1+n2)/2);
    }else{
        return array[N/2];
    }
}