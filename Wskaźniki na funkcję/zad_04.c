/* Napisz funkcję calculateOperation, która przyjmuje jako argumenty: wskaźnik na
funkcję operation, która przyjmuje dwa argumenty typu double i zwraca double, oraz
dwa argumenty typu double - number1 i number2. Funkcja calculateOperation ma
zwracać wynik wywołania funkcji operation na argumentach number1 i number2. Stwórz
przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

double calculateOperation(double (*operation)(double, double), double number1, double number2)
{
    return operation(number1, number2);
}

double operacja(double x, double y)
{
    return x + y;
}

int main()
{
    printf("%.2lf", calculateOperation(operacja, 2.2, 3.8));
    return 0;
}
