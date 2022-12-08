/* cmd.c -- distribution and version numbers. */

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
#include <string.h> // se incluye la libreria string.h

#include "include/window.h" // se incluye el archivo de encabezado window.h

void cmd(int argc, char *argv[])
{
    (void)argc;

    char ver[] = "--version";
    char hel[] = "--help";

    char namever[] = "cmath 0.3\n";
    char builver[] = "Este programa fue construido para x86_64-pc-linux-gnu\n";
    char copyver[] = "Copyright (C) 2022-2022 Agustin Gutierrez.\n";
    char licever[] = "Licencia GPLv3+: GNU GPL versión 3 o posterior <http://gnu.org/licenses/gpl.html>\n\n";
    char typever[] = "Este es software libre: cualquiera es libre para redistribuirlo y modificarlo.\n";
    char garaver[] = "No existe GARANTÍA ALGUNA, hasta los límites permitidos por las leyes aplicables..\n";
    
    if (argv[1] == NULL)
    {
        IniVideo();
    }
    else if (!strcmp(argv[1], hel))
    {
        printf("help test\n");
        ExitNonfclose();
    }
    else if (!strcmp(argv[1], ver))
    {
        printf("%s%s%s%s%s%s",namever,builver,copyver,licever,typever,garaver);
        ExitNonfclose();
    }
    else
    {
        printf("argument no valid\n");
        ExitNonfclose();
    }
}

