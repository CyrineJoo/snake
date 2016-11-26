#include <stdio.h>
#include <stdlib.h>
#include "graphique.h"
#include "modele.h"

int  main()
{
    char grille[nb_lignes][nb_colonnes];
    init_grille(grille);
    init_serpent(grille);
    init_nourriture(grille);
    affiche_grille(grille);

   

    
    
    return 0;
    
}

