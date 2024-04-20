#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char txt[]){
    int i;
    for(i=0;txt[i] != 0; i++){
        if (txt[i] >= 65 && txt[i] <= 90){
            txt[i] = txt[i] + 32;
        }}
}

int main()
{
    char napis[]= "To JeSt TeSt";
    printf("%s\n", napis);
    toLowerNew(napis);
    printf("%s", napis);
    return 0;
}
