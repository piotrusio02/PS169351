/* Stwórz funkcję applyCondition, która przyjmuje trzy argumenty: wskaźnik na funkcję 
condition zwracającą wartość typu int i przyjmującą int, wskaźnik na funkcję
action również przyjmującą i zwracającą int, oraz wartość całkowitą value. Funkcja
applyCondition powinna najpierw wywołać condition z value jako argumentem. 
Jeśli wynik to 1, applyCondition powinna następnie wywołać action na value i zwrócić
wynik. W przeciwnym wypadku powinna zwrócić value bez zmian  */

#include <stdio.h>
#include <stdlib.h>

applyCondition(int(*condition)(int), int(*action)(int), int value)
{
    if(condition(value) == 1){ // Jeśli warunek jest spełniony i argument jest wiekszy od 0
        return action(value); // zwraca argument pomnożony razy 10
    };
    return value; // jeżeli nie spełnia warunku, zwraca początkowy argument.
}

int warunek(int x) // Jeśli argument jest wieksza od 0, funkcja zwraca 1. W innym wypadku 0.
{
    if (x >= 0){
        return 1;
    }
    else{
        return 0;
    }
}

int akcja(int x){ // Funkcja mnoży argument razy 10.
    return x*10;

}

int main()
{
    printf("%d\n", applyCondition(warunek, akcja, 5)); //wyjscie: 50,
    // 5 spełnia warunek przez co jest mnożona razy 10 i zwracana
    printf("%d\n", applyCondition(warunek, akcja, -5));
    // -5 nie spełnia warunku. Funkcja applyCondition zwraca -5
    return 0;
