#include <stdio.h>
#include <stdlib.h>

int lenght(char n1[]){
    int dlugosc=0;;
    for(int i= 0;n1[i] != '\0';i++){
        dlugosc++;
    }
    return dlugosc;
}

void funkcja(char n1[], char n2[]){
    int temp = 0;
    if (lenght(n1) > 1){
    for(int i = lenght(n1)-2;n1[i] != '\0';i++){
        n2[temp] = n1[i];
        temp++;
    }
    n2[temp] = '\0';
    }

    else{
        n2[temp] = n1[temp];
        n2[temp+1] = '\0';}
    }


int main() {
    char napis[] = "t";
    char napis2[] = "t3";
    char napis3[] = "zadanie";
    char n2[100];
    funkcja(napis, n2);
    printf("%s\n", n2); /* out: t */
    funkcja(napis2, n2);
    printf("%s\n", n2); /* out: t3 */
    funkcja(napis3, n2);
    printf("%s\n", n2); /* out: ie */
    return 0;
}
