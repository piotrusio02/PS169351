/* Napisz funkcję initFloats, która nie przyjmuje argumentów i rezerwuje blok trzech
zmiennych typu float, ustawiając ich wartości kolejno na 4.5, 2.3, -4.2. Funkcja zwraca
wskaźnik na pierwszą ze zmiennych w bloku. Utwórz przypadek testowy w funkcji main,
który wyświetla wartości z bloku stworzonego przez funkcję. */

#include <stdio.h>
#include <stdlib.h>

float *initFloats(){
    float *wsk = malloc(3*sizeof(float));
    *wsk = 4.5;
    *(wsk+1) = 2.3;
    *(wsk+2) = -4.2;
    return wsk;

}

int main()
{
    float *wynik = initFloats();
    printf("%.2f\n", *wynik); //pierwsza zminna
    printf("%.2f\n", *(wynik+1));
    printf("%.2f\n", *(wynik+2));

    return 0;
}
