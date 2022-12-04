#include <ncurses.h> // se incluye la libreria ncurses.h
#include <stdlib.h> // se incluye la libreria stdlib.h

void IniVideo(){
       initscr(); /* Crea la ventana */
       start_color(); //Esta función inicia los colores
       clear(); /* Borra la pantalla entera bajo ncurses */
       refresh(); /* Actualiza la ventana con los cambios */
       cbreak();
}

void Exit(){
       refresh(); // refresca la ventana de ncurses
       endwin(); // finaliza la ventana ncurses
       exit(1); // devuelve un 1 al sistema operativo huesped.
}
