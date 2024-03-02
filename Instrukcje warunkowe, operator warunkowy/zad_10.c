#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("podaj liczbe calkowita: ");
    scanf("%d", &x);
    printf((x % 2 == 0) ? "parzysta" : "nieparzysta");
    return 0;
}

