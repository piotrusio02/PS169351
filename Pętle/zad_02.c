#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Podaj liczbe: ");
    scanf(" %d", &n);
    int suma = 0;
    int i = 1;
    while(i < n+1){
        suma += i;
        i++;
    }
    printf("%d", suma);

    return 0;
}
