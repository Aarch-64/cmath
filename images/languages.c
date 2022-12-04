/* languages.c -- distribution and version numbers. */

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

#include <ncurses.h>
#include "cmath.h"
#include "window.h"

char op1[] = "Enter operand: ";
char op2[] = "Enter two operands: ";
char op3[] = "Enter an operator (+, -, *, /, r, c, t): ";
char errOP[] = "Error! operator is not correct";

char mr[] = "rad of: %.0lf\nDEG: %lf\nRAD: %lf";
char mc[] = "coss of: %.0lf\nDEG: %lf\nRAD: %lf";
char mt[] = "tan of: %.0lf\nDEG: %lf\nRAD: %lf";

char b1[] = "bytes of variable 1: ";
char b2[] = "bytes of variable 2: ";

char Ir[] = "Internal Error!";

char memdir[] = "Memory Directory: ";

char prss[] = "Prosess: ";

char op1_ES[] = "Introduzca un operador: ";
char op2_ES[] = "Introduzca dos operadores: ";
char op3_ES[] = "Introduzca operador (+, -, *, /, r, c, t): ";
char errOP_ES[] = "Error! el operador no es correcto";

char mr_ES[] = "raiz de: %.0lf\nDEG: %lf\nRAD: %lf";
char mc_ES[] = "coseno de: %.0lf\nDEG: %lf\nRAD: %lf";
char mt_ES[] = "tangente de: %.0lf\nDEG: %lf\nRAD: %lf";

char b1_ES[] = "bytes de la variable 1: ";
char b2_ES[] = "bytes de la variable 2: ";

char Ir_ES[] = "Error Interno!";

char memdir_ES[] = "Direccion de memoria: ";

char prss_ES[] = "Proseso: ";

void LangMain(void){
          attron(COLOR_PAIR(2));
	printw("1(english), 2(spanish).\n\n");
	  attroff(COLOR_PAIR(2));
	printw("Select your language: ");
	language=0; scanw("%i",&language);
	if (language > 2)
	  Exit();
	else if (language == '\0' || language == '\t' || language == ' ')
    	  Exit();
}
