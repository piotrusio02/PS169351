/* Napisz funkcję sumNumbers, której argumentem jest dodatnia liczba całkowita 𝑛. 
  Funkcja ma zwracać sumę liczb od 1 do 𝑛 włącznie. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int n){
    int suma;
    for(int i = 1;i<=n;i++){
        suma += i;
    }
    return suma;


}
int main(){

    int n;
    printf("podaj liczbe: ");
    scanf("%d", &n);
    printf("%d", sumNumbers(n));
    return 0;
}
