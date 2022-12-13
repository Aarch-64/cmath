// 
// cmath.c
// cmath
//
// Created by Aarch-64 on 23/11/2022
// Last modification by Aarch-64 on 13/12/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include <ncurses.h> // se incluye la libreria ncurses.h
#include <stdlib.h> // se incluye la libreria stdlib.h
#include <unistd.h> // se incluye la libreria unistd.h
#include <errno.h> // se incluye la libreria errno.h
#include <math.h> // se incluye la libreria math.h

#include "include/cmath.h" // se incluye el archivo de encabezado cmath.h
#include "include/lang.h" // se incluye el archivo de encabezado languages.h
#include "include/logs.h" // se incluye el archivo de encabezado logs.h

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
               printw("rad %.0lf\nDEG: %.5lf\nRAD: %.5lf", n1, sqrt((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            else if (language == 2)
               printw("raiz de: %.0lf\nDEG: %.5lf\nRAD: %.5lf", n1, sqrt((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            break;
        case 'c':
            if (language == 1)
               printw("coseno de: %.0lf\nDEG: %.5lf\nRAD: %.5lf",n1, cos((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            else if (language == 2)
               printw("coss %.0lf:\nDEG: %.5lf\nRAD: %.5lf",n1, cos((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            break;
        case 't':
            if (language == 1)
               printw("tan %.0lf\nDEG: %.5lf\nRAD: %.5lf",n1, tan((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            else if (language == 2)
               printw("tangente de: %.0lf\nDEG: %.5lf\nRAD: %.5lf",n1, tan((n1 * 180.0 / PI)),(n1 * PI / 180.0));
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
         attron(COLOR_PAIR(4));
            if (language == 1)
            {
               printw("\n\n%s\n",lang_en.errOP);
            }
            else if (language == 2)
            {
               printw("\n\n%s\n",lang_es.errOP);
            }
            if (language == 1)
            {
               printw("%s%ld\n",lang_en.b1, sizeof(n1));
               printw("%s%p\n\n",lang_en.memdir, &n1);
               printw("%s%ld\n",lang_en.b2, sizeof(n2));
               printw("%s%p\n",lang_en.memdir ,&n2);
            }
            else if (language == 2)
            {
               printw("%s%ld\n",lang_es.b1, sizeof(n1));
               printw("%s%p\n\n",lang_es.memdir, &n1);
               printw("%s%ld\n",lang_es.b2, sizeof(n2));
               printw("%s%p\n",lang_es.memdir, &n2);
            }
            if (language == 1)
            {
              printw("\n%s%d\n",lang_en.prss, getpid());
            }
            else if (language == 2)
            {
              printw("\n%s%d\n",lang_es.prss, getpid());
            }
            if(errno==EPERM)
            {
              printf("That operation is not permitted.\n");
            } attroff(COLOR_PAIR(4));
            
    }
}
