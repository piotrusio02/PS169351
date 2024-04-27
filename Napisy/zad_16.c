#include <stdio.h>
#include <stdlib.h>


int w16(wchar_t nap[]){
    int i;
    int a = 0;
    int j = 100;
    for(i=0;nap[i] != '\0';i++){
        if (nap[i] < 48 || nap[i] > 57){
            return 0;
        }
        else{
            a = a + (nap[i] - 48)*j;
            j = j/10;
        }
    }
    return a;
}

int main()
{
    wchar_t nap[] = L"223";
    wchar_t nap1[] = L"2d4";
    wchar_t nap2[] = L"405";
    wchar_t nap3[] = L"snd";
    printf("%d\n", w16(nap)); /* 223 */
    printf("%d\n", w16(nap1)); /* 0 */
    printf("%d\n", w16(nap2)); /* 405 */
    printf("%d\n", w16(nap3)); /* 0 */
}
