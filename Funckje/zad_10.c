/* Napisz funkcję calculateFibonacciRecursively, której argumentem jest liczba całkowita nieujemna 𝑛. 
Funkcja ma zwracać 𝑛-ty wyraz ciągu Fibonacciego, obliczony metodą rekurencyjną. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateFibonacciRecursively(int  x){
    if(x<3){
        return 1;
    }
    else{
        return calculateFibonacciRecursively(x-1) + calculateFibonacciRecursively(x-2);
    }
}

int main() {
    int n;
    printf("podaj liczbe: ");
    scanf("%d", &n);
    printf("%d", calculateFibonacciRecursively(n));
    return 0;
}
