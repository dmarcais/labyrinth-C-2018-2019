#include <stdio.h>
#include <stdlib.h>


typedef struct Labyrinthe{
    unsigned short ligne, colonne;
    unsigned short **lab;
    unsigned short xDepart, yDepart;
    unsigned short xCourant, yCourant;
    unsigned short xFin, yFin;
}Lab;

main ()
{
    int i, j;
  	Lab lab;
  	
  	/* Prototype de la fonction de conversion des entiers en binaires */
  	
  	unsigned short int_to_bin (unsigned short n);

    printf ("Donnez la hauteur du Labyrinthe S.V.P:\t");
 	scanf ("%u", &lab.ligne);
	
	puts ("\n");
	
	printf ("Donnez la largeur du Labyrinthe S.V.P:\t");
	scanf ("%u", &lab.colonne);
    
	/* allocation dynamique du labyrinthe */
    
	lab.lab = (unsigned short **) malloc (lab.ligne * sizeof (unsigned short *));
	for (i = 0; i < lab.ligne; i++)
    {
    	lab.lab [i] = (unsigned short *) malloc (lab.colonne * sizeof (unsigned short));
    }
    
	/* initialisation du labyrinthe */
	
    for (i = 0; i < lab.ligne; i++)
	{
        for (j = 0 ; j < lab.colonne; j++)
		{
            lab.lab [i][j] = rand () % 15 + 1; // entre 1 et 15
        }
    }
    
    lab.xDepart = 0;
    lab.yDepart = 0;
    lab.xFin = i;
    lab.yFin = j;
	
	puts ("\n");
	
    printf ("Position de depart x= %u, y=%u\n", lab.xDepart, lab.yDepart);
    
    puts ("\n");
    
	printf ("Position d'arrive x= %u, y= %u\n", lab.xFin, lab.yFin);
	
	puts ("\n");
	
	puts ("Forme decimale du tableau\n");

    for (i = 0; i < lab.ligne; i++)
	{
		for (j = 0; j < lab.colonne; j++)
		{
        	printf (" %u ", lab.lab [i][j]);
        }
        puts ("\n");
    }
	
	puts ("Forme binaire du tableau\n");
    
	for (i = 0; i < lab.ligne; i++)
	{
		for (j = 0; j < lab.colonne; j++)
		{
        	printf (" %0.4u ",int_to_bin (lab.lab [i][j]));
        }
        puts ("\n");
    }
    
	return 0;
}

unsigned short int_to_bin (unsigned short n)
{
    return (n == 0 || n == 1 ? n : ((n % 2) + 10 * int_to_bin (n / 2)));
}
