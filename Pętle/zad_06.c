/* Napisz program, który prosi użytkownika o wprowadzenie dodatniej liczby całkowitej n, a
następnie oblicza i wyświetla ⌊√𝑛⌋ (część całkowita/podłoga pierwiastka kwadratowego). */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Podaj dodatnia liczbe calkowita n: ");
    scanf("%d", &n);

    float p = 1.0;
    while (p * p - n > 0.00001 || n - p * p > 0.00001){
        p = (p + n / p) / 2.0;
    }
    int przyblizenie;
    for(int i=1;i<=p;i++){
        przyblizenie = i;
    }
    printf("%d", przyblizenie);
    return 0;
}
