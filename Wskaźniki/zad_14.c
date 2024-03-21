/* Napisz funkcję multPtrs z dwoma argumentami: wskaźnikiem num1 na stałą wartość
typu double i stałym wskaźnikiem num2 na zmienną typu double. Funkcja zwraca
iloczyn wartości wskazywanych przez te wskaźniki. Utwórz przypadek testowy. */
  
#include <stdio.h>
#include <stdlib.h>

double multPtrs(const double *num1, double * const num2){
    return (*num1) * (*num2);

}

int main()
{
    double a = 2, b = 3;
    printf("%.2lf", multPtrs(&a,&b));
    return 0;
}
