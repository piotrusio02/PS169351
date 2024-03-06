#include <stdio.h>
#include <stdlib.h>


int main(){

    int fib1 = 0;
    int fib2 = 1;
    int fibio, i;
    printf("%d, %d, ", fib1,fib2);
    while (i < 8){
        fibio = fib1 + fib2;
        printf("%d, ", fibio);
        fib1 = fib2;
        fib2 = fibio;
        i++;
    }
    return 0;
}
