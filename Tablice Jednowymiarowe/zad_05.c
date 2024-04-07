/*
  Napisz funkcję revCopy, która otrzymuje trzy argumenty: dodatnią liczbę całkowitą n
oraz dwie n-elementowe tablice tab1, tab2 o elementach typu int i przepisuje elementy
tablicy tab1 do tablicy tab2 w odwrotnej kolejności. Stwórz przypadek testowy.
  */

#include <stdio.h>
#include <stdlib.h>

void revCopy(int n, int tab1[], int tab2[]){

    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[n-1 - i];
    }

    printf("skopiowana, odwrocona tablica: ");
    for(int i = 0; i < n; i++) {
        printf("%d, ",tab2[i]);
    }

}

int main() {
    int n = 5;
    int tab1[] = {23, 42, 1, 46, 105};
    int tab2[n];

    revCopy(n, tab1, tab2);

    return 0;
}
