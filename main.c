#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, const char * argv[])
{
    
	
	const int MAX=100, MIN=1;
	int nombreMystere=0, nombreSaisi=0, compteur=0, continuerPartie=1;
	
	
	
	
	srand(time(NULL));
	
	
while (continuerPartie == 1)
{	
	
	nombreMystere=(rand()%(MAX-MIN+1))+MIN;
	
	
				do
					{
							printf("\n\n");
							printf("=====Saisissez un nombre=====\n\n");
								scanf("%d", &nombreSaisi);
									compteur ++;
		
							if (nombreMystere > nombreSaisi)
									printf("C'est un nombre plus grand!\n\n");
							else if (nombreMystere < nombreSaisi)
									printf("C'est un nombre plus petit!\n\n");
							else
									printf("Bravo tu as trouvé le numéro mystère en %d coups\n", compteur);
					}while (nombreSaisi != nombreMystere);
	
				
				
	printf("Souhaitez vous relancer une nouvelle partie?\nOUI=1\nNON=0");
	scanf("%d", continuerPartie);
			
}
	
	return 0;
}

