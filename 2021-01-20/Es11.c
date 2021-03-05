/*
Si vuole realizzare un programma che permetta di giocare al gioco del 15. In
tale gioco, una scacchiera 4x4 contiene 15 pezzi (numerati da 1 a 15) ed una
casella vuota (rappresentata da uno 0). Il giocatore ad ogni mossa può
spostare uno dei pezzi adiacenti alla casella vuota nella casella vuota stessa.
Le mosse sono specificate indicando il numero del pezzo da spostare e il gioco
continua fino a quando tutti i numeri non compaiono nell’ordine numerico
corretto (crescente, con la casella vuota nell’angolo in basso a destra). Nel
seguente esempio:
le mosse possibili sono: 2, 1, 7, 3. Se il giocatore sceglie la mossa 3, le mosse
possibili diventano: 3, 10, 15, 14. Nella risoluzione dell’esercizio l’inserimento
può essere forzato in fase di inizializzazione della matrice (ad esempio,
int gioco[N][N]={{8,5,2,4},{11,1,0,7},{12,10,3,15},{9,13,14,6}};)
Si implementino le seguenti funzioni:
a) int valida (int gioco[N][N], int mossa); che riceve la scacchiera e una mossa e
restituisce 1 se la mossa èvalida, 0 altrimenti.
b) void muovi (int gioco[N][N], int mossa); che riceve la scacchiera e una mossa
e aggiorna la scacchiera in base alla mossa effettuata.
c) int risolto (int gioco[N][N]); che riceve la scacchiera e restituisce 1 se il gioco
è stato risolto, 0 altrimenti.
d) void stampa (int gioco[N][N]); che riceve la scacchiera e la stampa a video.
*/

#include <stdio.h> 
#define N 4 

int valida (int gioco [N][N], int mossa);
void muovi (int gioco[N][N], int mossa);
int risolto (int gioco[N][N]);
void stampa(int gioco[N][N]);

int abs (int n);

int main(){
    int flag = 0;
    int scacchiera [N][N] = {{8,5,2,4},{11,1,0,7},{12,10,3,15},{9,13,14,6}};;

    stampa(scacchiera);

    while (!flag){
        int mossa;
        printf("Inserire il numero corrispondente al quadrato che si vuole spostare: ");
        do{
            scanf("%d",&mossa);
        }while(!valida(scacchiera,mossa));

        muovi(scacchiera,mossa);
        stampa(scacchiera);

        if(risolto(scacchiera)){
            flag = 1;
            printf("\nComplimenti, HAI VINTO!!");
        }
    }
}

int valida (int gioco[N][N], int mossa){
    int riga_0, colonna_0, riga_mossa, colonna_mossa; 
    //cerco la posizione del numero dato in input e dello 0
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (gioco[i][j] == 0){
                riga_0 = i; 
                colonna_0 = j;
            }else if (gioco[i][j] == mossa){
                riga_mossa = i;
                colonna_mossa = j;
            } 
        }
    }

    //controllo se il numero in input è valido
    if (abs(riga_mossa - riga_0) == 1){
        if (abs(colonna_mossa - colonna_0) == 0){
            return 1;
        }
    }else if(abs(riga_mossa - riga_0) == 0){
        if(abs(colonna_mossa - colonna_0) == 1){
            return 1;
        }
    }

    return 0;
    
}

void muovi (int gioco[N][N], int mossa){
    int riga_0, colonna_0, riga_mossa, colonna_mossa; 
    //cerco la posizione del numero dato in input e dello 0
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (gioco[i][j] == 0){
                riga_0 = i; 
                colonna_0 = j;
            }else if (gioco[i][j] == mossa){
                riga_mossa = i;
                colonna_mossa = j;
            } 
        }
    }


    gioco[riga_0][colonna_0] = mossa;
    gioco[riga_mossa][colonna_mossa] = 0;

}

int risolto (int gioco[N][N]){
    int indice = 1;
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (indice == gioco[i][j]){
                indice ++;
                printf("%d",indice);
            }    
        }
    }

    if (indice == N*N)
        return 1; 
    else return 0;
}

void stampa (int gioco[N][N]){
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (gioco[i][j] != 0){
                printf("%d\t",gioco[i][j]);
            }else{
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int abs (int n){
    if (n<0)
        return -n;
    else
        return n;
}

