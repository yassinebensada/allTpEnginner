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
void affiche_matrice(int** mat,int line,int column)
{
    int i,j;
    for(i=0;i<line;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Table[%d][%d] : %d\n",i,j,*(*(mat+i)+j));
        }

    }
}
int main()
{
     int i,j;
     int ligne,colum;
     printf("Lignes ? : ");
     scanf("%d",&ligne);
     printf("Column ? : ");
     scanf("%d",&colum);
     int** matrice = malloc(ligne*sizeof(int*));
     for (i=0;i<ligne;i++)
        matrice[i]= malloc(colum*sizeof(int));
     for (i=0;i<ligne;i++)
        for(j=0;j<colum;j++)
            matrice[i][j]=j*i;
     affiche_matrice(matrice,ligne,colum);
    return 0;
}
