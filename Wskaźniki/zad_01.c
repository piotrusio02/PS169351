/* Skopiuj lub przepisz kod i sprawdź wyniki na standardowym wyjściu: */

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%Iu\n", sizeof(int)); // wyjście to 4, jest to rozmiar typu int
printf("%Iu\n", sizeof(int*)); // wyjście to 8, jest to rozmiar wkaźnika do "int"
return 0;
}

