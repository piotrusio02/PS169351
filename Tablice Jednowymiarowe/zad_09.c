#include <stdio.h>
#include <stdlib.h>

int  maxIdx(int n, int tab[]){
    int ind = 0;
    for (int i = 0;i<n;i++){
        if (tab[ind]< tab[i]){
            ind = i;
        }}
    return ind;

    }


int main() {
    int tab1[] = {111,7,1036,5,2,34,1036,11};
    printf("indeks najwyzszej wartosci w tablicy to: %d",  maxIdx(8, tab1));
    return 0;
}
