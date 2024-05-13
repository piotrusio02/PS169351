/* napisz funkcję add_to_pointers, która przyjmuje jako argumenty trzy wskaźniki na zmienne 
typu int. Funkcja powinna dodać wartość 5 do zmiennej wskazywanej przez pierwszy wskaźnik, 
10 do zminnej wskazywanej przez drugi wskaźnik i 15 do zmiennej wskazywanej przez trzeci
wskaźnik. Stwórz przypadek testowy w main tak, aby wyświetlić na konsoli wartości zmiennych
przed i po dodadaniu wartości. */

#include <stdio.h>
#include <stdlib.h>

void add_to_pointers(int *a, int *b, int *c){
    *a = *a + 5;
    *b = *b + 10;
    *c = *c + 15;
}

int main(){
    int x = 1;
    int y = 2;
    int z = 3;
    printf("%d, %d, %d\n", x, y, z);   // wynik wyjsciowy: 1, 2, 3
    add_to_pointers(&x,&y,&z);
    printf("%d, %d, %d", x, y, z);   //wynik wyjsciowy: 6, 12, 18
return 0;
}

