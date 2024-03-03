#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y;
    printf(" Podaj pierwszy bok trojkata: ");
    scanf(" %f", &x);
    printf(" Podaj drugi bok trojkata: ");
    scanf(" %f", &y);
    float z = sqrt(pow(x, 2) + pow(y, 2));
    printf("%.2f", z);
    return 0;
}
