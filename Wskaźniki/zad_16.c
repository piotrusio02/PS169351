/* . Napisz funkcję swap z dwoma argumentami: wskaźnikiem ptr1 na zmienną typu int
i wskaźnikiem ptr2 na inną zmienną tego samego typu. Funkcja zamienia miejscami
wartości wskazywane przez wskaźniki. Utwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1,int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int *x = 2;
    int *y = 4;
    printf("%d, %d\n", x, y);
    swap(&x,&y);
    printf("%d, %d\n", x, y);
    return 0;
}
