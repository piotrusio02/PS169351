#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Ile masz dolarow: ");
    scanf(" %f", &x);

    printf("Po przeliczeniu masz %.2f euro!", x * 0.85);
    return 0;
}
