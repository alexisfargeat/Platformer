#ifndef CONSOLE_H
#define CONSOLE_H

/* console : permet d'afficher les messageList d'erreurs et de deboguer le programme (version developpement) */

#include <stdbool.h>
#include <ncurses.h>


extern bool consoleActive;
extern WINDOW* console;

extern int nbLigneConsole;

extern const int ERRMSG;
extern const int WARNMSG;
extern const int INFOMSG;

/* Affiche un message dans la console */
void afficherMessageConsole(char str[], int msgType);

/* Initialise la console */
void initConsole();

/* Libère la mémoire de la console */
void libererMemoireConsole();


#endif
