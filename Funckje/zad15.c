/* Napisz funkcję calculate15, której argumentem jest dodatnia liczba całkowita 𝑛. 
Funkcja ma zwracać wartość wyrażoną wzorem 𝑓(𝑛) = 𝑓(𝑛 − 1) + 2𝑓(𝑛 − 2), 
gdzie 𝑓(1) = 1 i 𝑓(2) = 2. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculate15(int n){
    if (n == 1){
        return 1;
    }
    else if (n == 2){
        return 2;
    }
    else if (n > 2){
        return calculate15(n-1) + 2 * calculate15(n-2);
    }
}


int main()
{
    printf("%d\n", calculate15(1));
    printf("%d\n", calculate15(2));
    printf("%d\n", calculate15(3));
    printf("%d\n", calculate15(4));
    printf("%d\n", calculate15(5));
    return 0;
}
