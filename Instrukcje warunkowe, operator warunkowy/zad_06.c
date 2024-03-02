#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("podaj pierwsza liczbe: ");
    scanf("%d", &x);
    printf("podaj druga liczbe: ");
    scanf("%d", &y);
    int suma = x + y;
        if (suma % 2 == 0) {
            printf("liczba: %d jest parzysta!", suma);
        }
        else {
            printf("liczba: %d jest nieparzysta!", suma);
        }
    return 0;
}

