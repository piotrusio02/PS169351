/* Napisz funkcję calculateFactorialRecursively, której argumentem jest liczba całkowita nieujemna 𝑛. 
Funkcja ma zwracać wartość silni liczby 𝑛, obliczoną metodą rekurencyjną. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateFactorialRecursively(int  x){
    if(x==1){
        return 1;
    }
    else{
        return x * calculateFactorialRecursively(x-1);
    }
}

int main() {
    int n;
    printf("podaj liczbe: ");
    scanf("%d", &n);
    printf("%d", calculateFactorialRecursively(n));
    return 0;
}
