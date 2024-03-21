/* Napisz funkcję sumSqrs z dwoma argumentami: wskaźnikiem num1 na stałą wartość
typu int i stałym wskaźnikiem num2 na zmienną typu int. Funkcja ma zwracać sumę
kwadratów wartości wskazywanych przez num1 i num2. Utwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int sumSqrts(const int * num1, int * const num2){
    return (*num1 * *num1) + (*num2 * *num2);

}

int main()
{
    int *x = 4;
    int *a = 5;
    printf("%d", sumSqrts(&x,&a));
    return 0;
}
