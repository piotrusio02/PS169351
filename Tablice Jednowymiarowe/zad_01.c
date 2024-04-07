/* 
  Napisz funkcję findMaxValue, która przyjmuje jako argumenty tablicę liczb całkowitych
numbers oraz jej rozmiar size (dodatnia liczba całkowita). Funkcja powinna przeszukać
tablicę i wyświetlić maksymalną wartość znalezioną w tej tablicy. Stwórz przypadek
testowy
*/

#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], int size){
    int wynik = numbers[0];
    for (int i=0;i < size; i++){
        if (wynik < numbers[i]) {
            wynik = numbers[i];
        }}
    printf("najwieksza z tablicy: %d", wynik);
}

int main()
{
    int test[] = {4,3,12,23,5};
    findMaxValue(test, 5);
    return 0;
}
