/* Napisz funkcję absVal z jednym argumentem, którym jest wskaźnik na zmienną typu int.
Funkcja oblicza wartość bezwzględną zmiennej wskazywanej przez wskaźnik i aktualizuje
tę zmienną. Utwórz przypadek testowy w main, aby wyświetlić wartość zaktualizowanej
zmiennej. */

#include <stdio.h>
#include <stdlib.h>

void absVal(int *a){
    (*a<0) ? printf("%d\n",(*a) * (-1)) : printf("%d\n", *a);

}

int main()
{
    int *x = 2;
    int *y = -4;
    absVal(&x);
    absVal(&y);
    return 0;
}
