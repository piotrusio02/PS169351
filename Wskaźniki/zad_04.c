#include <stdio.h>
#include <stdlib.h>

double findMax(const double *num1, double * const num2){
    return (*num1 > *num2 ? *num1 : *num2);
}
int main()
{
    const double pierwsze = 5.25;
    double drugie = 8;

    const double *a = &pierwsze;
    double * const b = &drugie;

    double max = findMax(a, b);

    printf("Maksymalna wartosc: %.2f\n", max);

    return 0;
}
