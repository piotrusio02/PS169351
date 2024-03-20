/* Napisz funkcję calculate14, której argumentem jest dodatnia liczba całkowita 𝑛. 
Funkcja ma zwracać wartość wyrażoną wzorem 𝑓(𝑛) = 3𝑓(𝑛 − 1) − 1, gdzie 𝑓(1) = 2. Stwórz
przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculate14(int n){
    if(n == 1){
        return 2;
    }
    else if (n > 1){
        return 3 * calculate14(n-1) - 1;
    }
}

int main()
{
    printf("%d\n", calculate14(2));
    printf("%d\n", calculate14(3));
    printf("%d", calculate14(4));
    return 0;
}
