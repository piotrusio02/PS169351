/* Napisz funkcję sumToPtr z trzema argumentami: dwoma wskaźnikami na stałe typu int i
wskaźnikiem na zmienną typu int. Funkcja ma przepisać do zmiennej wskazywanej przez
trzeci argument sumę wartości stałych wskazywanych przez pierwszy i drugi argument.
Utwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

void sumToPtr(const int * a, const int * b, int * c){
    *c = *b + *a;
    printf("%d\n", *c);
}

int main()
{
    int *x = 2;
    int *y = 3;
    int *b = 12;
    int *c = 8;
    int *wynik;
    sumToPtr(&x,&y,&wynik);
    sumToPtr(&c,&b,&wynik);
    return 0;
}
