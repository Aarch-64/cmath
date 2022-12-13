// 
// logs.c
// cmath
//
// Created by Aarch-64 on 6/12/2022
// Last modification by Aarch-64 on 10/12/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include <stdio.h> // se incluye la libreria stdio.h
#include <stdlib.h> // se incluye la libreria stdlib.h
#include <unistd.h> // se incluye la libreria unistd.h
#include <ncurses.h> // se incluye la libreria ncurses.h

#include "include/win.h" // se incluye el archivo de encabezado window.h
S
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
