/* Napisz funkcję initInts, która nie przyjmuje argumentów i rezerwuje blok trzech zmiennych typu int, ustawiając ich wartości kolejno na 5, -12, 33.
Funkcja zwraca wskaźnik na środkową zmienną. Utwórz przypadek testowy w funkcji main, który wyświetla wartości z bloku stworzonego przez funkcję. */

#include <stdio.h>
#include <stdlib.h>

int *initInts(){
    int *wsk = malloc(3*sizeof(int));
    *wsk = 5;
    *(wsk + 1) = -12;
    *(wsk + 2) = 33;
    return wsk+1;
}

int main()
{
    int *wynik = initInts();
    printf("%d\n", *(wynik-1));
    printf("%d\n", *wynik); //środkowa zmienna
    printf("%d\n", *(wynik+1));

    return 0;
}
