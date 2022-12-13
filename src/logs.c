/* logs.c -- distribution and version numbers. */

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

#include <stdio.h> // se incluye la libreria stdio.h
#include <stdlib.h> // se incluye la libreria stdlib.h
#include <unistd.h> // se incluye la libreria unistd.h
#include <ncurses.h> // se incluye la libreria ncurses.h

#include "include/win.h" // se incluye el archivo de encabezado window.h

FILE *logfile;
char logdir[] = "/tmp/logs_cmath.log";

void logcm(void){
  logfile=fopen(logdir,"w");
  if(logfile == NULL)
  {
    printw("\nerror to write logs_cmath.log in /tmp.\n");
    refresh();
    sleep(2); /* sleep for 2 second*/
    ExitNonfclose();
  }
  else
  {
  fputs("Hello, World!, 1\n",logfile);
  }
}
