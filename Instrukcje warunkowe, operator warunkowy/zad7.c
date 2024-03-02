#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("podaj zmienna a: ");
    scanf("%f", &a);
    printf("podaj zmienna b: ");
    scanf("%f", &b);
    printf("podaj zmienna c: ");
    scanf("%f", &c);
    float delta = (pow(b , 2) - 4*a*c);
    if (delta < 0){
        printf("Delta jest ujemna, brak miejsc zerowych.");
    }
    else if (delta == 0){
        float pierwiastek1 = (-b - sqrt(delta)) / (2 * a);
        printf("jest tylko jeden pierwiastek: %.2f \n", pierwiastek1);
    }
    else {
        float pierwiastek1 = (-b - sqrt(delta)) / (2 * a);
        float pierwiastek2 = (-b + sqrt(delta)) / (2 * a);
        printf("pierwszy pierwiastek: %.2f \n", pierwiastek1);
        printf("drugi pierwiastek: %.2f \n", pierwiastek2);
    }
    return 0;
}
