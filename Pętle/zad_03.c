#include <stdio.h>
#include <stdlib.h>

int main() {
    int dodatnie = 0;
    int ujemne = 0;
    int n;
    while(1){
        printf("Podaj liczbe: ");
        scanf("%d", &n);
        if (n > 0){
            dodatnie += n;
        }
        else if (n < 0){
            ujemne += n;
        }
        else {
            break;
        }}
    printf("suma liczb dodatnich: %d\n", dodatnie);
    printf("suma liczb ujemnych: %d\n", ujemne);

    return 0;
}
