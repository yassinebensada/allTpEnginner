#include <stdio.h>
#include <stdlib.h>

int* alloue_vecteur(int length,int value)
{
    int i;
    int* vect = malloc(length*sizeof(int));
    for(i=0;i<length;i++)
   {
       *(vect+i)=value;
   }
   return vect ;
}
int** alloue_matrice(int ligne,int column,int value)
{
    int i,j;
    int** matrice = malloc(ligne*sizeof(int*));
    for(i=0;i<ligne;i++)
    {
        *(matrice+i) = malloc(column*sizeof(int));
    }
    for(i=0;i<ligne;i++)
    {
        for(j=0;j<column;j++)
        {
            matrice[i][j]=value;
        }
    }
    return matrice;

}
int main()
{
    int** matrice = alloue_matrice(4,4,2);

    return 0;
}
