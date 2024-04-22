#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void wStrCopyNew(wchar_t src[], wchar_t dest[]){
    int i = 0;
    while(src[i] != 0){
        dest[i] = src[i];
        i++;
    }
    dest[i]=0;
}


int main()
{
    wchar_t napis[] = L"1234556";
    wchar_t n2[100];
    wStrCopyNew(napis, n2);
    wprintf(L"%s", n2);
    return 0;
}
