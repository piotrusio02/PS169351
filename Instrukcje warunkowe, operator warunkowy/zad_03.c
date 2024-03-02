#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj ocene w skali od 1 do 5: ");
    scanf("%d", &a);
    if (a < 0 || a > 5) {
        printf("ocena nie jest z skali!");
    }
    switch (a) {
    case 1:
        printf("niedostateczny!");
        break;
    case 2:
        printf("dopuszczajacy!");
        break;
    case 3:
        printf("dostateczny!");
        break;
    case 4:
        printf("dobry!");
        break;
    case 5:
        printf("bardzo dobry");
        break;
    }
    return 0;
}

