#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char firstName[];
    char lastName[];
    int id;
    double gpa;
};

int main(){
    struct Student s1 = {"Anna", "Kowalska", 1, 4.3};
    struct Student s2 = {"Michał", "Mały", 2, 3.4};
    struct Student s3 = {"Patrycja", "Niska", 3, 3.1};
    struct Student tablica[] = {s1,s2,s3};
    return 0;
}
