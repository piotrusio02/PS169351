/* Napisz funkcję sqrCopy z dwoma argumentami: wskaźnikiem na stałą typu int i wskaźnikiem 
na zmienną typu int. Funkcja ma przepisać kwadrat wartości stałej do zmiennej
wskazywanej przez drugi argument. Utwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

void sqrCopy (const int * a, int * b){
    *b = *a * *a;
    printf("%d\n", *b);
}

int main()
{
    int *x = 2;
    int *a = 3;
    int *c = 4;
    int *wynik;
    sqrCopy(&x,&wynik);
    sqrCopy(&a,&wynik);
    sqrCopy(&c,&wynik);
    return 0;
}
