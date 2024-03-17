/* W jednym pliku wykonaj czynności:

• Napisz funkcję sum z dwoma argumentami typu int. Funkcja ma zwracać sumę wartości
przekazanych przez argumenty. Stwórz przypadek testowy.

• Napisz funkcję sumVals z dwoma argumentami, które są wskaźnikami do zmiennych typu
int. Funkcja powinna zwracać sumę wartości, na które wskazują te argumenty. Utwórz
przypadek testowy.

• Napisz funkcję addPtr z trzema argumentami, które są wskaźnikami do zmiennych typu
int. Funkcja ma być procedurą (typ zwracany void). Funkcja ma ustawić wartość
zmiennej wskazywanej przez trzeci argument funkcji jako sumę wartości wskazywanych
przez dwa wcześniejsze argumenty. Utwórz przypadek testowy.  */

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

int sumVals(int *a, int *b)
{
    return *a + *b;
}

void addPtr(int *a, int *b, int *c)
{
    *c = *a + *b;
}

int main()
{
    int pierwsza = 2;
    int druga = 3;
    int wynik;
    printf("wynik funkcji sum: %d\n", sum(pierwsza, druga));
    printf("wynik funkcji sumVals: %d\n", sumVals(&pierwsza, &druga));
    addPtr(&pierwsza, &druga, &wynik);
    printf("wynik funkcji addPtr: %d\n", wynik);
    return 0;
}
