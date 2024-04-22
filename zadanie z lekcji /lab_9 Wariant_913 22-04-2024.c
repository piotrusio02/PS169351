#include <stdio.h>
#include <stdlib.h>

int zadanie(char nap[]){
    int i;
    int wynik = 0;
    for(i=0;nap[i] != '\0'; i++){
        if(nap[i] >= 65 && nap[i] <=90){
            wynik = wynik + 1;
        }
    }
    return wynik;
}

int main()
{
    char napis[]= "To JEST test";
    printf("%d\n", zadanie(napis)); /* zwraca 5 */
    printf("%d\n", zadanie("ABC")); /* zwraca 3 */
    printf("%d\n", zadanie("TestTestTESTtestTEST"));  /* zwraca 10 */
    return 0;
}
