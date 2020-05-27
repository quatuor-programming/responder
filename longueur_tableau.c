#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"

//Calcule la longueur d'un tableau initilisé avec des 'a' aux endroits vides

int longueur_tableau (int *tableau){
	int longueur_tableau = 0, i = 0;
	char caratere = 0;
	
	while(caratere != 'a' || caratere != 'A'){
		caractere = tableau[i];
		i++;
	}
	
	longueur_tableau = i + 1;
	
	return longueur_tableau;
}