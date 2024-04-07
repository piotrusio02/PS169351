#include <stdio.h>
#include <stdlib.h>

int maxValue(int n, int tab[]){
    int wynik = tab[0];
    for (int i = 0;i<n;i++){
        if (wynik < tab[i]){
            wynik = tab[i];
        }}
    return wynik;

    }


int main() {
    int tab1[] = {8,7,46,5,4,3,2,1};
    printf("najwieksza wartosc w tablicy to: %d", maxValue(8, tab1));
    return 0;
}
