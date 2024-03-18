/* Napisz funkcję subPtrs z dwoma argumentami: wskaźnikiem num1 na stałą wartość
typu double i stałym wskaźnikiem num2 na zmienną typu double. Funkcja ma zwracać
różnicę wartości, na które wskazują num1 i num2. Utwórz przypadek testowy. */


#include <stdio.h>
#include <stdlib.h>

double subPtrs(double const *num1, double * const num2){
    return *num1 - *num2;
}

int main(){
double a = 3.4, b = 7.3;
printf("%lf\n", subPtrs(&a,&b));
return 0;
}
