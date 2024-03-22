/* Napisz funkcję swapSign z dwoma argumentami: wskaźnikiem ptr1 na zmienną typu
double i wskaźnikiem ptr2 na inną zmienną tego samego typu. Funkcja zamienia miejscami 
wartości wskazywane przez wskaźniki, jeśli mają one różne znaki. W przeciwnym
razie nie robi nic. Utwórz przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

void swapSign(double *ptr1, double *ptr2){
    if (*ptr1 * *ptr2 < 0){
        double temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}

int main()
{
    double a = -5;
    double b = 3;
    printf("%.2lf, %.2lf\n", a, b);
    swapSign(&a, &b);
    printf("%.2lf, %.2lf", a, b);
    return 0;
}
