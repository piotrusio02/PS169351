#include <stdio.h>
#include <stdlib.h>


void strNcopy(char nap1[], char nap2[], int n){
    int i;
    for(i=0;nap1[i] != 0;i++){
        if (i == n){
            break;
        }
        else {
        nap2[i] = nap1[i];
    }}
}

int main()
{
    char napis[]= "abc123";
    char przepisz[100];
    printf("napisz: %s\n", napis);
    strNcopy(napis, przepisz, 3);
    printf("\nnapisz: %s", napis);
    printf("\nprzepisz: %s\n", przepisz);
    return 0;
}
