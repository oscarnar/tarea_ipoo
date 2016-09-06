#include <stdio.h>
int main()
{
    int c, bl, tl, nl;
    bl = 0;
    tl = 0;
    nl = 0;

    printf("Ingrese algunos caracteres\n");
    while ((c = getchar()) != EOF)
        if (c == ' ')
            bl=bl+1;
        else if (c == '\t')
            tl=tl+1;
        else if (c == '\n')
            nl=nl+1;

    printf("Espacios en blanco: %d, Tabuladas: %d, Lineas %d.\n", bl, tl, nl);

    return 0;
}
