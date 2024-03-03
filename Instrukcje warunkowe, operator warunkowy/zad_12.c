#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ocena;
    printf("podaj ocene w skali od 0 do 100: ");
    scanf("%d", &ocena);
    printf( (ocena < 0 || ocena > 100) ? "Ocena nie miesci sie w skali" :((ocena > 51) ? "Zdane" : "Nie zdane"));
    return 0;
}
