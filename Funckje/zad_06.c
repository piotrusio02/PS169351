/* Napisz funkcję calculatePowerOfTwo, której argumentem jest liczba całkowita 𝑛. '
Funkcja ma zwracać wartość 2^𝑛. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateSquareOfTwo(int n){

    int x=1;
    for(int i = 1;i<=n;i++){
        x = x*2;
    }
    return x;
}
int main(){
    int n;
    printf("podaj liczbe: ");
    scanf("%d", &n);
    printf("%d", calculateSquareOfTwo(n));
    return 0;
}
