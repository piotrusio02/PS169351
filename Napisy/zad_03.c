#include <stdio.h>
#include <stdlib.h>

int countVow(char txt[]){
    int wynik;
    int samogloski[] = {'A','a','E','e','I','i','O','o','U','u','Y','y'};
    for(int j=0;samogloski[j] != 0;j++){
        for(int i=0;txt[i] !=0;i++){
            if (txt[i] == samogloski[j]){
                wynik++;
            }
    }}
    return wynik;
}

int main()
{
    char napis[]= "3i47d7yczok0naips8uoolui";
    printf("%d", countVow(napis)); /* zwraca 10 */
    return 0;
}
