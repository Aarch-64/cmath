#include <stdio.h>
#include <stdlib.h>

FILE *logfile;

void logcm(void){
  logfile=fopen("/tmp/logs_cmath.log","w");
  fputs("Hello, World!, from cmath",logfile);
  fclose(logfile);
}
