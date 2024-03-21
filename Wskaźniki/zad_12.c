/* Napisz funkcję linFuncVal z trzema argumentami: wskaźnikiem a na stałą wartość
typu float, stałym wskaźnikiem b na zmienną typu float, i wskaźnikiem x na stałą
wartość typu float. Funkcja ma obliczać i zwracać wartość funkcji liniowej y=ax+b dla
argumentu x, gdzie a i b są wskazywane przez odpowiednie wskaźniki. Utwórz przypadek
testowy. */

#include <stdio.h>
#include <stdlib.h>

float linFuncVal(const float *a,float * const b, const float *x){
    return ((*a) * (*x)) + (*b);

}

int main()
{
    float a = 3, b = 2, x;
    printf("podaj argument x: ");
    scanf("%f", &x);
    printf("dla podanego x = %.2f, wychodzi y = %.2f", x, linFuncVal(&a,&b,&x));
    return 0;
}
