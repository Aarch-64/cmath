/* cmath.c -- distribution and version numbers. */

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
#include <math.h> // se incluye la libreria math.h
#include "cmath.h" // se incluye la libreria incluida cmath.h

// se declara la armadura cmath.
void cmath(void){

 // imprime texto en la ventana que despues es llamada por la armadura principal (main)
 printw("La raiz cuadrada de %.0f es: \n\n",a);
 
 printw("En grados: %lf\n",sqrt(a * PI / 180));
 printw("En radianes: %lf\n\n",sqrt(a * 180 / PI));
 
 printw("Bytes de la variable: %lu\n",sizeof(a));
 // .
}
