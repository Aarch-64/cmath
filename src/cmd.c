// 
// cmd.c
// cmath
//
// Created by Aarch-64 on 3/12/2022
// Last modification by Aarch-64 on 13/12/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include <stdio.h> // se incluye la libreria stdio.h
#include <string.h> // se incluye la libreria string.h

#include "include/win.h" // se incluye el archivo de encabezado window.h

void cmd(int argc, char *argv[])
{
    (void)argc;

    char ver[] = "--version";
    char hel[] = "--help";

    char namever[] = "cmath 0.3\n";
    char builver[] = "This program was built for x86_64-pc-linux-gnu\n";
    char copyver[] = "Copyright (C) 2022-2022 Agustin Gutierrez.\n";
    char licever[] = "GPLv3+ License: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\n\n";
    char typever[] = "This is free software: anyone is free to redistribute and modify it.\n";
    char garaver[] = "There is no WARRANTY, up to the limits permitted by applicable laws.\n";
    
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

