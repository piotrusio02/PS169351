#include <stdio.h>
#include <stdlib.h>

int sumMatrix(int n, int m, int **tab){ 
    int suma = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            suma += tab[i][j];
        }
    }
    return suma;
}


int main() {
    int **tab2 = malloc(2*sizeof(int*));
    *(tab2+0) = malloc(3*sizeof(int));
    *(tab2+1) = malloc(3*sizeof(int));
    *(*(tab2+0)+0) = 2;
    *(*(tab2+0)+1) = 3;
    *(*(tab2+0)+2) = -8;
    *(*(tab2+1)+0) = 1;
    *(*(tab2+1)+1) = -4;
    *(*(tab2+1)+2) = 7;
    printf("%d\n", sumMatrix(2,3,tab2));
    return 0;
}
