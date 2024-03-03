#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    printf(" Podaj liczbe zmiennoprzecinkowa: ");
    scanf(" %f", &x);
    printf(" wartosc bezwzgledna twojej liczby: %f", fabs(x));
    return 0;
}
