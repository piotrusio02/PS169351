#include <stdio.h>
#include <stdlib.h>

void cutStr(char nap[], int n, int m){
   int i;
   int j;
    for (i = n, j = m + 1; nap[j] != '\0'; ++i, ++j) {
        nap[i] = nap[j];
    }
    nap[i] = '\0';
   }

int main() {
    char napis[] = "to jest test";
    cutStr(napis, 2, 6);
    printf("%s", napis); /* to test */
    return 0;
}
