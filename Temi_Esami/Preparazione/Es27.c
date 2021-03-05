#include <stdio.h>

#define N 30



int main (){
    char a1[N];
    char a2[N];
    int size_1 = 0;
    int size_2 = 0;

    for (int i = 0; i<N; i++){
        printf("Inserire un carattere di a1, # per terminare: ");
        char tmp; 
        scanf("\n%c",&tmp);
        if (tmp != '#'){
            a1[i] = tmp;
            size_1++;
        }else{
            i = N;
        }
    }

    for (int i = 0; i<N; i++){
        printf("Inserire un carattere di a2, # per terminare: ");
        char tmp; 
        scanf("\n%c",&tmp);
        if (tmp != '#'){
            a2[i] = tmp;
            size_2++;
        }else{
            i = N;
        }
    }

    printf("%d-%d",size_1,size_2);

    int sotto_array = 1;
    

    if (size_2 > size_1){
        sotto_array = 0;
    }else{  
        char partenza = a2[0];
        int indice_1; 
        for (int i = 0; i<size_1; i++){
            if (a1[i] == partenza){
                indice_1 = i;
                i = N;
            }
            if (i == size_1-1){
                sotto_array = 0;
            }
        }

        printf("%c\n",partenza);
        printf("%d\n",indice_1);

        int i = 0;
        if (i + size_2 > size_1 - indice_1){
            sotto_array = 0;
        }else{
            while (i<size_2 && sotto_array){
                if (a2[i] != a1[i+indice_1]){
                    sotto_array = 0;
                }
                i++;
            }
        }
        
    }

    printf("%d\n",sotto_array);
}
