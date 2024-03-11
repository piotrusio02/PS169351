/* Napisz funkcję, której argumentem są dwie dodatnie liczby całkowite. 
  Funkcja ma zwrócić 1 jesli cyfry jedności obu liczb są różne oraz ma zwrócić zero w 
  pozostałych przypadkach. Stwórz przypadek testowy.  */


#include <stdio.h>
#include <stdlib.h>


int funkcja(const int x,const int y){
      int nowa_x = x % 10;
      int nowa_y = y % 10;
      if (nowa_x != nowa_y){
        return 1;
      }
      return 0;
}

int main(){
    printf("%d, ", funkcja(24, 1234));
    printf("%d, ", funkcja(17, 344));
    printf("%d, ", funkcja(2, 122));
    printf("%d, ", funkcja(64, 535));
    printf("%d, ", funkcja(1024, 500004));

return 0;

}

/* dane wyjściowe w tym przypadku to: 0 1 0 1 0  */
