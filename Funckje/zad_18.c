/* Napisz rekrurencyjną funkcję calculateGCD, której argumentami są dwie dodatnie liczby
całkowite 𝑛 i 𝑚. Funkcja ma zwracać największy wspólny dzielnik (NWD) tych liczb
algorytmem Euklidesa. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateGCD(int n, int m){
    if (n!=m){
        return calculateGCD(n>m ? n-m : n, m>n ? m-n : m);
    }
    return n; }

    /*
int calculateGCD(int n, int m){
    while(n != m){
        if (n > m){
            n = n - m; }
        else{
            m = m - n; }}
    return n;
} */

int main()
{
    printf("NWD(100,17) = %d\n", calculateGCD(100,17));
    printf("NWD(24,56) = %d\n", calculateGCD(24,56));

    return 0;
}
