#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x, y;
    printf("Podaj pierwszy znak: ");
    scanf(" %c", &x);

    printf("Podaj drugi znak: ");
    scanf(" %c", &y);

    printf("Odwrotna kolejnosc znakow: %c, %c", y, x);
    return 0;
}
