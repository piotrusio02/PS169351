#include <stdio.h>
#include <stdlib.h>

int countFunctionCalls(){
    static int z =1;
    return z++;
}

int main() {
    while(1){
    int n;
    printf("wpisz cos: ");
    scanf("%d", &n);
    printf("tyle razy funkcja zostala wywolana: %d \n", countFunctionCalls());
    }
    return 0;
}
