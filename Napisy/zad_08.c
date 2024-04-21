

#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char txt[], char txt2[]){
    int i;
    for(i=0;txt[i] != 0; i++){
        txt2[i] = txt[i];
    }}


int main()
{
    char napis[]= "5aATo JeSt TeSt";
    char przepisz[100];
    printf("napisz: %s\n", napis);
    printf("przepisz: %s\n", przepisz);
    strCopyNew(napis, przepisz);
    printf("\nnapisz: %s", napis);
    printf("\nprzepisz: %s\n", przepisz);
    return 0;
}
