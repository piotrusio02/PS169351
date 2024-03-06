#include <stdio.h>
#include <stdlib.h>

int main() {
    int dodatnie = 0;
    int ujemne = 0;
    int n;
    do{
        printf("Podaj liczbe: ");
        scanf("%d", &n);
        if (n > 0){
            dodatnie += n;
        }
        else if (n < 0){
            ujemne += n;
        }}
        while (n != 0);
    printf("suma liczb dodatnich: %d\n", dodatnie);
    printf("suma liczb ujemnych: %d\n", ujemne);

    return 0;
}
