#include <stdio.h>
#include <stdlib.h>

int findMaxElement(int n, int tab[]){
    int wynik = tab[0];
    for(int i=0;i<n;i++){
        if (wynik < tab[i]){
            wynik = tab[i];
        }
        }
    return wynik;
    }

int main()
{

    int tab[] = {111, 3, 56, 2000, 14, 6, 23, 8, 4};
    printf("%d", findMaxElement(9, tab));
    return 0;
}
