#include <stdio.h>
#include <stdlib.h>

void rmDigits(char nap[]){
    int i;
    for(i=0;nap[i] != 0;i++){
        if(nap[i] >= 48 && nap[i] <= 57){
            for(int j=i;nap[j] != 0;j++){
                nap[j] = nap[j+1];
            }
        i = i-1;
    }}
    nap[i] = '\0';
}


int main()
{
    char napis[] = "t3o je34st5 te2st45567";
    rmDigits(napis);
    printf("%s", napis); /* to jest test */
    return 0;
}
