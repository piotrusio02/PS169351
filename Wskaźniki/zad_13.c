/* Napisz funkcję minPtr z trzema argumentami, które są wskaźnikami na zmienne typu
int. Funkcja zwraca wskaźnik na zmienną o najmniejszej wartości spośród tych, na które
wskazują argumenty. Utwórz przypadek testowy w main, aby wyświetlić najmniejszą
wartość spośród trzech zmiennych. */


#include <stdio.h>
#include <stdlib.h>

int minPtr(int *a, int *b, int *c){
    (*a>*b) ? (*a = *b) : *a;
    (*a>*c) ? (*a = *c) : *a;
    return *a;

}

int main()
{
    int *a = 23;
    int *b = 34;
    int *c = 7;
    printf("%d", minPtr(&a,&b,&c));
    return 0;
}
