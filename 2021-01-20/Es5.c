/*
Si realizzi un programma in linguaggio C che
legga un numero intero N e visualizzi un quadrato
di * (fino alla diagonale principale inclusa) e +
(sopra la diagonale principale) come segue
(esempio con N = 5):
*++++
**+++
***++
****+
*****
*/

#include <stdio.h> 

int main(){
    int n; 
    
    //input e validazione
    printf("Inserire un intero N: "); 
    do {
        scanf("%d",&n);
    }while (n < 1);

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (i>=j){
                printf("* ");
            }else{
                printf("+ ");
            }
        }
        printf("\n");
    }
}