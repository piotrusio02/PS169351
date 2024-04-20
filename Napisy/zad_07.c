#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char txt[]){
    int i;
    for(i=0;txt[i] != 0; i++){
        if(txt[i] >= 97 && txt[i] <= 122){
            txt[i] = txt[i] - 32;
        }
    }}
int main()
{
    char napis[]= "5a ATo JeSt TeSt";
    printf("%s\n", napis);
    toUpperNew(napis);
    printf("%s", napis);
    return 0;
}
