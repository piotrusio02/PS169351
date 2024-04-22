#include <stdio.h>
#include <stdlib.h>

void strConcat(char nap1[], char nap2[], char nap3[]){
    int i;
    int temp = 0;
    for(i = 0; nap1[i]!=0;i++){
        nap3[i] = nap1[i];
        temp++;
    }
    for(i=temp;nap2[i-temp] != 0; i++){
        nap3[i] = nap2[i-temp];
    }
}

int main()
{
    char napis[]= "To je";
    char nap2[] = "st test";
    char nap3[100];
    strConcat(napis, nap2, nap3);
    printf("%s", nap3);
    return 0;
}

/* funkcja - rozwiazanie z zajec 

void strConcat(char nap1[], char nap2[], char nap3[]){
    int i;
    for(i = 0; nap1[i]!=0;i++){
        nap3[i] = nap1[i];
    }
    int j;
    for(j;nap2[j] != 0; i++){
        nap3[i+j] = nap2[j];
    }
    nap3[i+j] = 0;
}

*/
