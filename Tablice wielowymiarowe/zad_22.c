#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printTable(int n,int m, int **tab){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

void sqEndCols(int **tab, int n, int m){
    for(int i = 0;i<n;i++){
        tab[i][0] = pow(tab[i][0], 2);
        tab[i][m-1] = pow(tab[i][m-1], 2);
    }

}



int main(){
    int **tab = (int**)malloc(sizeof(int*)*4);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);
    tab[3] = (int*)malloc(sizeof(int)*3);

    tab[0][0] = 1;tab[0][1] = 2;tab[0][2] = 3;
    tab[1][0] = 0;tab[1][1] = 5;tab[1][2] = 8;
    tab[2][0] = 9;tab[2][1] = 8;tab[2][2] = -2;
    tab[3][0] = -2;tab[3][1] = 3;tab[3][2] = 4;

    printTable(4,3,tab);
    sqEndCols(tab,4,3);
    printTable(4,3,tab);

    return 0;
}
