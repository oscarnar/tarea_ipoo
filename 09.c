#include <stdio.h>
int main()
{
    int c, espacios;
    espacios=0;
    printf("Ingrese algunos caracteres\n");
    while ((c=getchar()) != EOF)
        if (c==' ') {
            if (espacios==0) {
                espacios=1;
                putchar(c);
            }
        } else {
            espacios=0;
            putchar(c);
        }
    return 0;
}
