#include <stdio.h>
#include <string.h>
#include "include/window.h"

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

