
// Création de la variable type coordonnées
typedef struct Coordonnees Coordonnees;

struct Coordonnees

{

    int x; // Abscisses

    int y; // Ordonnées

};

// Création de la variable type Dimension
typedef struct Dimension Dimension;

struct Dimension

{

    int largeur; 

    int hauteur; 

};

// Création de la variable type Labyrinthe
typedef struct Labyrinthe Labyrinthe;

struct Labyrinthe

{

    unsigned short **lab;
    
    Dimension dimension;
    
    Coordonnees entree;
    
    Coordonnees sortie;
    
    Coordonnees chercheurChemin;

};

