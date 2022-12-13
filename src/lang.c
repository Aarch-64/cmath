/* lang.c -- distribution and version numbers. */

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

#include <ncurses.h> // se incluye la libreria ncurses.h
#include <string.h>

#include "include/cmath.h" // se incluye el archivo de encabezado cmath.h
#include "include/win.h" // se incluye el archivo de encabezado window.h
#include "include/lang.h"

lan1 lang_en;
lan2 lang_es;

void defvar(void){

// lang_en
strcpy(lang_en.op1, "Enter operand: ");
strcpy(lang_en.op2, "Enter two operands: ");
strcpy(lang_en.op3, "Enter an operator (+, -, *, /, r ,c ,t): ");
strcpy(lang_en.errOP, "Error! operator is not correct");

strcpy(lang_en.b1, "bytes of variable 1: ");
strcpy(lang_en.b2, "bytes of variable 2: ");

strcpy(lang_en.Ir, "Internal Error!");

strcpy(lang_en.memdir, "Memory Directory: ");

strcpy(lang_en.prss, "Prosess: ");

// lang_es
strcpy(lang_es.op1, "Introduzca un operador: ");
strcpy(lang_es.op2, "Introduzca dos operadores: ");
strcpy(lang_es.op3, "Introduzca operador (+, -, *, /, r, c, t): ");
strcpy(lang_es.errOP, "Error! el operador no es correcto");

strcpy(lang_es.b1, "bytes de la variable 1: ");
strcpy(lang_es.b2, "bytes de la variable 2: ");

strcpy(lang_es.Ir, "Error Interno!");

strcpy(lang_es.memdir, "Direccion de memoria: ");

strcpy(lang_es.prss, "Proseso: ");
}

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
