#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Podaj 2 liczby calkowite: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    if (a > b) {
        printf("wieksza: %d", a); }
    else {
        printf("wieksza: %d", b); }
    return 0;
}
