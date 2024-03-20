/* Napisz rekurencyjną funkcję calculate17, której argumentem jest nieujemna liczba całkowita 𝑛. 
Funkcja ma zwracać wartość wyrażoną wzorem 𝑓(𝑛) = 𝑓(0) + 𝑓(1) + … + 𝑓(𝑛 − 1), gdzie 𝑓(0) = 𝑓(1) = 1. 
Stwórz przypadek testowy. */


#include <stdio.h>
#include <stdlib.h>

int potega(int n, int p)
    {
        int wynik = n;
        for(int i=1;i<p;i++){
            wynik = wynik*n;
        }
        return wynik;
    }

int calculate17(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    else{
        return calculate17(n-1) + potega(calculate17(2),(n-2));
    }
}
int main()
{
    printf("%d\n", calculate17(6));

    return 0;
}

/* Dla calculate17(6) wynik wynosi 32
  f(6) = f(0) + f(1) + f(2) + f(3) + f(4) + f(5) = 1 + 1 + 2 + 4 + 8 + 16  = 32
  f(6) = f(5) + f(2)^(n-2) = 16 + 2^4 = 16 + 16 = 32 */
