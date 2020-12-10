/* 
Si scriva un rogramma che copi tutti i valori di una matrice int M[D1][D2] 
in un array di dimensione D1*D2 eliminando nel processo di copia tutti i duplicati negativi
*/

#include <stdio.h>
#define RIGHE 3
#define COLONNE 4 

void main()
{
   int matrice[RIGHE][COLONNE] = 
   {
       {1,3,5,-1},
       {-1,-1,5,-3},
       {-1,2,3,4}
   };

   int vettore[RIGHE*COLONNE] = {0};
   int indice = 0;

   for (int righe = 0; righe<RIGHE; righe++)
   {
       for (int colonne = 0; colonne<COLONNE; colonne++)
       {
           int cerca = matrice[righe][colonne];
           if (cerca >= 0)
           {
               vettore[indice] = cerca;
               indice++;
           } else 
           {
               int conteggio = 0;
               for (int righe1 = 0; righe1<RIGHE; righe1++)
               {
                   for (int colonne1 = 0; colonne1<COLONNE; colonne1++)
                   {
                       if (righe != righe1 && colonne != colonne1 && cerca == matrice[righe1][colonne1]){
                           conteggio++;
                       }
                   }
               }
               if (conteggio == 0)
               {
                   vettore[indice] = cerca; 
                   indice++;
               }
           }
       }
   }

   for (int i = 0; i<indice; i++)
   {
       printf("%d   ",vettore[i]);    
   }
   printf("\n");
}