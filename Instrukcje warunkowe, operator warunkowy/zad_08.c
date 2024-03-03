#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("podaj pierwsza liczbe: ");
    scanf("%d", &x);
    printf("podaj druga liczbe: ");
    scanf("%d", &y);
    int wieksza = (x > y) ? x : y;
    printf("wieksza liczba to: %d", wieksza);
    return 0;
}

