#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);
    if (liczba > 0){
        printf("Liczba %d jest dodatnia", liczba); }
    else if (liczba < 0){
        printf("liczba %d jest ujemna", liczba); }
    else {
        printf("Liczba jest rowna zero"); }
    return 0;
}
