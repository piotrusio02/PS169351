#include <stdio.h>
#include <stdlib.h>

int main() {
    float x = 1.0e10;
    float y = -1.0e10;
    float z = 1.0;

    float wynik = (x + y) + z;
    float wynik2 = x + (y + z);

    printf("(a + b) + c = %.2f\n", wynik);
    printf("a + (b + c) = %.2f\n", wynik2);

    return 0;
}
