#include <stdio.h>
#include <stdlib.h>

void copyMat(int n, int m, int tab1[n][m], int tab2[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            tab1[i][j] = tab2[i][j];
        }
    }
}

void printTable(int n, int m, int tab[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");



}

int main()
{
    int tab1[3][3];
    int tab2[3][3] = { {1,2,3},{2,3,4},{3,4,5}};
    printTable(3,3, tab2);
    copyMat(3,3,tab1,tab2);
    printTable(3,3,tab1);

}
