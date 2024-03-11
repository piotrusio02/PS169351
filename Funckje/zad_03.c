/* Napisz funkcję calculateFactorial, której argumentem jest liczba całkowita nieujemna.
Funkcja ma zwracać wartość silni liczby przekazanej jako argument funkcji, obliczoną
metodą nierekurencyjną. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(int unsigned x){
    int silnia = 1;
    for(int i = 1;i<x+1;i++){
        silnia = silnia * i;
    }
    return silnia;


}

int main(){

    int unsigned x;
    printf("podaj liczbe: ");
    scanf("%d", &x);
    printf("%d",calculateFactorial(x));
    return 0;
}
