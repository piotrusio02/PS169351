#include <stdio.h>
#include <stdlib.h>

int modifyAndSum(int(*modifier)(int), int number1, int number2)
{
    return modifier(number1) + modifier(number2);
}

int modyfikacja(int x) // funkcja zwieksza argument o jeden
{
    return x+1;
}

int modyfikacja2(int x) // funkcja zmienia znak argumentu na przeciwny
{
    return -x;
}

int main()
{
    printf("%d\n", modifyAndSum(modyfikacja, 1, 2));  // wyjscie: 5, (1+1) + (2+1)
    printf("%d\n", modifyAndSum(modyfikacja2, 1, 2)); // wyjscie: -3, (-1) + (-2)
    return 0;
}
