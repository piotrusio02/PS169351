#include <stdio.h>
#include <stdlib.h>

int calculateSquareRootFloor(int n){

    float p = 1.0;
    while (p * p - n > 0.00001 || n - p * p > 0.00001){
        p = (p + n / p) / 2.0;
    }
    int calkowite;
    for(int i=1;i<=p;i++){
        calkowite = i;
    }
    return calkowite;
}

int main() {
    int n;
    printf("Podaj dodatnia liczbe calkowita n: ");
    scanf("%d", &n);
    printf("%d", calculateSquareRootFloor(n));
    return 0;
}
