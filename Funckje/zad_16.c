/* Napisz funkcję calculate16, której argumentem jest dodania liczba całkowita 𝑛. 
Funkcja ma zwracać wartość wyrażoną wzorem 𝑓(𝑛) = 2𝑓(𝑛 − 1) + 3𝑓(𝑛 − 2), gdzie 𝑓(1) = 2
i 𝑓(2) = 3. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculate16(int unsigned n){
    if (n == 1){
        return 2;
    }
    else if (n == 2){
        return 3;
    }
    else if (n > 2){
        return 2 * calculate16(n-1) + 3 * calculate16(n-2);
    }
}

int main()
{
    printf("%d\n", calculate16(1));
    printf("%d\n", calculate16(2));
    printf("%d\n", calculate16(3));
    printf("%d\n", calculate16(4));
    printf("%d\n", calculate16(5));
    return 0;
}
