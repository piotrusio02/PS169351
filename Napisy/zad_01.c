#include <stdio.h>
#include <stdlib.h>

int length(char * napis){
    int licznik = 0;
    for(int i=0; napis[i] != '\0'; i++){
        licznik++;
    }
    return licznik;
}

int main()
{
    printf("%d\n", length("Zadanie"));
    return 0;
}

/* INNE ROZWIAZANIE */

#include <stdio.h>
#include <stdlib.h>

int length(char * napis){
    int i = 0;
    while(*(napis+i) != 0){
        i++;
    }
    return i;
}

int main()
{
    printf("%d\n", length("Zadanie"));
    return 0;
}

/* INNE ROZWIAZANIE */

#include <stdio.h>
#include <stdlib.h>

int length(char * napis){
    if (napis[0] == 0)
        return 0;
    return 1+ length(++napis);
}

int main()
{
    printf("%d\n", length("Zadanie"));
    return 0;
}


/* MOJE ROZWIAZANIE W DOMU */

#include <stdio.h>
#include <stdlib.h>

int length(char * napis){
    int wynik;
    while(*napis) {
        wynik++;
        napis++;;
    }
    return wynik;
}

int main()
{
    char * napis = "to jest 0 czy 1?";
    printf("%d", length(napis)); /* zwraca 16 */
    return 0;
}
