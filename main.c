#include <stdio.h>
#include <stdlib.h>

void affiche_vecteur(int* tab,int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        printf("Table[%d] : %d\t",i,*(tab+i));
    }
}

int** alloueMatricePascal(int dimension)
{
    int i,j;
    int** matrice = malloc(dimension*sizeof(int*));
    for (i=0;i<dimension;i++)
    {
        matrice[i]= malloc(i*sizeof(int));
    }
    return matrice;
}
int** remplitMatricePascal(int dimension)
{
     int i,j;
     int** matrice = alloueMatricePascal(dimension);
     for (i=0;i<dimension;i++)
     {
            matrice[i][0]=1;
            matrice[i][i]=1;
     }
     for (i=2;i<dimension;i++)
     {
        for(j=1;j<i;j++)
        {
            *(*(matrice+i)+j)= *(*(matrice+(i-1))+j-1)+*(*(matrice+(i-1))+j);
        }
    }
     return matrice;
}
void aﬃcheMatricePascal(int** matrice,int dimension)
{
    int i;
    for(i=0;i<dimension;i++)
        aﬃche_vecteur(matrice[i],i+1);
    printf("\n");
}
int main()
{

    return 0;
}
