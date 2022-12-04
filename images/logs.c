#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include "window.h"

FILE *logfile;
char logdir[] = "/tmp/logs_cmath.log";

void logcm(void){
  logfile=fopen(logdir,"w");
  if(logfile == NULL)
  {
    printw("\nerror to write logs_cmath.log in /tmp.\n");
    refresh();
    sleep(2); /* sleep for 1 second*/
    ExitNonfclose();
  }
  else
  {
  fputs("Hello, World!, 1\n",logfile);
  }
}
