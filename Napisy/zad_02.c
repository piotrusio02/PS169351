#include <stdio.h>
#include <stdlib.h>

int countNums(char txt1[]){
    int wynik;
    for(int i=0;txt1[i] != 0;i++){
            if(txt1[i] >47 && txt1[i] < 58){
                wynik++;
    }}
    return wynik;
}




int main()
{
    char napis[]= "kj1hg5h5677g";
    printf("%d", countNums(napis)); /* zwraca 6 */
    return 0;
}
