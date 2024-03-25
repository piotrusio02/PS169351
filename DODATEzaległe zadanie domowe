#include <stdio.h>
#include <stdlib.h>

int funkcja(int unsigned x){
    int cyfra;
    int suma = 0;
    while (x > 0){
        cyfra = x % 10;
        x /= 10;
        if (cyfra % 2 == 0){
            suma += cyfra;
        }
    }
    if(suma == 0){
        return 0;
    }
    else {
        return suma;
    }
}

int main()
{
    int liczba;
    printf("podaj jakas liczbe: ");
    scanf("%d", &liczba);
    printf("%d", funkcja(liczba));
    return 0;
}

