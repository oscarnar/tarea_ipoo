#include <stdio.h>
int main()
{
    float fahr, celsius;
    float minimo, maximo, salto;
    minimo=0;
    maximo=300;
    salto=20;
    printf(" F     C\n");
    fahr=maximo;
    while (fahr>=minimo) {
        celsius=(5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr=fahr-salto;
    }
    return 0;
}
