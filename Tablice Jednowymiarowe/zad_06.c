#include <stdio.h>
#include <stdlib.h>

void reverseArr(int n, int tab[]){
    for(int i = 0; i <n/2;i++){
        int temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }}

int main() {
    int n = 8;
    int tab1[] = {8,7,6,5,4,3,2,1};
    reverseArr(n, tab1);
    
    printf("Tablica w odwrotnej kolejności:");
    for (int i = 0; i < n; i++) {
        printf("%d, ", tab1[i]);
    }
    return 0;
}
