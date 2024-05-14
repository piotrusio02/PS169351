#include <stdio.h>
#include <stdlib.h>

void printTable(int n, int **tab){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

void transArr(int n, int **tab){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }
}

int main(){
    int **tab = (int**)malloc(sizeof(int*)*3);
    tab[0] = (int*)malloc(sizeof(int)*3);
    tab[1] = (int*)malloc(sizeof(int)*3);
    tab[2] = (int*)malloc(sizeof(int)*3);

    tab[0][0] = 1;tab[0][1] = 4;tab[0][2] = 6;
    tab[1][0] = 2;tab[1][1] = 5;tab[1][2] = 7;
    tab[2][0] = 3;tab[2][1] = 6;tab[2][2] = 8;

    printTable(3,tab);
    transArr(3,tab);
    printTable(3,tab);
    return 0;
}
