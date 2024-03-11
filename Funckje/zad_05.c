/* Napisz funkcję sumSquares, której argumentem jest dodatnia liczba całkowita 𝑛. 
  Funkcja ma zwracać sumę kwadratów liczb od 1 do 𝑛 włącznie. Stwórz przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n){
    int suma_kw;
    for(int i = 1;i <=n;i++){
        suma_kw += i*i;
        }
    return suma_kw;
}

int main(){
    int n;
    printf("podaj liczbe: ");
    scanf("%d", &n);
    printf("%d", sumSquares(n));
    return 0;
}
