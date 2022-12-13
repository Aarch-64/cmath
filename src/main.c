// 
// main.c
// cmath
//
// Last modification by Aarch-64 on 20/11/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include "include/win.h" // se incluye el archivo de encabezado window.h
#include "include/cmath.h" // se incluye el archivo de encabezado cmath.h
#include "include/lang.h" // se incluye el archivo de encabezado languages.h
#include "include/logs.h" // se incluye el archivo de encabezado logs.h
#include "include/cmd.h" // se incluye el archivo de encabezado cmd.h

double a; // se define la variable 'a' como double (64 bits).
int language; // se define la variable 'language' como int (32 bits).
char option; // se define la variable 'option' como char (1 bit).
float i; // se define la variable 'i' como float (32 bits).
double n1; // se define la variable 'n1' como double (64 bits).
double n2; // se define la variable 'n2' como double (64 bits).

// se declara la armadura principal (main).
int main(void){

 // se la utiliza para inicializar un ventana en modo ncurses.
   cmd();
    logcm();
      LangMain(); // imprime el texto inicial que espera 1 o 2, y almacena el idioma seleccionado.
        TextMain(); // ejecuta la armadura TextMain (window.c).

  exit_s(); // finaliza el modo de ncurses.
}
