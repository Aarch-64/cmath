/* cmath.c -- distribution and version numbers. */

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
#include <stdlib.h> // se incluye la libreria stdlib.h
#include <unistd.h> // se incluye la libreria unistd.h
#include <errno.h>
#include <math.h> // se incluye la libreria math.h

#include "cmath.h" // se incluye la libreria incluida cmath.h
#include "languages.h" // se incluye la libreria incluida languages.h
#include "logs.h"

// se declara la armadura cmath.
void cmath(void){
fputs("Hello, World!, 3",logfile);
   switch(option)
    {
        case '+':
            printw("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            refresh();
            break;

        case '-':
            printw("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            refresh();
            break;

        case '*':
            printw("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            refresh();
            break;

        case '/':
            printw("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        case 'r':
            if (language == 1)
               printw(mr, n1, sqrt((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            else if (language == 2)
               printw(mr_ES, n1, sqrt((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            break;
        case 'c':
            if (language == 1)
               printw(mc ,n1, cos((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            else if (language == 2)
               printw(mc_ES ,n1, cos((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            break;
        case 't':
            if (language == 1)
               printw(mt ,n1, tan((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            else if (language == 2)
               printw(mt_ES ,n1, tan((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
         attron(COLOR_PAIR(4));
            if (language == 1)
            {
               printw("\n\n%s\n",errOP);
            }
            else if (language == 2)
            {
               printw("\n\n%s\n",errOP_ES);
            }
            if (language == 1)
            {
               printw("%s%ld\n",b1, sizeof(n1));
               printw("%s%p\n\n",memdir, &n1);
               printw("%s%ld\n",b2, sizeof(n2));
               printw("%s%p\n",memdir ,&n2);
            }
            else if (language == 2)
            {
               printw("%s%ld\n",b1_ES, sizeof(n1));
               printw("%s%p\n\n",memdir_ES, &n1);
               printw("%s%ld\n",b2_ES, sizeof(n2));
               printw("%s%p\n",memdir_ES, &n2);
            }
            if (language == 1)
            {
              printw("\n%s%d\n",prss, getpid());
            }
            else if (language == 2)
            {
              printw("\n%s%d\n",prss_ES, getpid());
            }
            if(errno==EPERM)
            {
              printf("That operation is not permitted.\n");
            } attroff(COLOR_PAIR(4));
            
    }
}
