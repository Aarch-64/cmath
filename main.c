/* main.c -- distribution and version numbers. */

/* Copyright (C) 2022-2022 Agustin Gutierrez.

   This file is part of cmath, math test in c.

   cmath is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   cmath is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with cmath.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "window.h" // se incluye el archivo de encabezado window.h
#include "cmath.h" // se incluye el archivo de encabezado cmath.h
#include "languages.h" // se incluye el archivo de encabezado languages.h
#include "logs.h"

double a; // se define la variable 'a' como double (64 bits).
int language; // se define la variable 'language' como int (32 bits).
char option; // se define la variable 'option' como char (1 bit).
float i; // se define la variable 'i' como float (32 bits).
double n1; // se define la variable 'n1' como double (64 bits).
double n2; // se define la variable 'n2' como double (64 bits).

// se declara la armadura principal (main).
int main(int argc, char** argv){

  IniVideo(); // se la utiliza para inicializar un ventana en modo ncurses.
    LangMain(); // imprime el texto inicial que espera 1 o 2, y almacena el idioma seleccionado.
        TextMain(); // ejecuta la armadura TextMain (window.c).
  logcm();
  Exit(); // finaliza el modo de ncurses.
}
