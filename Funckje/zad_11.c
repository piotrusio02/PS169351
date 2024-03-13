/* Napisz funkcję calculateArithmeticSequenceRecursively, której argumentami są
dwie liczby całkowite: dodatnie 𝑛 (numer wyrazu ciągu do obliczenia) oraz 𝑑 (różnica
ciągu arytmetycznego), przy założeniu, że wyraz początkowy ciągu 𝑎1 wynosi 1. Funkcja
ma zwracać 𝑛-ty wyraz ciągu arytmetycznego, obliczony metodą rekurencyjną. Stwórz
przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateArithmeticSequenceRecursively(int  n, int d){
    if (n == 1){
        return 1;
    }
    else {
        return calculateArithmeticSequenceRecursively(n-1,d) + d;

    }
    }

int main() {
    int n, d;
    printf("podaj liczbe: ");
    scanf("%d", &n);
    printf("podaj liczbe: ");
    scanf("%d", &d);
    printf("%d", calculateArithmeticSequenceRecursively(n, d));
    return 0;
}
