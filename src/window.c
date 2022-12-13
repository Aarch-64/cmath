/* window.c -- distribution and version numbers. */

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

#include "include/cmath.h" // se incluye el archivo de encabezado cmath.h
#include "include/languages.h" // se incluye el archivo de encabezado languagues.h
#include "include/window.h" // se incluye el archivo de encabezado window.h
#include "include/logs.h" // se incluye el archivo de encabezado logs.h

void IniVideo(void){
       initscr(); /* Crea la ventana */
       if(!has_colors())
       {
        addstr("your terminal does not support colors");
        Exit();       
       }
       else
       {
        start_color();
       }

       init_pair(1,COLOR_WHITE,COLOR_BLACK);
       init_pair(2,COLOR_GREEN,COLOR_BLACK);
       init_pair(3,COLOR_BLUE,COLOR_BLACK);
       init_pair(4,COLOR_RED,COLOR_BLACK);
       bkgd(COLOR_PAIR(1));
       attron(A_BOLD);
       clear(); /* Borra la pantalla entera bajo ncurses */
       refresh(); /* Actualiza la ventana con los cambios */
       cbreak();
}

void Exit(void){
       refresh(); // refresca la ventana de ncurses
       endwin(); // finaliza la ventana ncurses
       fclose(logfile);
       exit(1); // devuelve un 1 al sistema operativo huesped.
}

void ExitNonfclose(void){
       refresh(); // refresca la ventana de ncurses
       endwin(); // finaliza la ventana ncurses
       exit(1); // devuelve un 1 al sistema operativo huesped.
}

void exit_s(void){
       refresh(); // refresca la ventana de ncurses
       endwin(); // finaliza la ventana ncurses
       exit(EXIT_SUCCESS); // devuelve un 1 al sistema operativo huesped.
}

void TextMain(void){
  defvar();
  fputs("Hello, World!, 2\n",logfile);
      if (language == 1)
        addstr(lang_en.op3);

      else if (language == 2)
       addstr(lang_es.op3);

        scanw("%c",&option);
          if (option == '+' ||option == '-' ||option == '*' ||option == '/')
           {
              if (language == 1)
                addstr(lang_en.op2);
              else if (language == 2)
                addstr(lang_es.op2);

              scanw("%lf %lf",&n1, &n2);
           }
             else if (option == 'r' ||option == 'c' ||option == 't')
             {
                if (language == 1)
                  addstr(lang_en.op1);

                else if (language == 2)
                  addstr(lang_es.op1);
           
                scanw("%lf",&n1);
             }
              else if (option == '\0' || option == '\t' || option == ' ')
                  Exit();
                else
                  {
                  attron(COLOR_PAIR(4)); // color RED and BLACK start
                    if (language == 1)
                    {
                      addstr(lang_en.Ir);
                    }
                    else if (language == 2)
                    {
                      addstr(lang_es.Ir);
                    } attroff(COLOR_PAIR(4)); // color RED and BLACK disable

        }
    cmath(); // ejecuta lo escrito en la armadura adelantada cmath que se encuentra en cmath.h
  
  attron(A_BLINK);
  
    attron(COLOR_PAIR(3));
  printw("\n\nPress any key to continue...\n");
  
  attroff(A_BLINK);
    attroff(COLOR_PAIR(3));
  getch(); //espera una sola pulsación de una sola tecla (sin tener que presionar “Enter”).
}
