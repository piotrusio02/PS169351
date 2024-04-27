#include <stdio.h>
#include <stdlib.h>

void wStrConcat(wchar_t nap1[], wchar_t nap2[], wchar_t nap3[]){
    int i, j;
    for(i=0;nap1[i] != '\0';i++){
        nap3[i] = nap1[i];
    }
    for(i,j=0;nap2[j] != '\0';i++,j++){
        nap3[i] = nap2[j];
    }
    nap3[i] = '\0';
}

int main(){
    wchar_t nap1[] = L"Mala pszczola ";
    wchar_t nap2[] = L"robi duzo miodu";
    wchar_t nap3[100];
    wStrConcat(nap1, nap2, nap3);
    wprintf(L"%s", nap3); /* out: Mala pszczola robi duzo miodu */

}
