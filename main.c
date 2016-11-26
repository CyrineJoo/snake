#include <stdio.h>
#include <stdlib.h>
#define nb_lignes 4
#define nb_colonnes 10


void init_grille(char grille[nb_lignes][nb_colonnes])
{
    for(int i=0; i<nb_lignes; i++)
    {
        for (int j=0; j<nb_colonnes; j++)
        {
            grille[i][j]=' ';
        }
    }
}





void affiche_grille(char grille[nb_lignes][nb_colonnes])
{
    //debut affichage
    printf("| |");
    for(int i=0; i<nb_colonnes; i++)
    {
        printf("X|");
    }
    printf(" |");
    printf("\n");
    for(int i=0; i<nb_lignes; i++)
    {
        printf("|Y|");
        //ecrire la ligne de la grille
        for(int j=0; j<nb_colonnes; j++)
        {
            printf("%c|",grille[i][j]);
        }
        printf("Y|");
        printf("\n");
    }
    printf("| ");
    for(int i=0; i<nb_colonnes; i++)
    {
        printf("|X");
    }
    
    printf("| |\n");

}



void main()
{
    char grille[nb_lignes][nb_colonnes];
    init_grille(grille);
    affiche_grille(grille);
}

