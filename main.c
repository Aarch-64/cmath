/* main.c -- distribution and version numbers. */

/* Copyright (C) 2022-2022 Agustin Gutierrez.

   This file is part of cmath, math test in c.

   Bash is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Bash is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Bash.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <ncurses.h> // se incluye la libreria ncurses.h
#include "cmath.h" // se incluye la libreria incluida cmath.h
#include "window.h"

double a; // se define la variable 'a' como double (64 bits).
float option; // se define la variable 'option' como float (32 bits).

// se declara la armadura principal (main).
int main(void){

  // se la utiliza para inicializar un ventana en modo ncurses.
  IniVideo();

  printw("Ingrese un Numero: "); // imprime texto en la ventana.
  scanw("%f",&option);
 
  a = option;
  cmath(); // ejecuta lo escrito en la armadura adelantada cmath que se encuentra en cmath.h
  
  move(7, 0); /* x , y */
  printw("\n\nCtrl C  para terminar\n");
  getch(); //espera una sola pulsación de una sola tecla (sin tener que presionar “Enter”).
  
  Exit(); // finaliza el modo de ncurses.
}
