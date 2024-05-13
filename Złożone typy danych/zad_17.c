#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int days_in_month(enum Month arg){
    if(arg == FEB)
        return 28;
    if(arg == APR || arg == JUN || arg == SEP || arg == NOV)
        return 30;
    return 31;
}

int main() {
    enum Month m1 = MAR;
    printf("%d\n", m1); //zwraca 2 (index FEB w enum Month)
    printf("%d\n", days_in_month(m1)); //zwraca 31
    return 0;
}

