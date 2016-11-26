#include <stdio.h>
#include <stdlib.h>
#include "graphique.h"



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
