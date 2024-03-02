#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ,c;
    printf("Podaj trzy liczby: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int mniejsza = a < b ? a : b;
    int najmniejsza = mniejsza < c ? mniejsza : c;
    printf("Najmniejsza liczba to: %d", najmniejsza);
    return 0;
}

