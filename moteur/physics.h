#ifndef PHYSICS_H
#define PHYSICS_H

/* physics :  */


extern const float g;

typedef struct s_coords {

    int x;
    int y;

} coords;

typedef struct s_vecteur {

    float x;
    float y;

} vecteur;

typedef struct s_mouvement {

    float valeur;
    int tempsModif;

} mouvement;

coords calculPosition(int frameDebut, vecteur v0);

/* retourne la position relative par rapport a l'instant précédent */
float valeurAcceleration(mouvement accel);

/*  */
float valeurVitesse(mouvement vitesse);


#endif
