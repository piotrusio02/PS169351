#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("podaj 3 liczby: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    float s = (x+y+z)/3.00;
    printf("srednia z tych trzech liczb: %.2f", s);
    return 0;
}
