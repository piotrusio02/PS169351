/* Napisz funkcję calculate, która przyjmuje dwa argumenty: wskaźnik na funkcję
operation oraz liczbę całkowitą number. Funkcja operation ma przyjmować jeden
argument typu int i zwracać wartość typu int. Funkcja calculate powinna wywołać
funkcję operation z argumentem number i zwrócić jej wynik. Stwórz przypadek
testowy */

#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int pom(int arg){
    return arg-5;
}

int main(){
    printf("%d\n", calculate(pom, 22));
    return 0;
}
