#include <stdio.h>
#include "Variables.h"
#include "Prototypes.h"
#define LongeurEntier 16

/* FONCTION QUI CONVERTIT UN NOMBRE DECIMAL EN BINAIRE ET RECUPERE LES BITS DANS UN TABLEAU*/
void decimaleBinaire(unsigned short int n, int nbBinaire[16])
{
	
	
	int i = 0;

	for (i = 0; i < 16; i++)
	{
		if (n%2 == 1)
		{
			nbBinaire[15-i] = 1;
		}
		else 
		{
			nbBinaire[15-i] = 0;
		}
		n /= 2;
	}

}

/*** FONCTION QUI AFFICHE LE LABYRINTHE ***/
void afficherLabyrinthe(Labyrinthe labyrinthe)
{
	
	int i = 0, j = 0;

	int mursCellule[LongeurEntier] = {0};

	
/*** AFFICHAGE DU LABYRINTHE ***/

for (i = 0; i < 2*labyrinthe.dimension.hauteur+1 ; i++)
{

/*** AFFICHAGE DES MURS DU DESSUS DU LABYRINTHE ***/
	
	if (i == 0)
	{
		for (j = 0; j < labyrinthe.dimension.largeur; j++)
		{
			decimaleBinaire(labyrinthe.lab[i][j], mursCellule);
			if (j == 0) 
			{
				if (mursCellule[12]==1) printf("888888");
				else printf("88  88");
			}
			else
			{
				if (mursCellule[12]==1) printf("8888");
				else
				{
					decimaleBinaire(labyrinthe.lab[i][j], mursCellule);
					if (mursCellule[13]==1) printf("  88");
					else printf("    ");
				}
			}
			
		}
	printf("\n");
	}

/*** AFFICHAGE DU MUR A DROITE DE CHAQUE CELLULE ***/

	else if (i%2 == 1)		
	{
		for (j = 0; j < labyrinthe.dimension.largeur; j++)
		{
			decimaleBinaire(labyrinthe.lab[i/2][j], mursCellule);
			
			if (j == 0) 
			{
				if (mursCellule[13]==1 && mursCellule[15]==1) printf("88  88");
				else if (mursCellule[13]==1 && mursCellule[15]==0) printf("    88");
				else if (mursCellule[13]==0 && mursCellule[15]==1) printf("88    ");
				else printf("      ");
			}
			else
			{
				if (mursCellule[13]==1) printf("  88");
				else printf("    ");
			}
		
			
		}
	printf("\n");
	}
	
/*** AFFICHAGE MUR DU BAS DE CHAQUE CELLULE ***/
	else 
	{
		if (i != 2*labyrinthe.dimension.hauteur)
		{
			for (j = 0; j < labyrinthe.dimension.largeur; j++)
			{
				if (j==0)
				{
					decimaleBinaire(labyrinthe.lab[i/2-1][j], mursCellule);
					if (mursCellule[14]==1) printf("888888");
					else if (mursCellule[13]==1 && mursCellule[15]==1) printf("88  88");
					else if (mursCellule[13]==1 && mursCellule[15]==0) printf("    88");
					else if (mursCellule[13]==0 && mursCellule[15]==1) printf("88    ");
					else printf("      ");
				}
				else 
				{
					decimaleBinaire(labyrinthe.lab[i/2-1][j], mursCellule);
					if (mursCellule[14]==1) printf("8888");
					else if (mursCellule[13]==1) printf("  88");
					else
					{
						decimaleBinaire(labyrinthe.lab[i/2][j], mursCellule);//core dumped()
						if (mursCellule[13]==1) printf("  88");
						else printf("    ");
					} 
					
				}	
			}
		}
		else // Les derniers murs du bas du labyrinthe
		{
			if (j==0)
				{
					decimaleBinaire(labyrinthe.lab[i/2-1][j], mursCellule);
					if (mursCellule[14]==1) printf("888888");
					else if (mursCellule[13]==1 && mursCellule[15]==1) printf("88  88");
					else if (mursCellule[13]==1 && mursCellule[15]==0) printf("    88");
					else if (mursCellule[13]==0 && mursCellule[15]==1) printf("88    ");
					else printf("      ");
				}
				else 
				{
					decimaleBinaire(labyrinthe.lab[i/2-1][j], mursCellule);
					if (mursCellule[14]==1) printf("8888");
					else if (mursCellule[13]==1) printf("  88");
					else printf("    ");
				}
		}
		
	printf("\n");

	}
}

}