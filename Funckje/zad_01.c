/* Napisz funkcję sumTwoNumbers, której argumentami są dwie liczby całkowite. Funkcja
ma wyświetlać sumę liczb przekazany jako argument funkcji. Stwórz przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

int sumTwoNumbers(int x, int y){
    return x+y;
}

int main(){
printf("%d + %d = %d\n",4,6, sumTwoNumbers(4,6));
printf("%d + %d = %d\n",5,25, sumTwoNumbers(5,25));
return 0;
}
