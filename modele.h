#ifndef Modele_h
#define Modele_h
#include <stdio.h>
#include <stdlib.h>

#define nb_lignes 5
#define nb_colonnes 5

void init_grille(char grille[nb_lignes][nb_colonnes]);
void init_serpent(char grille[nb_lignes][nb_colonnes]);
void init_nourriture(char grille[nb_lignes][nb_colonnes]);

#endif /* Modele_h */