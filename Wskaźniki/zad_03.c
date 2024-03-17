#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int *w)
{
    *w = x;
}

int main()
{
    int x = 3;
    int w;
    copyInt(x, &w);
    printf("%d", w);
    return 0;
}
