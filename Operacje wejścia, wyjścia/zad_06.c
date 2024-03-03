#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf(" %f", &x);

    printf("Podwojona wartosc: %.2f", x * 2);
    return 0;
}
