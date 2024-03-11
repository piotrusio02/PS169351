/* Napisz funkcję calculateAbsoluteValue, której argumentem jest liczba zmiennoprzecinkowa. 
Funkcja ma zwracać wartość bezwzględną liczby przekazanej jako argument funkcji. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

float calculateAbosoluteValue(float x){
    if (x < 0){
        return -x;
    }
    return x;

}
int main(){

    float x;
    printf("podaj liczbe: ");
    scanf("%f", &x);
    printf("%.2f", calculateAbosoluteValue(x));
    return 0;
}
