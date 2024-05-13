#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("podaj 3 liczby: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float wyrazenie = (3 - 4*a*c)/(3-b);
    printf("wynik to: %.2f", wyrazenie);
    return 0;
}
