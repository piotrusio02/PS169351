#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x, y, z;
    printf("podaj pierwsza liczbe: ");
    scanf("%d", &x);
    printf("podaj druga liczbe: ");
    scanf("%d", &y);
    printf("podaj trzecia liczbe: ");
    scanf("%d", &z);
    int mniejsza = (x < y) ? x : y;
    int najmniejsza = (mniejsza < z) ? mniejsza : z;
    printf("najmniejsza liczba to: %d", najmniejsza);
    return 0;
}
