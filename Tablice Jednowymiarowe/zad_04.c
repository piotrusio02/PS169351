/* 
  Napisz funkcję copyArr, która otrzymuje trzy argumenty: dodatnią liczbę całkowitą n
oraz dwie n-elementowe tablice tab1, tab2 o elementach typu int i przepisuje kolejno
elementy tablicy tab1 do tablicy tab2. Stwórz przypadek testowy.
*/

#include <stdio.h>
#include <stdlib.h>

void copyArr(int n, int tab1[], int tab2[]){

    for(int i = 0; i < n; i++){
        tab2[i] = tab1[i];
    }
    printf("skopiowana tablica: ");
    for(int i=0;i<n;i++) {
        printf("%d, ",tab2[i]);
    }

}

int main()
{
    int tab1[] = {14,56,23,6};
    int tab2[] = {};
    copyArr(4,tab1,tab2);

    return 0;
}
