#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("podaj rok: ");
    scanf("%d", &x);
    if (x % 4 == 0) {
        if (x % 100 != 0 || x % 400 == 0){
            printf("Rok %d jest przestepny", x); }
        else{
            printf("Rok %d nie jest przestepny", x);
    }}
    else{
            printf("Rok %d nie jest przestepny", x);
    }
    return 0;
}
