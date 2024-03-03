#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("podaj pierwsza liczbe: ");
    scanf("%f", &x);
    printf("podaj druga liczbe: ");
    scanf("%f", &y);
    float b = ((x > y) ? x : y);
    printf((x == y) ? "liczby sa sobie rowne" : ((x > y) ? "pierwsza liczba jest wieksza" : "druga liczba jest wieksza"));
    return 0;
}
