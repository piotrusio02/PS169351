#include <stdio.h>
#include <stdlib.h>

int main() {
    int silnia = 1;
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    printf("%d! = ", n);
    for(int i = 1;i <=n;i++){
        printf("%d", i);
        (i != n) ? printf(" * ") : printf(" = ");
        silnia = silnia * i;
    }
    printf("%d", silnia);
    return 0;
}
