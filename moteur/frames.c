// Agit comme une horloge; compte les frames depuis le démarrage du jeu

int compteurFrame = 0; // compteur de frames
int framesParSecondes; // nombre de fps visé
float ecartFrameMs; // écart temporel entre deux frames

void initFrames(int fps)
{

    framesParSecondes = fps;

    ecartFrameMs = 1000 / fps; 

    return;


}

void frameSuivante()
{

    compteurFrame += 1;
    return;

}
