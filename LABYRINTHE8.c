#include <stdio.h>
#include "Variables.h"
#include "Prototypes.h"

#define NbColonLab 3
#define NbLigneLab 5
#define LongeurEntier 16

int main(int argc, char const *argv[])
{
	int i = 0, j = 0;

	int mursCellule[LongeurEntier] = {0};

	unsigned short int Lab[NbLigneLab][NbColonLab] = {{11, 5 , 8}, {6, 0, 12}, {11, 10, 14}, {3, 2, 12}, {13, 13, 6 }};


	/*unsigned short int Lab[NbColonLab][NbColonLab] = {{11, 12, 11, 12},
							  		 				 {9, 6, 9, 6},
							  		 			     {3, 10, 0, 14},
							  		 				 {11, 10, 2, 4}};*/

	/*unsigned short int Lab[NbLigneLab][NbLigneLab] = {{9, 12, 13, 11, 8, 8, 12, 13, 9, 12}, 
							  	 					  	{3, 2, 2, 8, 0, 2, 2, 0, 6, 7}, 
							  	 					  	{9, 14, 9, 0, 0, 8, 10, 4, 11, 14},
							  	 					  	{1, 12, 3, 6, 1, 4, 9, 0, 14, 13}, 
							 	 					  	{1, 4, 9, 8, 0, 2, 0, 4, 15, 5}, 
							  	 					  	{5, 1, 0, 4, 1, 10, 2, 4, 9, 6}, 
							  	 					  	{1, 4, 5, 1, 0, 14, 13, 5, 5, 13},
							  	 					  	{7, 5, 5, 1, 6, 15, 5, 1, 0, 6},
							  	 					  	{9, 0, 2, 4, 9, 12, 7, 1, 4, 13}, 
							  	 					  	{7, 3, 10, 2, 6, 7, 15, 7, 3, 6}};*/

	/*unsigned short int Lab[NbLigneLab][NbLigneLab] = {{3, 12, 13, 11, 8, 8, 12, 13, 9, 12,9, 12, 13, 11, 8, 8, 12, 13, 9, 12}, 
							  	 					  	{3, 2, 2, 8, 0, 2, 2, 0, 6, 7 ,3, 2, 2, 8, 0, 2, 2, 0, 6, 7}, 
							  	 					  	{9, 14, 9, 0, 0, 8, 10, 4, 11, 14, 9, 14, 9, 0, 0, 8, 10, 4, 11, 14},
							  	 					  	{1, 12, 3, 6, 1, 4, 9, 0, 14, 13, 1, 12, 3, 6, 1, 4, 9, 0, 14, 13}, 
							 	 					  	{1, 4, 9, 8, 0, 2, 0, 4, 15, 5,1, 4, 9, 8, 0, 2, 0, 4, 15, 5}, 
							  	 					  	{5, 1, 0, 4, 1, 10, 2, 4, 9, 6, 5, 1, 0, 4, 1, 10, 2, 4, 9, 6}, 
							  	 					  	{1, 4, 5, 1, 0, 14, 13, 5, 5, 13,1, 4, 5, 1, 0, 14, 13, 5, 5, 13},
							  	 					  	{7, 5, 5, 1, 6, 15, 5, 1, 0, 6, 7, 5, 5, 1, 6, 15, 5, 1, 0, 6},
							  	 					  	{9, 0, 2, 4, 9, 12, 7, 1, 4, 13, 9, 0, 2, 4, 9, 12, 7, 1, 4, 13}, 
							  	 					  	{7, 3, 10, 2, 6, 7, 15, 7, 3, 1, 0, 3, 10, 2, 6, 7, 15, 7, 3, 6},
							  	 					  	{9, 12, 13, 11, 8, 8, 12, 13, 9, 12,9, 12, 13, 11, 8, 8, 12, 13, 9, 12}, 
							  	 					  	{3, 2, 2, 8, 0, 2, 2, 0, 6, 7 ,3, 2, 2, 8, 0, 2, 2, 0, 6, 7}, 
							  	 					  	{9, 14, 9, 0, 0, 8, 10, 4, 11, 14, 9, 14, 9, 0, 0, 8, 10, 4, 11, 14},
							  	 					  	{1, 12, 3, 6, 1, 4, 9, 0, 14, 13, 1, 12, 3, 6, 1, 4, 9, 0, 14,0 }, 
							 	 					  	{1, 4, 9, 8, 0, 2, 0, 4, 15, 5,1, 4, 9, 8, 0, 2, 0, 4, 15, 5}, 
							  	 					  	{5, 1, 0, 4, 1, 10, 2, 4, 9, 6, 5, 1, 0, 4, 1, 10, 2, 4, 9, 6}, 
							  	 					  	{1, 4, 5, 1, 0, 14, 13, 5, 5, 13,1, 4, 5, 1, 0, 14, 13, 5, 5, 13},
							  	 					  	{7, 5, 5, 1, 6, 15, 5, 1, 0, 6, 7, 5, 5, 1, 6, 15, 5, 1, 0, 6},
							  	 					  	{9, 0, 2, 4, 9, 12, 7, 1, 4, 13, 9, 0, 2, 4, 9, 12, 7, 1, 4, 13}, 
							  	 					  	{5, 3, 10, 2, 6, 7, 15, 7, 3, 6, 7, 3, 10, 2, 6, 7, 15, 7, 3, 6}};*/


/*** AFFICHAGE DES ELEMENTS DU LABYRINTHE ***/							 

for (i = 0; i < NbLigneLab; i++)
{
	for(j = 0; j < NbColonLab; j++)
	{
		printf("%u ",Lab[i][j]);
	}
	printf("\n");
}
	
/*** AFFICHAGE DU LABYRINTHE ***/

for (i = 0; i < 2*NbLigneLab+1 ; i++)
{

/*** AFFICHAGE DES MURS DU DESSUS DU LABYRINTHE ***/
	
	if (i == 0)
	{
		for (j = 0; j < NbColonLab; j++)
		{
			decimaleBinaire(Lab[i][j], mursCellule);
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
					decimaleBinaire(Lab[i][j], mursCellule);
					if (mursCellule[13]==1) printf("  88");
					else printf("    ");
				}
			}
			
		}
	printf("\n");
	}

/*** AFFICHAGE DU MUR A DROITE DE CHAQUE CELLULE ****/

	else if (i%2 == 1)		
	{
		for (j = 0; j < NbColonLab; j++)
		{
			decimaleBinaire(Lab[i/2][j], mursCellule);
			
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
		if (i !=2*NbLigneLab+1)
		{
			for (j = 0; j < NbColonLab; j++)
			{
				if (j==0)
				{
					decimaleBinaire(Lab[i/2-1][j], mursCellule);
					if (mursCellule[14]==1) printf("888888");
					else if (mursCellule[13]==1 && mursCellule[15]==1) printf("88  88");
					else if (mursCellule[13]==1 && mursCellule[15]==0) printf("    88");
					else if (mursCellule[13]==0 && mursCellule[15]==1) printf("88    ");
					else printf("      ");
				}
				else 
				{
					decimaleBinaire(Lab[i/2-1][j], mursCellule);
					if (mursCellule[14]==1) printf("8888");
					else if (mursCellule[13]==1) printf("  88");
					else
					{
						decimaleBinaire(Lab[i/2][j], mursCellule);
						if (mursCellule[13]==1) printf("  88");
						else printf("    ");
					} 
					
				}	
			}

		}
		else // Les derniers murs du bas du labyrinthe
		{
			for (j = 0; j < NbColonLab; j++)
			{
				if (j==0)
				{
					decimaleBinaire(Lab[i/2-1][j], mursCellule);
					if (mursCellule[14]==1) printf("888888");
					else if (mursCellule[13]==1 && mursCellule[15]==1) printf("88  88");
					else if (mursCellule[13]==1 && mursCellule[15]==0) printf("    88");
					else if (mursCellule[13]==0 && mursCellule[15]==1) printf("88    ");
					else printf("      ");
				}
				else 
				{
					decimaleBinaire(Lab[i/2-1][j], mursCellule);
					if (mursCellule[14]==1) printf("8888");
					else if (mursCellule[13]==1) printf("  88");
					else else printf("    ");
				}	
			}
		}
	printf("\n");

	}
}
	
return 0;
}

