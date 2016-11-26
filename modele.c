#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "modele.h"

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

void init_serpent(char grille[nb_lignes][nb_colonnes])
{
    grille[nb_lignes/2][nb_colonnes /2]  = '@';
}



void init_nourriture(char grille[nb_lignes][nb_colonnes])
{
    //choisir des coordonnées aléatoires entre 0 et nbr_cases
    int x = rand()%nb_lignes;
    int y = rand()%nb_colonnes;
    grille[x][y] = '-';
}