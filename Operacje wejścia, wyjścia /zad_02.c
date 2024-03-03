#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &x);
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &y);
    printf("%.2f + %.2f = %.2f", x, y, x+y);
    return 0;
}
