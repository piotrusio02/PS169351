#include <stdio.h>
#include <stdlib.h>


void rmLower(char nap[]){
    int i;
    for(i=0;nap[i]!=0;i++){
        if(nap[i] >= 97 && nap[i] <= 122){
            for(int j=i;nap[j]!=0;j++){
                nap[j] = nap[j+1];
            }
        i = i-1;
        }}}

int main()
{
    char napis[] = "TdhewihfEdjkhdjicSuTlll";
    rmLower(napis);
    printf("%s", napis); /* TEST */
    return 0;
}
