/* Napisz funkcję calculate13, której argumentem jest dodatnia liczba całkowita 𝑛. 
Funkcja ma zwracać wartość wyrażoną wzorem 𝑓(𝑛) = 2𝑓(𝑛 − 1) + 3, gdzie 𝑓(1) = 1. Stwórz
przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculate13(int n){
    if (n == 1){
        return 1;
    }
    else if (n > 1){
        return 2 * (calculate13(n-1)) + 3;
    }
}

int main()
{
    printf("%d\n", calculate13(2));
    printf("%d\n", calculate13(3));
    printf("%d", calculate13(4));
    return 0;
}
